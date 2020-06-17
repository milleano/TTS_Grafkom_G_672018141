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
//Pattern 6
void Circle21(double r, int vertex) {
		double ngon = (double)vertex;
		glColor3ub(255, 255, 255);
		glBegin(GL_POLYGON);
		for (int i = 0; i < vertex; i++) {
			double x = cos(2 * M_PI * i / ngon) * 9.5 + 14.6;
			double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 67.1;
			glVertex2d(x, y);
		}
		glEnd();
	}
void LineCircle21(double r, int vertex) {
		double ngon = (double)vertex;
		glLineWidth(4);
		glColor3ub(0, 0, 0);
		glBegin(GL_LINE_LOOP);
		for (int i = 0; i < vertex; i++) {
			double x = cos(2 * M_PI * i / ngon) * 9.5 + 14.6;
			double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 67.1;
			glVertex2d(x, y);
		}
		glEnd();
	}
void Circle22(double r, int vertex) {
		double ngon = (double)vertex;
		glColor3ub(255, 255, 255);
		glBegin(GL_POLYGON);
		for (int i = 0; i < vertex; i++) {
			double x = cos(1.9 * M_PI * i / ngon) * 9 + 14.6;
			double y = sin(2 * M_PI * i / ngon) * 12.5 + 92.8;
			glVertex2d(x, y);
		}
		glEnd();
	}
void LineCircle22(double r, int vertex) {
		double ngon = (double)vertex;
		glLineWidth(4);
		glColor3ub(0, 0, 0);
		glBegin(GL_LINE_LOOP);
		for (int i = 0; i < vertex; i++) {
			double x = cos(1.9 * M_PI * i / ngon) * 9 + 14.6;
			double y = sin(2 * M_PI * i / ngon) * 12.5 + 92.8;
			glVertex2d(x, y);
		}
		glEnd();
	}	
void Circle23(double r, int vertex) {
		double ngon = (double)vertex;
		glColor3ub(255, 255, 255);
		glBegin(GL_POLYGON);
		for (int i = 0; i < vertex; i++) {
			double x = cos(2 * M_PI * i / ngon) * 5 + 0.001;
			double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 94;
			glVertex2d(x, y);
		}
		glEnd();
	}
void LineCircle23(double r, int vertex) {
		double ngon = (double)vertex;
		glLineWidth(4);
		glColor3ub(0, 0, 0);
		glBegin(GL_LINE_LOOP);
		for (int i = 0; i < vertex; i++) {
			double x = cos(2 * M_PI * i / ngon) * 5 + 0.001;
			double y = sin(1.9 * M_PI * i / ngon) * 12.5 + 94;
			glVertex2d(x, y);
		}
		glEnd();
	}
void Circle24(double r, int vertex) {
		double ngon = (double)vertex;
		glColor3ub(255, 255, 255);
		glBegin(GL_POLYGON);
		for (int i = 0; i < vertex; i++) {
			double x = cos(1.9 * M_PI * i / ngon) * 4.9 + 0.001;
			double y = sin(2 * M_PI * i / ngon) * 12.4 + 67.6;
			glVertex2d(x, y);
		}
		glEnd();
	}
void LineCircle24(double r, int vertex) {
		double ngon = (double)vertex;
		glLineWidth(4);
		glColor3ub(0, 0, 0);
		glBegin(GL_LINE_LOOP);
		for (int i = 0; i < vertex; i++) {
			double x = cos(1.9 * M_PI * i / ngon) * 4.9 + 0.001;
			double y = sin(2 * M_PI * i / ngon) * 12.4 + 67.6;
			glVertex2d(x, y);
		}
		glEnd();
	}
void SmallCircle8(double r, int vertex) {
		double ngon = (double)vertex;
		glColor3ub(255, 255, 255);
		glBegin(GL_POLYGON);
		for (int i = 0; i < vertex; i++) {
			double x = cos(2 * M_PI * i / ngon) * 2.9 + 5.8;
			double y = sin(2 * M_PI * i / ngon) * 4 + 79.8;
			glVertex2d(x, y);
		}
		glEnd();
	}
void LineSmallCircle8(double r, int vertex) {
		double ngon = (double)vertex;
		glLineWidth(4);
		glColor3ub(0, 0, 0);
		glBegin(GL_LINE_LOOP);
		for (int i = 0; i < vertex; i++) {
			double x = cos(2 * M_PI * i / ngon) * 2.9 + 5.8;
			double y = sin(2 * M_PI * i / ngon) * 4 + 79.8;
			glVertex2d(x, y);
		}
		glEnd();
	}
void FadeCircle8(double r, int vertex) {
		double ngon = (double)vertex;
		glColor3ub(0, 0, 0);
		glBegin(GL_POLYGON);
		for (int i = 0; i < vertex; i++) {
			double x = cos(2 * M_PI * i / ngon) * 8 + 5.8;
			double y = sin(2 * M_PI * i / ngon) * 9 + 79.8;
			glVertex2d(x, y);
		}
		glEnd();
	}
