#include <iostream>
#include "Dependencies\freeglut\freeglut.h"
#include "Dependencies\glew\glew.h"
using namespace std;

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(500, 500);//optional
	glutInitWindowSize(800, 600); //optional
	glutCreateWindow("OpenGL First Window");

	glutMainLoop();
	return 0;
}
