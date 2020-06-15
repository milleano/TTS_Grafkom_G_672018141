#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h> 
#include <GL/glut.h>
#include <Windows.h>


void UpdateDisplay(int) {
	glutTimerFunc(17, UpdateDisplay, 1);
}


void RenderProcess() {

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