void Cross1() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(10.5, 18);
		glVertex2f(12.5, 16);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(11, 16);
		glVertex2f(12.5, 18);

		glEnd();
	}
void Cross2() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(16.5, 12);
		glVertex2f(18.5, 10);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(17, 10);
		glVertex2f(18.5, 12);

		glEnd();
	}
void Cross3() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(30.5, 12);
		glVertex2f(32.5, 10);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(31, 10);
		glVertex2f(32.5, 12);

		glEnd();
	}
void Cross4() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(35.5, 18);
		glVertex2f(37.5, 16);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(36, 16);
		glVertex2f(37.5, 18);

		glEnd();
	}
void Cross5() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(49.5, 18);
		glVertex2f(51.5, 16);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(50, 16);
		glVertex2f(51.5, 18);

		glEnd();
	}
void Cross6() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(55.5, 12);
		glVertex2f(57.5, 10);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(56, 10);
		glVertex2f(57.5, 12);

		glEnd();
	}
void Cross7() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(66.5, 12);
		glVertex2f(68.5, 10);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(67, 10);
		glVertex2f(68.5, 12);

		glEnd();
	}
void Cross8() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(72.5, 18);
		glVertex2f(74.5, 16);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(73, 16);
		glVertex2f(74.5, 18);

		glEnd();
	}
void Cross9() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(86.5, 18);
		glVertex2f(88.5, 16);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(87, 16);
		glVertex2f(88.5, 18);

		glEnd();
	}
void Cross10() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(92.5, 12);
		glVertex2f(94.5, 10);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(93, 10);
		glVertex2f(94.5, 12);

		glEnd();
	}
void Cross11() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(92.5, 46);
		glVertex2f(94.5, 44);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(93, 44);
		glVertex2f(94.5, 46);

		glEnd();
	}
void Cross12() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(86.5, 38);
		glVertex2f(88.5, 36);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(87, 36);
		glVertex2f(88.5, 38);

		glEnd();
	}
void Cross13() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(72.5, 38);
		glVertex2f(74.5, 36);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(73, 36);
		glVertex2f(74.5, 38);

		glEnd();
	}
void Cross14() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(66.5, 46);
		glVertex2f(68.5, 44);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(67, 44);
		glVertex2f(68.5, 46);

		glEnd();
	}
void Cross15() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(55.5, 46);
		glVertex2f(57.5, 44);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(56, 44);
		glVertex2f(57.5, 46);

		glEnd();
	}
void Cross16() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(49.5, 38);
		glVertex2f(51.5, 36);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(50, 36);
		glVertex2f(51.5, 38);

		glEnd();
	}
void Cross17() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(35.5, 38);
		glVertex2f(37.5, 36);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(36, 36);
		glVertex2f(37.5, 38);

		glEnd();
	}
void Cross18() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(30.5, 46);
		glVertex2f(32.5, 44);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(31, 44);
		glVertex2f(32.5, 46);

		glEnd();
	}
void Cross19() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(16.5, 46);
		glVertex2f(18.5, 44);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(17, 44);
		glVertex2f(18.5, 46);

		glEnd();
	}
void Cross20() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(10.5, 38);
		glVertex2f(12.5, 36);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(11, 36);
		glVertex2f(12.5, 38);

		glEnd();
	}
void Cross21() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(10.5, 73);
		glVertex2f(12.5, 71);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(11, 71);
		glVertex2f(12.5, 73);

		glEnd();
	}
void Cross22() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(16.5, 66);
		glVertex2f(18.5, 64);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(17, 64);
		glVertex2f(18.5, 66);

		glEnd();
	}
void Cross23() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(29.5, 66);
		glVertex2f(31.5, 64);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(30, 64);
		glVertex2f(31.5, 66);

		glEnd();
	}
void Cross24() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(35.5, 73);
		glVertex2f(37.5, 71);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(36, 71);
		glVertex2f(37.5, 73);

		glEnd();
	}
void Cross25() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(49.5, 73);
		glVertex2f(51.5, 71);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(50, 71);
		glVertex2f(51.5, 73);

		glEnd();
	}
void Cross26() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(55.5, 66);
		glVertex2f(57.5, 64);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(56, 64);
		glVertex2f(57.5, 66);

		glEnd();
	}
void Cross27() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(66.5, 66);
		glVertex2f(68.5, 64);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(67, 64);
		glVertex2f(68.5, 66);

		glEnd();
	}
void Cross28() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(72.5, 73);
		glVertex2f(74.5, 71);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(73, 71);
		glVertex2f(74.5, 73);

		glEnd();
	}
void Cross29() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(86.5, 73);
		glVertex2f(88.5, 71);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(87, 71);
		glVertex2f(88.5, 73);

		glEnd();
	}
