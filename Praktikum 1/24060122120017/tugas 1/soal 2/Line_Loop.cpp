#include <GL/glut.h>
#include <stdlib.h>

void lineloop(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5.0f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.6f,0.5f,0.0f);
	glVertex3f(-0.30f,-0.20f,0.0f);
	glVertex3f(0.00f,0.60f,0.0f);
	glVertex3f(0.30f,-0.20f,0.0f);
	glVertex3f(-0.30f,0.40f,0.0f);
	glVertex3f(0.30f,0.40f,0.0f);
	
	glEnd();
	glFlush();
}

/*int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(1366,768);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("lineloop");
	glutDisplayFunc(lineloop);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}*/
