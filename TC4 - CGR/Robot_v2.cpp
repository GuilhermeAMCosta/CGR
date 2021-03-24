#include <GL/glut.h>
#include <iostream>
using namespace std;

 double horizAngle = 0.0;   //Viewing angle
 double vertAngle = 0.0;    //Viewing angle
 double limbAngle = 0.0; //Walking angle
 bool walk = false; //For walking
 bool shake = false;// For Shake Arms
 int aux = 0;

void drawRobot(){
    //head
    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix();
    glTranslated(0.0, 1.0, 0.0);
    glutSolidCube(.36);
    glPopMatrix();

    //ears
    glColor3f(0.8, 0.5, 0.5);
    glPushMatrix();
    glTranslated(-0.2, 1.05, 0.0);
    glutSolidCube(.06);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.2, 1.05, 0.0);
    glutSolidCube(.06);
    glPopMatrix();

    //antenna
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslated(0.0, 1.2, 0.0);
    glScaled(1.0, 10.0, 1.0);
    glutSolidCube(.03);
    glPopMatrix();

    //eyes
    glColor3f(1.0, 1.0, 0.3);
    glPushMatrix();
    glTranslated(0.10, 1.1, 0.15);
    glutSolidCube(.1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.10, 1.1, 0.15);
    glutSolidCube(.1);
    glPopMatrix();

    //mouth
    glColor3f(0.3, 0.5, 0.8);
    glPushMatrix();
    glTranslated(0.0, 0.92, 0.180);
    glutSolidCube(.05);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.06, 0.92, 0.180);
    glutSolidCube(.05);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.06, 0.92, 0.180);
    glutSolidCube(.05);
    glPopMatrix();

    //body
    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix();
    glTranslated(0.0, 0.40, 0.0);
    glScaled(1.0, 1.5, 0.30);
    glutSolidCube(.55);
    glPopMatrix();

    //buttons
    glColor3f(0.3, 0.5, 0.8);
    glPushMatrix();
    glTranslated(0.0, 0.50, 0.1);
    glScaled(6.0, 4.0, 1.0);
    glutSolidCube(.06);
    glPopMatrix();

    glColor3f(0.3, 0.5, 0.8);
    glPushMatrix();
    glTranslated(0.0, 0.50, -0.1);
    glScaled(6.0, 4.0, 1.0);
    glutSolidCube(.06);
    glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslated(0.05, 0.68, 0.08);
    glutSolidCube(.06);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.15, 0.68, 0.08);
    glutSolidCube(.06);
    glPopMatrix();


}
//Draw left arm
void leftArm(){
    glColor3f(0.5, 0.5, 0.5);   
    glPushMatrix();
    glTranslated(-0.30, 0.50, 0.0);
    glScaled(0.1, 1.0, 0.20);
    glutSolidCube(.50);
    glPopMatrix();

    //hand
    glColor3f(0.8, 0.5, 0.5);   
    glPushMatrix();
    glTranslated(-0.30, 0.17, 0.0);
    glScaled(0.80, 1.0, 1.0);
    glutSolidCube(.12);
    glPopMatrix();

}
//Draw right arm
void rightArm(){
    glColor3f(0.5, 0.5, 0.5);   
    glPushMatrix();
    glTranslated(0.30, 0.50, 0.0);
    glScaled(0.1, 1.0, 0.20);
    glutSolidCube(.50);
    glPopMatrix();

    //hand
    glColor3f(0.8, 0.5, 0.5);   
    glPushMatrix();
    glTranslated(0.30, 0.17, 0.0);
    glScaled(0.80, 1.0, 1.0);
    glutSolidCube(.12);
    glPopMatrix();
}
//Draw left leg
void leftLeg(){
    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix(); 
    glTranslated(-0.20, -0.220, 0.0);
    glScaled(0.20, 1.0, 0.20);
    glutSolidCube(.50);
    glPopMatrix();

    //shoe
    glColor3f(0.8, 0.5, 0.5);
    glPushMatrix();
    glTranslated(-0.20, -0.50, 0.05);
    glScaled(2.0, 0.60, 3.5);
    glutSolidCube(.1);
    glPopMatrix();

}
//Draw right leg
void rightLeg(){
    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix(); 
    glTranslated(0.20, -0.220, 0.0);
    glScaled(0.20, 1.0, 0.20);
    glutSolidCube(.50);
    glPopMatrix();
    //shoe
    glColor3f(0.8, 0.5, 0.5);
    glPushMatrix();
    glTranslated(0.20, -0.50, 0.05);
    glScaled(2.0, 0.60, 3.5);
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
//If nothing else happening, do walking motion
void Walk (void){
    static float mf = 0.05; //limb movement factor
    limbAngle += mf;
    if(limbAngle >  30.0){
        mf = -0.70;
    }
    if(limbAngle < -30.0){
        mf =  0.70;
    }
    glutPostRedisplay ();
}


void myDisplay(void){
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 0.50, 4.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // printf("%f\t%d\n", limbAngle, aux);

    if(shake == true and aux < 30){
        walk = false;
        // printf("s -> TRUE\n");
        //Rotating around Robot
        glPushMatrix();
        glRotated(vertAngle, 1.0, 0.0, 0.0f);
        glRotated(horizAngle, 0.0, 1.0, 0.0f);
        drawRobot();
        rightArm();
        leftLeg();
        rightLeg();
        glPopMatrix();
        //Left arm walking movement
        glPushMatrix();
        glRotated(vertAngle, 1.0, 0.0, 0.0f);
        glRotated(horizAngle, 0.0, 1.0, 0.0f);
        glTranslated(-0.2, 1.0, 0.0);
        glRotated(-20, 0.0, 0.0, 1.0f);
        glTranslated(0.30, -1.0, 0.0);
        leftArm();
        glPopMatrix();
        aux = aux + 1;
    }
    else{
        shake = false;
        aux = 0;
    }

    if(walk == true and shake == false){
    //Rotating around Robot
    glPushMatrix();
    glRotated(vertAngle, 1.0, 0.0, 0.0f);
    glRotated(horizAngle, 0.0, 1.0, 0.0f);
    drawRobot();
    glPopMatrix();
    //Left arm walking movement
    glPushMatrix();
    glRotated(vertAngle, 1.0, 0.0, 0.0f);
    glRotated(horizAngle, 0.0, 1.0, 0.0f);
    glTranslated(-0.30, 1.0, 0.0);
    glRotated(limbAngle, 1.0, 0.0, 0.0f);
    glTranslated(0.30, -1.0, 0.0);
    leftArm();
    glPopMatrix();
    //Right arm walking movement
    glPushMatrix();
    glRotated(vertAngle, 1.0, 0.0, 0.0f);
    glRotated(horizAngle, 0.0, 1.0, 0.0f);
    glTranslated(0.30, 1.0, 0.0);
    glRotated(-limbAngle, 1.0, 0.0, 0.0f);
    glTranslated(-0.30, -1.0, 0.0);
    rightArm();
    glPopMatrix();
    //Left leg walking movement
    glPushMatrix();
    glRotated(vertAngle, 1.0, 0.0, 0.0f);
    glRotated(horizAngle, 0.0, 1.0, 0.0f);
    glRotated(-limbAngle, 1.0, 0.0, 0.0f);
    leftLeg();
    glPopMatrix();
    //Right leg walking movement
    glPushMatrix();
    glRotated(vertAngle, 1.0, 0.0, 0.0f);
    glRotated(horizAngle, 0.0, 1.0, 0.0f);
    glRotated(limbAngle, 1.0, 0.0, 0.0f);
    rightLeg();
    glPopMatrix();
    }
    else if(walk == false and shake == false){
    //Rotating around Robot and no Walking
    glPushMatrix();
    glRotated(vertAngle, 1.0, 0.0, 0.0f);
    glRotated(horizAngle, 0.0, 1.0, 0.0f);
    drawRobot();
    leftArm();
    rightArm();
    leftLeg();
    rightLeg();
    glPopMatrix();
    }
    glutSwapBuffers();
}



void myKeyboard(unsigned char key, int x, int y){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    static double zoomFactor = 1.0; //Zooming in/out 
    static double zoomFactor2 = 1.0;

    switch (key){
    case 's':
        if(shake == false){
            shake = true;
        }
        else if(shake == true){
            shake = false;
        }
    break;
    case 'w':
        if(walk == false){
            walk = true;
        }
        else if(walk == true){
            walk = false;
        }
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
        walk = false;
    break;
    case 27:
        exit(0);            // exit
    }
    
    /*sets a flag so that when the mainloop is ready it will call the real "display" callback once per mainloop iteration*/
    glutPostRedisplay();        //refresh the display, redraw the image now
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
    printf("Cyclic Movement -> Walk: w\n");
    printf("Not Cyclic Movement -> Shake Arm: s\n");
    printf("Exit: esc\n");
    printf("================================================\n");


    glutInit(&argc, argv);  //OpenGL utility kit
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);  //double buffering for animation
    glutInitWindowSize(800, 640);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Robot");
    glutDisplayFunc(myDisplay);
    glutIdleFunc(Walk);     //Ongoing walking function for when nothing else happening

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