void Cross30() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(92.5, 66);
		glVertex2f(94.5, 64);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(93, 64);
		glVertex2f(94.5, 66);

		glEnd();}
void Cross31() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(92.5, 99);
		glVertex2f(94.5, 97);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(93, 97);
		glVertex2f(94.5, 99);

		glEnd();
	}
void Cross32() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(86.5, 90);
		glVertex2f(88.5, 88);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(87, 88);
		glVertex2f(88.5, 90);

		glEnd();
	}
void Cross33() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(72.5, 90);
		glVertex2f(74.5, 88);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(73, 88);
		glVertex2f(74.5, 90);

		glEnd();
	}
void Cross34() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(66.5, 99);
		glVertex2f(68.5, 97);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(67, 97);
		glVertex2f(68.5, 99);

		glEnd();
	}
void Cross35() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(55.5, 99);
		glVertex2f(57.5, 97);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(56, 97);
		glVertex2f(57.5, 99);

		glEnd();
	}
void Cross36() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(49.5, 90);
		glVertex2f(51.5, 88);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(50, 88);
		glVertex2f(51.5, 90);

		glEnd();
	}
void Cross37() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(35.5, 90);
		glVertex2f(37.5, 88);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(36, 88);
		glVertex2f(37.5, 90);

		glEnd();
	}
void Cross38() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(29.5, 99);
		glVertex2f(31.5, 97);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(30, 97);
		glVertex2f(31.5, 99);

		glEnd();
	}
void Cross39() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(16.5, 99);
		glVertex2f(18.5, 97);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(17, 97);
		glVertex2f(18.5, 99);

		glEnd();
	}
void Cross40() {
		glLineWidth(5);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(10.5, 90);
		glVertex2f(12.5, 88);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(11, 88);
		glVertex2f(12.5, 90);

		glEnd();
	}
void Plus1() {

		glLineWidth(2);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(5, 22.5);
		glVertex2f(5, 31);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(1.5, 26.5);
		glVertex2f(8.5, 26.5);

		glEnd();
	}
void Plus2() {

		glLineWidth(2);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(43, 22.5);
		glVertex2f(43, 31);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(39.5, 26.5);
		glVertex2f(46.5, 26.5);

		glEnd();
	}
void Plus3() {

		glLineWidth(2);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(81, 22.7);
		glVertex2f(81, 31.2);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(77.2, 26.7);
		glVertex2f(84, 26.7);

		glEnd();
	}
void Plus4() {

		glLineWidth(2);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(62, 48.5);
		glVertex2f(62, 57);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(58.5, 52.5);
		glVertex2f(65.5, 52.5);

		glEnd();
	}
void Plus5() {

		glLineWidth(2);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(80.6, 76);
		glVertex2f(80.6, 84.5);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(77.1, 80);
		glVertex2f(84.1, 80);

		glEnd();
	}
void Plus6() {

		glLineWidth(2);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(42.6, 76.5);
		glVertex2f(42.6, 85);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(39.1, 80.5);
		glVertex2f(46.1, 80.5);

		glEnd();
	}
void Plus7() {

		glLineWidth(2);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(5.6, 76.5);
		glVertex2f(5.6, 85);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(2.1, 80.5);
		glVertex2f(9.1, 80.5);

		glEnd();
	}
void Plus8() {

		glLineWidth(2);
		glColor3ub(128, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(24, 48.5);
		glVertex2f(24, 57);

		glEnd();

		glBegin(GL_LINES);
		glVertex2f(20.5, 52.5);
		glVertex2f(27.5, 52.5);

		glEnd();

	glFlush();
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

	//Pattern 6
	Circle21(3.4, 80);
	LineCircle21(3.4, 80);
	Circle22(3.4, 80);
	LineCircle22(3.4, 80);
	Circle23(3.4, 80);
	LineCircle23(3.4, 80);
	Circle24(3.4, 80);
	LineCircle24(3.4, 80);
	SmallCircle8(3.4, 80);
	LineSmallCircle8(3.4, 80);


	Cross1();
	Cross2();
	Cross3();
	Cross4();
	Cross5();
	Cross6();
	Cross7();
	Cross8();
	Cross9();
	Cross10();
	Cross11();
	Cross12();
	Cross13();
	Cross14();
	Cross15();
	Cross16();
	Cross17();
	Cross18();
	Cross19();
	Cross20();
	Cross21();
	Cross22();
	Cross23();
	Cross24();
	Cross25();
	Cross26();
	Cross27();
	Cross28();
	Cross29();
	Cross30();
	Cross31();
	Cross32();
	Cross33();
	Cross34();
	Cross35();
	Cross36();
	Cross37();
	Cross38();
	Cross39();
	Cross40();
	Plus1();
	Plus2();
	Plus3();
	Plus4();
	Plus5();
	Plus6();
	Plus7();
	Plus8();

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