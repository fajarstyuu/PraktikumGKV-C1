#include <GL/glut.h>
#include <stdlib.h>

void trianglefan(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex3f(-0.30f,0.00f,0.0f);
	glVertex3f(0.00f,0.60f,0.0f);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex3f(0.30f,0.00f,0.0f);
	glVertex3f(0.90f, -0.30f, 0.0f);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex3f(0.30f, -0.60f, 0.0f);
	glVertex3f(0.00f, -0.70f, 0.0f);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex3f(-0.30f, -0.60f, 0.0f);
	glVertex3f(-0.90f, -0.30f, 0.0f);
	
	
	glEnd();
	glFlush();
}

/*int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(1080,1080);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("triangle_fan");
	glutDisplayFunc(trianglefan);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}*/
