#include <iostream>
#include <glew.h>
#include <freeglut.h>
using namespace std;

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(500, 500);//optional
	glutInitWindowSize(800, 600); //optional
	glutCreateWindow("Dzia³a kuurrwa");

	glutMainLoop();
	return 0;
}
