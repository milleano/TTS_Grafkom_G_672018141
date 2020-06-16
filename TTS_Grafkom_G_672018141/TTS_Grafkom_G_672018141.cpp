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
//Pattern 2 
void Circle5(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9.3 + 52.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.8 + 13.9;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle5(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9.3 + 52.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.8 + 13.9;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle6(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9 + 33.6;
		double y = sin(2 * M_PI * i / ngon) * 12.9 + 13.9;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle6(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9 + 33.6;
		double y = sin(2 * M_PI * i / ngon) * 12.9 + 13.9;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle7(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9 + 52.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 40.1;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle7(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9 + 52.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 40.1;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle8(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9.5 + 33.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 41.1;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle8(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9.5 + 33.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 41.1;
		glVertex2d(x, y);
	}
	glEnd();
}
void SmallCircle2(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 3.1 + 43;
		double y = sin(2 * M_PI * i / ngon) * 4.2 + 26.4;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineSmallCircle2(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 3.1 + 43;
		double y = sin(2 * M_PI * i / ngon) * 4.2 + 26.4;
		glVertex2d(x, y);
	}
	glEnd();
}
void FadeCircle2(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 8 + 43.7;
		double y = sin(2 * M_PI * i / ngon) * 9 + 27.8;
		glVertex2d(x, y);
	}
	glEnd();
}
//Pattern 3
void Circle9(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9.5 + 90.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 66.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle9(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9.5 + 90.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 66.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle10(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9 + 71.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 67;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle10(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9 + 71.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 67;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle11(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9.5 + 90.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 92.2;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle11(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9.5 + 90.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 92.2;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle12(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9 + 71.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 93.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle12(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9 + 71.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 93.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void SmallCircle3(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 3.1 + 80.7;
		double y = sin(2 * M_PI * i / ngon) * 4.4 + 79.8;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineSmallCircle3(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 3.1 + 80.7;
		double y = sin(2 * M_PI * i / ngon) * 4.4 + 79.8;
		glVertex2d(x, y);
	}
	glEnd();
}
void FadeCircle3(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9 + 80.7;
		double y = sin(2 * M_PI * i / ngon) * 11 + 79.8;
		glVertex2d(x, y);
	}
	glEnd();
}
//Pattern 4 
void Circle13(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9.5 + 52.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 66.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle13(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9.5 + 52.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 66.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle14(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9 + 33.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 67;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle14(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9 + 33.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 67;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle15(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9.5 + 52.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 92.2;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle15(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9.5 + 52.6;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 92.2;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle16(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9 + 33.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 93.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle16(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9 + 33.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 93.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void SmallCircle4(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 2.9 + 42.8;
		double y = sin(2 * M_PI * i / ngon) * 4 + 79.8;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineSmallCircle4(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 2.9 + 42.8;
		double y = sin(2 * M_PI * i / ngon) * 4 + 79.8;
		glVertex2d(x, y);
	}
	glEnd();
}
void FadeCircle4(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9 + 43;
		double y = sin(2 * M_PI * i / ngon) * 11 + 79.8;
		glVertex2d(x, y);
	}
	glEnd();
}
void SmallCircle5(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 3.1 + 62.1;
		double y = sin(2 * M_PI * i / ngon) * 4.2 + 53;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineSmallCircle5(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 3.1 + 62.1;
		double y = sin(2 * M_PI * i / ngon) * 4.2 + 53;
		glVertex2d(x, y);
	}
	glEnd();
}
void FadeCircle5(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 8 + 62.1;
		double y = sin(2 * M_PI * i / ngon) * 9 + 54.1;
		glVertex2d(x, y);
	}
	glEnd();
}
void SmallCircle6(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 3 + 24;
		double y = sin(2 * M_PI * i / ngon) * 4.3 + 53;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineSmallCircle6(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 3 + 24;
		double y = sin(2 * M_PI * i / ngon) * 4.3 + 53;
		glVertex2d(x, y);
	}
	glEnd();
}
void FadeCircle6(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 8 + 24.2;
		double y = sin(2 * M_PI * i / ngon) * 9 + 53;
		glVertex2d(x, y);
	}
	glEnd();
}
//Pattern 5 
void Circle17(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9.5 + 14.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 13.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle17(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 9.5 + 14.6;
		double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 13.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle18(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9.5 + 14.4;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 40.1;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle18(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 9.5 + 14.4;
		double y = sin(2 * M_PI * i / ngon) * 12.5 + 40.1;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle19(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 4.6 + 0.001;
		double y = sin(2 * M_PI * i / ngon) * 11.8 + 13.4;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle19(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(1.9 * M_PI * i / ngon) * 4.6 + 0.001;
		double y = sin(2 * M_PI * i / ngon) * 11.8 + 13.4;
		glVertex2d(x, y);
	}
	glEnd();
}
void Circle20(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 4.1 + 0.001;
		double y = sin(1.9 * M_PI * i / ngon) * 11 + 39.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineCircle20(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 4.1 + 0.001;
		double y = sin(1.9 * M_PI * i / ngon) * 11 + 39.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void SmallCircle7(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 2.9 + 5.1;
		double y = sin(2 * M_PI * i / ngon) * 4 + 26.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void LineSmallCircle7(double r, int vertex) {
	double ngon = (double)vertex;
	glLineWidth(4);
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 2.9 + 5.1;
		double y = sin(2 * M_PI * i / ngon) * 4 + 26.7;
		glVertex2d(x, y);
	}
	glEnd();
}
void FadeCircle7(double r, int vertex) {
	double ngon = (double)vertex;
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = cos(2 * M_PI * i / ngon) * 8 + 5.1;
		double y = sin(2 * M_PI * i / ngon) * 9 + 26.7;
		glVertex2d(x, y);
	}
	glEnd();
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
	FadeCircle2(3.4, 80);
	FadeCircle3(3.4, 80);
	FadeCircle4(3.4, 80);
	FadeCircle5(3.4, 80);
	FadeCircle6(3.4, 80);
	FadeCircle7(3.4, 80);

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

	//Pattern 2
	Circle5(3.4, 80);
	LineCircle5(3.4, 80);
	Circle6(3.4, 80);
	LineCircle6(3.4, 80);
	Circle7(3.4, 80);
	LineCircle7(3.4, 80);
	Circle8(3.4, 80);
	LineCircle8(3.4, 80);
	SmallCircle2(3.4, 80);
	LineSmallCircle2(3.4, 80);

	//Pattern 3
	Circle9(3.4, 80);
	LineCircle9(3.4, 80);
	Circle10(3.4, 80);
	LineCircle10(3.4, 80);
	Circle11(3.4, 80);
	LineCircle11(3.4, 80);
	Circle12(3.4, 80);
	LineCircle12(3.4, 80);
	SmallCircle3(3.4, 80);
	LineSmallCircle3(3.4, 80);

	//Pattern 4
	Circle13(3.4, 80);
	LineCircle13(3.4, 80);
	Circle14(3.4, 80);
	LineCircle14(3.4, 80);
	Circle15(3.4, 80);
	LineCircle15(3.4, 80);
	Circle16(3.4, 80);
	LineCircle16(3.4, 80);
	SmallCircle4(3.4, 80);
	LineSmallCircle4(3.4, 80);
	SmallCircle5(3.4, 80);
	LineSmallCircle5(3.4, 80);
	SmallCircle6(3.4, 80);
	LineSmallCircle6(3.4, 80);

	//Pattern 5
	Circle17(3.4, 80);
	LineCircle17(3.4, 80);
	Circle18(3.4, 80);
	LineCircle18(3.4, 80);
	Circle19(3.4, 80);
	LineCircle19(3.4, 80);
	Circle20(3.4, 80);
	LineCircle20(3.4, 80);
	SmallCircle7(3.4, 80);
	LineSmallCircle7(3.4, 80);
	
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(600, 450);
	glutCreateWindow("Milleano Jody Alfredo Walimema 672018141");

	glutDisplayFunc(RenderProcess);

	gluOrtho2D(0, 100, 100, 0);
	glutMainLoop();

	return(0);
}