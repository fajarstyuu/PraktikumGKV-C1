#include <GL/glut.h>
#include <stdlib.h>

void kuromi(void) {
    glClear(GL_COLOR_BUFFER_BIT);
	
	
	//Start Warna
    
    //Kuping kiri
    glColor3f(0.298f, 0.235f, 0.239f);
    glRectf(-0.68f, 0.575f, -0.64f, 0.600f);
    glRectf(-0.70f, 0.550f, -0.58f, 0.575f);
    glRectf(-0.70f, 0.525f, -0.56f, 0.550f);
    glRectf(-0.70f, 0.500f, -0.56f, 0.525f);
    glRectf(-0.70f, 0.475f, -0.60f, 0.500f);
    glRectf(-0.70f, 0.450f, -0.62f, 0.475f);
    glRectf(-0.68f, 0.425f, -0.64f, 0.450f);
    //End Kuping Kiri
    
    //Tudung
    //Tudung Main
    glRectf(-0.56f, 0.475f, -0.36f, 0.500f);
    glRectf(-0.60f, 0.450f, -0.32f, 0.475f);
    glRectf(-0.62f, 0.425f, -0.30f, 0.450f);
    glRectf(-0.64f, 0.400f, -0.28f, 0.425f);
    glRectf(-0.64f, 0.375f, -0.28f, 0.400f);
    glRectf(-0.46f, 0.350f, -0.42f, 0.375f);
    
    //Tudung Kiri
    glRectf(-0.66f, 0.325f, -0.56f, 0.375f);
    glRectf(-0.68f, 0.275f, -0.58f, 0.325f);
    glRectf(-0.68f, 0.200f, -0.60f, 0.300f);
    glRectf(-0.66f, 0.175f, -0.60f, 0.200f);
    //end tudung kiri
    
    //tudung kanan
    glRectf(-0.32f, 0.350f, -0.26f, 0.375f);
    glRectf(-0.30f, 0.325f, -0.24f, 0.350f);
    glRectf(-0.28f, 0.200f, -0.22f, 0.325f);
    //end tudung kanan
    
    //Kuping kanan
    glRectf(-0.22f, 0.425f, -0.36f, 0.575f);
    glRectf(-0.22f, 0.575f, -0.28f, 0.600f);
    //end kuping kanan
    
    //Warna Kalung
    glRectf(-0.54f, 0.075f, -0.42f, 0.100f);
    glRectf(-0.54f, 0.050f, -0.52f, 0.075f);
    glRectf(-0.44f, 0.050f, -0.42f, 0.075f);
    
    
    
    //End Warna
    
    //item
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.62f, 0.150f, -0.66f, 0.175f);
    glRectf(-0.66f, 0.175f, -0.68f, 0.200f);
    glRectf(-0.68f, 0.200f, -0.70f, 0.225f);
    glRectf(-0.68f, 0.225f, -0.70f, 0.250f);
    glRectf(-0.68f, 0.250f, -0.70f, 0.275f);
    glRectf(-0.68f, 0.275f, -0.70f, 0.300f);
    glRectf(-0.68f, 0.300f, -0.70f, 0.325f);
    
    //geser kanan 1 kotak
    glRectf(-0.68f, 0.325f, -0.66f, 0.350f);
    glRectf(-0.68f, 0.350f, -0.66f, 0.375f);
    
    //geser kanan 2 kotak || Basis telinga kiri kiri
    glRectf(-0.66f, 0.375f, -0.64f, 0.400f);
    glRectf(-0.66f, 0.400f, -0.64f, 0.425f);
    
    //geser kanan 3 kotak
    glRectf(-0.64f, 0.425f, -0.62f, 0.450f);
    
    //geser kanan 4 kotak
    glRectf(-0.62f, 0.450f, -0.60f, 0.475f);
    
    //geser kanan 5 kotak
    glRectf(-0.60f, 0.475f, -0.58f, 0.500f);
    glRectf(-0.58f, 0.475f, -0.56f, 0.500f);
    
    //Bagian kepala atas lurus || basis kuping kanan kiri
    glRectf(-0.56f, 0.500f, -0.36f, 0.525f);
    
    //Kepala Kanan
    //geser kanan 5 kotak
    glRectf(-0.36f, 0.475f, -0.34f, 0.500f);
    glRectf(-0.34f, 0.475f, -0.32f, 0.500f);
    
    glRectf(-0.32f, 0.450f, -0.30f, 0.475f);
    
    glRectf(-0.30f, 0.425f, -0.28f, 0.450f);
    
    //Basis kuping kanan bagian kanan
    glRectf(-0.28f, 0.400f, -0.26f, 0.425f);
    glRectf(-0.28f, 0.375f, -0.26f, 0.400f);
    
    glRectf(-0.26f, 0.325f, -0.24f, 0.350f);
    glRectf(-0.26f, 0.350f, -0.24f, 0.375f);
    
    glRectf(-0.24f, 0.200f, -0.22f, 0.225f);
    glRectf(-0.24f, 0.225f, -0.22f, 0.250f);
    glRectf(-0.24f, 0.250f, -0.22f, 0.275f);
    glRectf(-0.24f, 0.275f, -0.22f, 0.300f);
    glRectf(-0.24f, 0.300f, -0.22f, 0.325f);
    
    glRectf(-0.26f, 0.175f, -0.24f, 0.200f);
    
    
    //kuping kiri
    glRectf(-0.68f, 0.400f, -0.66f, 0.425f);
    glRectf(-0.70f, 0.425f, -0.68f, 0.450f);
    
    glRectf(-0.72f, 0.450f, -0.70f, 0.475f);
    glRectf(-0.72f, 0.475f, -0.70f, 0.500f);
    glRectf(-0.72f, 0.500f, -0.70f, 0.525f);
    glRectf(-0.72f, 0.525f, -0.70f, 0.550f);
    glRectf(-0.72f, 0.550f, -0.70f, 0.575f);
    
    glRectf(-0.74f, 0.575f, -0.68f, 0.650f);
    
    glRectf(-0.68f, 0.600f, -0.66f, 0.625f);
    glRectf(-0.66f, 0.600f, -0.64f, 0.625f);
    
    glRectf(-0.64f, 0.575f, -0.62f, 0.600f);
    glRectf(-0.62f, 0.575f, -0.60f, 0.600f);
    glRectf(-0.60f, 0.575f, -0.58f, 0.600f);
    
    glRectf(-0.58f, 0.550f, -0.56f, 0.575f);
    
    glRectf(-0.56f, 0.525f, -0.54f, 0.550f);
    
    //Kuping Kanan
    glRectf(-0.36f, 0.525f, -0.38f, 0.550f);
    
    glRectf(-0.34f, 0.550f, -0.36f, 0.575f);
    
    glRectf(-0.28f, 0.575f, -0.34f, 0.600f);
    
    glRectf(-0.24f, 0.600f, -0.28f, 0.625f);
    
    glRectf(-0.18f, 0.575f, -0.24f, 0.650f);
    
    glRectf(-0.20f, 0.450f, -0.22f, 0.575f);
    
    glRectf(-0.22f, 0.425f, -0.24f, 0.450f);
    
    glRectf(-0.24f, 0.400f, -0.26f, 0.425f);
    
    //tudung
    glRectf(-0.28f, 0.175f, -0.26f, 0.275f);
    
    glRectf(-0.30f, 0.275f, -0.28f, 0.325f);
    glRectf(-0.32f, 0.325f, -0.30f, 0.350f);
    glRectf(-0.34f, 0.350f, -0.32f, 0.375f);
    glRectf(-0.38f, 0.375f, -0.34f, 0.400f);
    glRectf(-0.42f, 0.350f, -0.38f, 0.375f);
    glRectf(-0.46f, 0.325f, -0.42f, 0.350f);
    
    glRectf(-0.50f, 0.350f, -0.46f, 0.375f);
    glRectf(-0.54f, 0.375f, -0.50f, 0.400f);
    glRectf(-0.56f, 0.350f, -0.54f, 0.375f);
    glRectf(-0.58f, 0.325f, -0.56f, 0.350f);
    glRectf(-0.60f, 0.275f, -0.58f, 0.325f);
    glRectf(-0.62f, 0.175f, -0.60f, 0.275f);
    glRectf(-0.60f, 0.150f, -0.58f, 0.175f);
    
    //Tudung bawah
    //kotak gede
    glRectf(-0.56f, 0.075f, -0.60f, 0.150f);
    glRectf(-0.34f, 0.100f, -0.56f, 0.125f);
    glRectf(-0.30f, 0.125f, -0.36f, 0.150f);
    glRectf(-0.26f, 0.150f, -0.30f, 0.175f);
    
    //kalung 2
    glRectf(-0.54f, 0.050f, -0.56f, 0.100f);
    glRectf(-0.52f, 0.025f, -0.54f, 0.050f);
    glRectf(-0.50f, 0.050f, -0.52f, 0.075f);
    glRectf(-0.46f, 0.075f, -0.50f, 0.100f);
    
    //kalung 3
    glRectf(-0.44f, 0.050f, -0.46f, 0.075f);
    glRectf(-0.42f, 0.025f, -0.44f, 0.050f);
    glRectf(-0.40f, 0.050f, -0.42f, 0.100f);
    glRectf(-0.34f, 0.075f, -0.40f, 0.100f);
    
    //badan
    //tangan kiri
    glRectf(-0.64f, 0.075f, -0.66f, 0.150f);
    glRectf(-0.60f, 0.050f, -0.64f, 0.075f);
    
    //badan kiri
    glRectf(-0.58f, -0.025f, -0.60f, 0.050f);
    
    //kaki kiri
    //bagian kanan
    glRectf(-0.54f, -0.025f, -0.58f, 0.000f);
    glRectf(-0.52f, -0.050f, -0.54f, -0.025f);
    glRectf(-0.50f, -0.125f, -0.52f, -0.050f);
    
    //bagian kiri
    glRectf(-0.60f, -0.100f, -0.62f, -0.025f);
    glRectf(-0.58f, -0.125f, -0.60f, -0.100f);
    glRectf(-0.52f, -0.150f, -0.58f, -0.125f);
    
    //badan bawah
    glRectf(-0.42f, -0.125f, -0.50f, -0.100f);
    
    //kaki kanan
    glRectf(-0.34f, -0.150f, -0.42f, -0.125f);
    glRectf(-0.32f, -0.125f, -0.34f, -0.100f);
    glRectf(-0.30f, -0.100f, -0.32f, -0.025f);
    glRectf(-0.36f, -0.050f, -0.40f, -0.025f);
    
    //tangan kanan
    glRectf(-0.30f, -0.025f, -0.36f, 0.000f);
    glRectf(-0.34f, 0.000f, -0.38f, 0.025f);
    glRectf(-0.36f, 0.025f, -0.38f, 0.050f);
    glRectf(-0.28f, 0.000f, -0.30f, 0.050f);
    glRectf(-0.30f, 0.050f, -0.34f, 0.075f);
    
    
    //mata dan mulut
    glRectf(-0.56f, 0.275f, -0.54f, 0.325f);
    glRectf(-0.54f, 0.225f, -0.50f, 0.300f);
    glRectf(-0.38f, 0.250f, -0.34f, 0.275f);
    glRectf(-0.34f, 0.275f, -0.32f, 0.300f);
    
    glRectf(-0.48f, 0.175f, -0.46f, 0.200f);
    glRectf(-0.42f, 0.175f, -0.40f, 0.200f);
    glRectf(-0.46f, 0.175f, -0.42f, 0.150f);
    
    //hidung
    glColor3f(1.0f, 0.00f, 0.00f);
    glRectf(-0.46f, 0.250f, -0.42f, 0.225f);
    
    //warna kalung
    glColor3f(0.9098f, 0.509f, 0.59f);
    //kalung kiri
    glRectf(-0.52f, 0.000f, -0.54f, 0.025f);
    //kalung kanan
    glRectf(-0.44f, 0.000f, -0.42f, 0.025f);
    
    //tengkorak
    glRectf(-0.46f, 0.375f, -0.42f, 0.475f);
    glRectf(-0.42f, 0.450f, -0.40f, 0.475f);
    glRectf(-0.46f, 0.450f, -0.48f, 0.475f);
    glRectf(-0.42f, 0.400f, -0.40f, 0.425f);
    glRectf(-0.46f, 0.400f, -0.48f, 0.425f);
    glRectf(-0.38f, 0.425f, -0.40f, 0.450f);
    glRectf(-0.48f, 0.425f, -0.50f, 0.450f);
    
    //warna tangan
    glColor3f(0.956f, 0.756f, 0.8f);
    glRectf(-0.60f, 0.075f, -0.62f, 0.100f);
    glRectf(-0.32f, 0.075f, -0.34f, 0.100f);
    
    glFlush();
}


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(1080,1080);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("kuromi");
	glutDisplayFunc(kuromi);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
