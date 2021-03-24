#include <GL/glut.h>
#include <iostream>
using namespace std;

 double horizAngle = 0.0;   //Viewing angle
 double vertAngle = 0.0;    //Viewing angle

void drawCastle(){

	//terrain
	glColor3f(0.5, 0.5, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.0, 0.0);
	glScaled(35.0, 1.0, 35.0);
	glutSolidCube(.1);
	glPopMatrix();

	//main tower
	glColor3f(0.0, 0.5, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.75, 0.0);
	glScaled(1.0, 2.5, 1.0);
	glutSolidCube(.6);
	glPopMatrix();

	glBegin(GL_TRIANGLES);
      // Front
      glColor3f(0.0, 0.5, 0.5);     
      glVertex3f( 0.0f, 2.0f, 0.3f);//top
      glColor3f(0.0, 0.5, 0.5);     
      glVertex3f(-0.3f, 1.5f, 0.3f);//base 1
      glColor3f(0.0, 0.5, 0.5);     
      glVertex3f(0.3f, 1.5f, 0.3f);//base 2
      // Back
      glColor3f(0.0, 0.5, 0.5);     
      glVertex3f( 0.0f, 2.0f, -0.3f);//top
      glColor3f(0.0, 0.5, 0.5);     
      glVertex3f(-0.3f, 1.5f, -0.3f);//base 1
      glColor3f(0.0, 0.5, 0.5);     
      glVertex3f(0.3f, 1.5f, -0.3f);//base 2
  	glEnd();

  	glBegin(GL_QUADS);
      // Right
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f( 0.0f, 2.0f, 0.3f);//top 1
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(0.0f, 2.0f, -0.3f);//top 2
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(0.3f, 1.5f, -0.3f);//base 1
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(0.3f, 1.5f, 0.3f);//base 2
      
      // Left
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(0.0f, 2.0f, 0.3f);
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(0.0f, 2.0f, -0.3f);
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(-0.3f, 1.5f, -0.3f);
      glColor3f(0.3, 0.5, 0.5);
      glVertex3f(-0.3f, 1.5f, 0.3f);
  	glEnd();
  	//Windows
  	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.3, 0.30, 0);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.3, 0.60, 0);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.3, 0.90, 0);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.3, 1.30, 0);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.3, 1.30, 0.2);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.3, 1.30, -0.2);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();

	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.3, 0.30, 0);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.3, 0.60, 0);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.3, 0.90, 0);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.3, 1.30, 0);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.3, 1.30, 0.2);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.3, 1.30, -0.2);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();

	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.0, 1.30, -0.3);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.2, 1.30, -0.3);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.2, 1.30, -0.3);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();

	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.0, 1.30, 0.3);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.2, 1.30, 0.3);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.2, 1.30, 0.3);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.2);
	glPopMatrix();

  	//Entrance
  	glColor3f(0.0, 0.5, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.50, 1.45);
	glScaled(1.5, 2.0, 1.0);
	glutSolidCube(.5);
	glPopMatrix();

	glBegin(GL_TRIANGLES);
      // Front
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f( 0.0f, 1.5f, 1.7f);//top
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(-0.5f, 1.0f, 1.7f);//base 1
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(0.5f, 1.0f, 1.7f);//base 2
      // Back
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f( 0.0f, 1.5f, 1.2f);//top
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(-0.5f, 1.0f, 1.2f);//base 1
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(0.5f, 1.0f, 1.2f);//base 2
      // Fix Issues with Quads
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f( 0.0f, 1.5f, 1.2f);//top
      glColor3f(0.3, 0.5, 0.5); 
      glVertex3f(-0.5f, 1.0f, 1.7f);//base 1
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(-0.5f, 1.0f, 1.2f);//base 1
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f( 0.0f, 1.5f, 1.2f);//top
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(0.5f, 1.0f, 1.7f);//base 2
      glColor3f(0.3, 0.5, 0.5);     
      glVertex3f(0.5f, 1.0f, 1.2f);//base 2
  	glEnd();

  	glBegin(GL_QUADS);
  		//Right
  		glColor3f(0.3, 0.5, 0.5);     
      	glVertex3f( 0.0f, 1.5f, 1.7f);//top
      	glColor3f(0.3, 0.5, 0.5);     
      	glVertex3f( 0.0f, 1.5f, 1.2f);//top
      	glColor3f(0.3, 0.5, 0.5);     
        glVertex3f(-0.5f, 1.0f, 1.7f);//base 1
        glColor3f(0.3, 0.5, 0.5);     
        glVertex3f(-0.5f, 1.0f, 1.2f);//base 1
        //Left
        glColor3f(0.3, 0.5, 0.5);     
      	glVertex3f( 0.0f, 1.5f, 1.7f);//top
      	glColor3f(0.3, 0.5, 0.5);     
      	glVertex3f( 0.0f, 1.5f, 1.2f);//top
      	glColor3f(0.3, 0.5, 0.5);     
      	glVertex3f(0.5f, 1.0f, 1.7f);//base 2
      	glColor3f(0.3, 0.5, 0.5);     
      	glVertex3f(0.5f, 1.0f, 1.2f);//base 2
    glEnd();

    //Door
  	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.35, 1.6);
	glScaled(1.5, 2.0, 1.0);
	glutSolidCube(.3);
	glPopMatrix();

	//Windows
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.3, 0.90, 1.66);
	glScaled(0.8, 0.8, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.15, 0.90, 1.66);
	glScaled(0.8, 0.8, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.90, 1.66);
	glScaled(0.8, 0.8, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.15, 0.90, 1.66);
	glScaled(0.8, 0.8, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.3, 0.90, 1.66);
	glScaled(0.8, 0.8, 1.0);
	glutSolidCube(.1);
	glPopMatrix();


	//tower 1
	glColor3f(0.0, 0.5, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 0.40, -1.5);
	glScaled(1.0, 2.0, 1.0);
	glutSolidCube(.4);
	glPopMatrix();
	//roof
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 0.80, -1.5);
	glRotatef(240, 1, 1, 1);
	glutSolidCone(0.3f, 0.5f, 10, 2);
	glPopMatrix();
	//antenna
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 1.30, -1.5);
	glScaled(1.0, 20.0, 1.0);
	glutSolidCube(.02);
	glPopMatrix();
	//Windows
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 0.60, 1.65);
	glScaled(0.5, 1.0, 1.0);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 0.30, 1.65);
	glScaled(0.5, 1.0, 1.0);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.7, 0.60, 1.5);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.7, 0.30, 1.5);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();

	//tower 2
	glColor3f(0.0, 0.5, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 0.40, 1.5);
	glScaled(1.0, 2.0, 1.0);
	glutSolidCube(.4);
	glPopMatrix();
	//roof
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 0.80, 1.5);
	glRotatef(240, 1, 1, 1);
	glutSolidCone(0.3f, 0.5f, 10, 2);
	glPopMatrix();
	//antenna
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 1.30, 1.5);
	glScaled(1.0, 20.0, 1.0);
	glutSolidCube(.02);
	glPopMatrix();
	//Windows
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.5, 0.60, 1.65);
	glScaled(0.5, 1.0, 1.0);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.5, 0.30, 1.65);
	glScaled(0.5, 1.0, 1.0);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.7, 0.60, 1.5);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.7, 0.30, 1.5);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();

	//tower 3
	glColor3f(0.0, 0.5, 0.5);
	glPushMatrix();
	glTranslated(1.5, 0.40, 1.5);
	glScaled(1.0, 2.0, 1.0);
	glutSolidCube(.4);
	glPopMatrix();
	//roof
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(1.5, 0.80, 1.5);
	glRotatef(240, 1, 1, 1);
	glutSolidCone(0.3f, 0.5f, 10, 2);
	glPopMatrix();
	//antenna
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(1.5, 1.30, 1.5);
	glScaled(1.0, 20.0, 1.0);
	glutSolidCube(.02);
	glPopMatrix();
	//Windows
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 0.60, -1.65);
	glScaled(0.5, 1.0, 1.0);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 0.30, -1.65);
	glScaled(0.5, 1.0, 1.0);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.7, 0.60, -1.5);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.7, 0.30, -1.5);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();

	//tower 4
	glColor3f(0.0, 0.5, 0.5);
	glPushMatrix();
	glTranslated(1.5, 0.40, -1.5);
	glScaled(1.0, 2.0, 1.0);
	glutSolidCube(.4);
	glPopMatrix();
	//roof
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(1.5, 0.80, -1.5);
	glRotatef(240, 1, 1, 1);
	glutSolidCone(0.3f, 0.5f, 10, 2);
	glPopMatrix();
	//antenna
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(1.5, 1.30, -1.5);
	glScaled(1.0, 20.0, 1.0);
	glutSolidCube(.02);
	glPopMatrix();
	//Windows
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.5, 0.60, -1.65);
	glScaled(0.5, 1.0, 1.0);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.5, 0.30, -1.65);
	glScaled(0.5, 1.0, 1.0);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.7, 0.60, -1.5);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.7, 0.30, -1.5);
	glScaled(0.5, 1.0, 0.5);
	glutSolidCube(.2);
	glPopMatrix();


	//Wall 1
	glColor3f(0.0, 0.5, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.25, -1.5);
	glScaled(15.0, 2.0, 1.0);
	glutSolidCube(.2);
	glPopMatrix();
	//Detail
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.45, -1.5);
	glScaled(15.0, 0.5, 1.5);
	glutSolidCube(.2);
	glPopMatrix();
	//Windows
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.15, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.3, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.45, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.60, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.75, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.9, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.05, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.2, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.15, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.3, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.45, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.60, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.75, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.9, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.05, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.2, 0.30, -1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();

	//Wall 2
	glColor3f(0.0, 0.5, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.25, 1.5);
	glScaled(15.0, 2.0, 1.0);
	glutSolidCube(.2);
	glPopMatrix();
	//Detail
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.45, 1.5);
	glScaled(15.0, 0.5, 1.5);
	glutSolidCube(.2);
	glPopMatrix();
	//Windows
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.0, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.15, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.3, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.45, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.60, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.75, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(0.9, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.05, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.2, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.15, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.3, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.45, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.60, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.75, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-0.9, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.05, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.2, 0.30, 1.6);
	glScaled(0.5, 0.5, 1.0);
	glutSolidCube(.1);
	glPopMatrix();

	//Wall 3
	glColor3f(0.0, 0.5, 0.5);
	glPushMatrix();
	glTranslated(1.5, 0.25, 0.0);
	glScaled(1.0, 2.0, 15.0);
	glutSolidCube(.2);
	glPopMatrix();
	//Detail
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(1.5, 0.45, 0.0);
	glScaled(1.5, 0.5, 15.0);
	glutSolidCube(.2);
	glPopMatrix();
	//Windows
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, 0);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, 0.15);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, 0.3);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, 0.45);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, 0.6);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, 0.75);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, 0.9);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, 1.05);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, 1.2);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, -0.15);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, -0.3);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, -0.45);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, -0.6);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, -0.75);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, -0.9);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, -1.05);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(1.65, 0.30, -1.2);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();


	//Wall 4
	glColor3f(0.0, 0.5, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 0.25, 0.0);
	glScaled(1.0, 2.0, 15.0);
	glutSolidCube(.2);
	glPopMatrix();
	//Detail
	glColor3f(0.3, 0.5, 0.5);
	glPushMatrix();
	glTranslated(-1.5, 0.45, 0.0);
	glScaled(1.5, 0.5, 15.0);
	glutSolidCube(.2);
	glPopMatrix();
	//Windows
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, 0);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, 0.15);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, 0.3);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, 0.45);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, 0.6);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, 0.75);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, 0.9);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, 1.05);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, 1.2);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, -0.15);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, -0.3);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, -0.45);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, -0.6);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, -0.75);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, -0.9);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, -1.05);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
	glColor3f(0.5, 0.6, 0.5);
	glPushMatrix();
	glTranslated(-1.65, 0.30, -1.2);
	glScaled(0.5, 0.5, 0.5);
	glutSolidCube(.1);
	glPopMatrix();
}

