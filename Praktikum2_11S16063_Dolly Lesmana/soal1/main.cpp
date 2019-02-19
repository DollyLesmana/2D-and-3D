/*PRAKTIKUM 2*/
/*11S16063*/
/*DOLLY LESMANA*/



#include <windows.h>
#include <GL/glut.h>


/////////////////////////////GL_LINES/////////////////////////////////
/* GL_LINES
void drawLine()
{
	glLineWidth(10);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
		glVertex2d(0,0);
		glVertex2d(150,150);
	glEnd();
	glFlush();
} */

/*int main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutCreateWindow("SOAL 1 GL_LINES");
		gluOrtho2D(-320.,320.,-240.,240.);
	glutDisplayFunc(drawLine);
	glutMainLoop();
} */


/////////////////////////////GL_LINE_STRIP/////////////////////////////////
/*
void drawPoliline()
{
	glLineWidth(10);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_STRIP);
		glVertex2d(150,150);
		glVertex2d(-150,150);
		glLineWidth(10);
		glVertex2d(-150,-150);
		glVertex2d(150,-150);
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
	glutCreateWindow("SOAL 1 - GL_LINE-STRIP");
		gluOrtho2D(-320.,320.,-240.,240.);
	glutDisplayFunc(drawPoliline);
	glutMainLoop();
} */




/////////////////////////////GL_LINE_LOOP/////////////////////////////////
void drawLine()
{
	glLineWidth(10);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
		glVertex2d(150,150);
		glVertex2d(-150,150);
		glLineWidth(10);
		glVertex2d(-150,-150);
		glVertex2d(150,-150);
		glLineWidth(10);
		glVertex2d(-150,150);
		glVertex2d(-150,-150);
		glLineWidth(10);
		glVertex2d(150,150);
		glVertex2d(150,-150);
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
	glutCreateWindow("SOAL 1 - GL_LINE-LOOP");
		gluOrtho2D(-320.,320.,-240.,240.);
	glutDisplayFunc(drawLine);
	glutMainLoop();
}


