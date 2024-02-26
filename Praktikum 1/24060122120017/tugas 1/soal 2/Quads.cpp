#include <GL/glut.h>
#include <stdlib.h>

void quad(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	
	//warna item
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.40f,0.20f,0.0f);
	glVertex3f(0.40f,0.20f,0.0f);
	glVertex3f(0.40f,0.00f,0.0f);
	glVertex3f(-0.40f,0.00f,0.0f);
	
	//warna putih
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-0.40f,0.00f,0.0f);
    glVertex3f(0.40f,0.00f,0.0f);
    glVertex3f(0.40f, -0.20f,0.0f);
    glVertex3f(-0.40f, -0.20f,0.0f);
    
    //warna hijau
    glColor3f(0.0f, 0.59f, 0.211f);
    glVertex3f(-0.40f, -0.20f,0.0f);
    glVertex3f(0.40f, -0.20f,0.0f);
    glVertex3f(0.40f, -0.40f,0.0f);
    glVertex3f(-0.40f, -0.40f,0.0f);
	
	glEnd();
	
	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.40, 0.20, 0.00);
    glVertex3f(-0.10, -0.10, 0.00);
    glVertex3f(-0.40, -0.40, 0.00);
    glEnd();

	glFlush();
}

/*int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(1080,1080);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("quads");
	glutDisplayFunc(quad);
	glClearColor(0.0f,0.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}*/