void myInit(){
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.0*(64/48.0), 2.0*(64/48.0), -2.0, 2.0, 0.1, 100.0); //left, right, bottom, top, near, far Parallel Projection
    glViewport(0, 0, 800, 640);

    //set properties of the surface material
    GLfloat mat_ambient[] = { 0.0f, 0.0f, 1.0f, 1.0f}; // 
    GLfloat mat_diffuse[] = {0.6f, 0.6f, 0.6f, 1.0f};
    GLfloat mat_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
    GLfloat mat_shininess[] = {50.0f};
    glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
    glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
    glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
    glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);

    GLfloat lightIntensity[] = {1.0f, 1.0f, 1.0f, 1.0f};
    GLfloat light_position[] = {2.0f, 2.0f, 3.0f, 0.0f};
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, lightIntensity);

}


void myDisplay(void){
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 0.50, 4.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


    //Rotating around Robot and no Walking
    glPushMatrix();
    glRotated(vertAngle, 1.0, 0.0, 0.0f);
    glRotated(horizAngle, 0.0, 1.0, 0.0f);
    drawCastle();
    glPopMatrix();
    glutSwapBuffers();
}



void myKeyboard(unsigned char key, int x, int y){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    static double zoomFactor = 1.0; //Zooming in/out 
    static double zoomFactor2 = 1.0;

    switch (key){
    break;
    case 'z':
        zoomFactor -= 0.02;
        zoomFactor2 += 7.7;
        glViewport(1.0 * zoomFactor2, 1.0 * zoomFactor2, 800*zoomFactor, 640*zoomFactor);
    break;
    case 'Z':
        zoomFactor += 0.02;
        zoomFactor2 -= 7.7;
        glViewport(1.0 * zoomFactor2, 1.0 * zoomFactor2, 800*zoomFactor, 640*zoomFactor);
    break;
    case 'd':
        vertAngle = 0.0;
        horizAngle = 0.0;
    break;
    case 27:
        exit(0);// exit
    }
    
    glutPostRedisplay();//refresh the display
}

