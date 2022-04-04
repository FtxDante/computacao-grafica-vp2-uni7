// OpenGL.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include<GLFW/glut.h>
#include<Windows.h>

void init(void) {
	glClearColor(1, 1, 1, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 200, 0, 200);

}

void lineSegment(void) {
	// Exemplo Inicial
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0.4, 0.2);
	glBegin(GL_LINES);
	glVertex2i(0, 0);
	glVertex2i(200, 200);
	glEnd();
	glColor3f(1.0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(20, 180);
	glVertex2i(180, 20);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1200, 650);
	glutCreateWindow("Hello Word!");
	init();
	glutDisplayFunc(lineSegment);
	glutMainLoop();

	return 0;

}