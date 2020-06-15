#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h> 
#include <GL/glut.h>
#include <Windows.h>

//Pattern 1 
void Circle1(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9 + 90.4;
		double y = sin(1.9 * M_PI * i / ngon) * 12.9 + 13.9;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle1(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9 + 90.4;
		double y = sin(1.9 * M_PI * i / ngon) * 12.9 + 13.9;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle2(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9 + 71.6;
		double y = sin(2 * M_PI * i / ngon) * 13.7 + 13.9;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle2(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9 + 71.6;
		double y = sin(2 * M_PI * i / ngon) * 13.7 + 13.9;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle3(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9.5 + 90.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 40.8;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle3(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9.5 + 90.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 40.8;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle4(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9 + 71.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 41.1;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle4(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9 + 71.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 41.1;
		glVertex2d(x, y);
	}
	glEnd();
}
void SmallCircle1(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 2.8 + 80.9;
		double y = sin(2 * M_PI * i / ngon) * 5 + 27;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineSmallCircle1(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 2.8 + 80.9;
		double y = sin(2 * M_PI * i / ngon) * 5 + 27;
		glVertex2d(x, y);
	}
	glEnd();
}
void FadeCircle1(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 8 + 80.9;
		double y = sin(2 * M_PI * i / ngon) * 9 + 27;
		glVertex2d(x, y);
	}
	glEnd();
}

void UpdateDisplay(int) {
	glutTimerFunc(17, UpdateDisplay, 1);
}

void RenderProcess() {
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3ub(128, 0, 0);
	glBegin(GL_QUADS);
	{
		glVertex2d(0, 0);
		glVertex2d(0, 100);
		glVertex2d(100, 100);
		glVertex2d(100, 0);
	}glEnd();

	FadeCircle1(3.4, 80);

	//Pattern 1
	Circle1(3.4, 80);
	LineCircle1(3.4, 80);
	Circle2(3.4, 80);
	LineCircle2(3.4, 80);
	Circle3(3.4, 80);
	LineCircle3(3.4, 80);
	Circle4(3.4, 80);
	LineCircle4(3.4, 80);
	SmallCircle1(3.4, 80);
	LineSmallCircle1(3.4, 80);
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(600, 450);
	glutCreateWindow("Milleano Jody Alfredo Walimema 672018141");

	glutDisplayFunc(RenderProcess);

	gluOrtho2D(0, 100, 100, 0);
	glEnable(GL_POINT_SMOOTH);
	glutTimerFunc(17, UpdateDisplay, 1);

	glutMainLoop();

	return(0);
}