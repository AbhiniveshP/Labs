#include <GL/glut.h>

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.25, 0.75, 0.45);
	glBegin(GL_QUADS);
		glVertex3f(0.2, 0.5, 0.0);
        //glVertex3f(0.2, 0.1, 0.0);
        glVertex3f(0.4, 0.5, 0.0);
        glVertex3f(0.5, 0.4, 0.0);
        glVertex3f(0.4, 0.1, 0.0);

        
           
		
	glEnd();
	glFlush();
}

void Init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	//glMatrixMode(GL_PROJECTION);
	//glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(350, 350);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("GL-QUADRILATERAL");
	
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}