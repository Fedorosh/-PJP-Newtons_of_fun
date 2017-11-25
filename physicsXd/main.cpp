#include <iostream>
#include <glew.h>
#include <freeglut.h>
using namespace std;

void renderScene(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0, 0.0, 0.0, 1.0);//clear red

	glutSwapBuffers();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(500, 500);//optional
	glutInitWindowSize(800, 600); //optional
	glutCreateWindow("Dzia³a kuurrwa");

	glewInit();
	if (glewIsSupported("GL_VERSION_6_14"))
	{
		cout << "wspiera";
	}
	else cout << "nie wspiera";

	glEnable(GL_DEPTH_TEST);

	glutDisplayFunc(renderScene);

	glutMainLoop();
	return 0;
}
