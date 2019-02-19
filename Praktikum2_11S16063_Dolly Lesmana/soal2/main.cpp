/*PRAKTIKUM 2*/
/*11S16063*/
/*DOLLY LESMANA*/



#include <windows.h>
#include <GL/glut.h>



/////////////////////////////GL_TRIANGLES_STRIP/////////////////////////////////
/*
void drawLine()
{
	glLineWidth(10);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
		glVertex2d(0,0); // segitiga atas
		glVertex2d(90,90);
		glLineWidth(10);
		glVertex2d(90,0);
		glVertex2d(90,90);
		glLineWidth(10);
		glVertex2d(90,90);
		glVertex2d(-90,90);


		glVertex2d(100,-100); // segitiga bawah
		glVertex2d(0,-100);
		glLineWidth(10);
		glVertex2d(100,0);
		glVertex2d(0,-100);
		glLineWidth(10);
		glVertex2d(100,-100);
		glVertex2d(100,0);
		glLineWidth(10);

	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutCreateWindow("SOAL 2- GL_TRIANGLES_STRIP ");
		gluOrtho2D(-320.,320.,-240.,240.);
	glutDisplayFunc(drawLine);
	glutMainLoop();
} */


/////////////////////////////GL_TRIANGLES_FAN/////////////////////////////////


void drawLine()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2d(0,0);
		glVertex2d(90,90);
		glVertex2d(90,0);
		glVertex2d(-90,90);
		glVertex2d(0,0);
		glVertex2d(90,-90);

	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutCreateWindow("("SOAL 2- GL_TRIANGLES_FAN");
		gluOrtho2D(-320.,320.,-240.,240.);
	glutDisplayFunc(drawLine);
	glutMainLoop();
}


/////////////////////////////GL_SQUAD_STRIP/////////////////////////////////
/*
void drawPoliline() {
	glLineWidth(10);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUAD_STRIP);
	glVertex2d(50,50);
	glVertex2d(100,50);

	glVertex2d(100,-50);
	glVertex2d(-100,-100);

	glVertex2d(100,100);
	glVertex2d(-50,100);

	glVertex2d(50,100);
	glVertex2d(50,50);

	glEnd();
	glFlush();
}
int main(int argc,char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutCreateWindow(("SOAL 2- GL_SQUAD_STRIP "));
		gluOrtho2D(-320.,320.,-240.,240);
	glutDisplayFunc(drawPoliline);
	glutMainLoop();
}*/






