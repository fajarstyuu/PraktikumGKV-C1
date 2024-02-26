#include <GL/glut.h>
#include <stdlib.h>

void linestrip(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-0.20f,0.20f,0.0f);
	glVertex3f(0.20f,0.20f,0.0f);
	glColor3f(0.9f,0.5f,0.5f);
	glVertex3f(0.20f,-0.20f,0.0f);
	glVertex3f(-0.20f,-0.20f,0.0f);
	glColor3f(0.5f,0.9f,0.5f);
	glVertex3f(-0.20f,0.20f,0.0f);
	glVertex3f(0.00f,0.30f,0.0f);
	glColor3f(0.5f,0.5f,0.9f);
	glVertex3f(0.30f,0.30f,0.0f);
	glVertex3f(0.20f,0.20f,0.0f);
	glVertex3f(0.30f,0.30f,0.0f);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.30f,-0.10f,0.0f);
	glVertex3f(0.20f,-0.20f,0.0f);
	
	glEnd();
	glFlush();
}

//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(1366,768);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutCreateWindow("linestrip");
//	glutDisplayFunc(linestrip);
//	glClearColor(1.0f,1.0f,1.0f,1.0f);
//	glutMainLoop();
//	return 0;
//}
