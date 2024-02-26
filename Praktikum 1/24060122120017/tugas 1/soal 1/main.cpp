#include <GL/glut.h>

void Garis(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(80.0f);
    glBegin(GL_LINES);
    
    //warna item
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.50, 0.30, 0.0);
    glVertex3f(0.50, 0.30, 0.0);
    
    //warna putih
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-0.50, 0.09, 0.0);
    glVertex3f(0.50, 0.09, 0.0);
    
    //warna hijau
    glColor3f(0.0f, 0.59f, 0.211f);
    glVertex3f(-0.50, -0.12, 0.0);
    glVertex3f(0.50, -0.12, 0.0);
    
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(720, 720);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Garis");
    glutDisplayFunc(Garis);
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