void arrowKeyPress(int key, int x, int y){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    switch(key){
    case GLUT_KEY_RIGHT:
        horizAngle += 2;
    break;
    case GLUT_KEY_LEFT:
        horizAngle -= 2;
    break;
    case GLUT_KEY_UP:
        vertAngle -= 2;
    break;
    case GLUT_KEY_DOWN:
        vertAngle += 2;
    break;
    }

    glutPostRedisplay();        // redraw the image now
}


int main(int argc, char **argv){

    printf("================= INSTRUCTIONS =================\n");
    printf("Rotate View: Arrows (Up, Down, Left, Right)\n");
    printf("Reset View: d\n");
    printf("Zoom In: Z\n");
    printf("Zoom Out: z\n");
    printf("Exit: esc\n");
    printf("================================================\n");


    glutInit(&argc, argv);  //OpenGL utility kit
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);  //double buffering for animation
    glutInitWindowSize(800, 640);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Castle");
    glutDisplayFunc(myDisplay);
   
    glutKeyboardFunc(myKeyboard);   //myKeyboard will handle normal keys
    glutSpecialFunc(arrowKeyPress); //arrowKeyPress will handle special keys

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);
    glEnable (GL_COLOR_MATERIAL);   //Material color match vertex color specified

    myInit();
    glutMainLoop();
    return 0;
}