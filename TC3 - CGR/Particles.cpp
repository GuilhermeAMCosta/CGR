#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <GL/glut.h>
#include <GL/gl.h>


#define MAX_PARTICLES 1000
#define WCX		640
#define WCY		480
#define RAIN	0
#define SNOW	1
#define	HAIL	2


float slowdown = 2.0;
float velocity = 0.0;
float zoom = -40.0;
float pan = 0.0;
float tilt = 0.0;
float hailsize = 0.1;

int loop;
int fall;

float r = 0.0;
float g = 0.0;
float b = 0.0;
float ground_points[21][21][3];
float ground_colors[21][21][1];
float accum = -10.0;

typedef struct{
  bool alive;
  float life;
  float fade;

  float red;
  float green;
  float blue;

  float xpos;
  float ypos;
  float zpos;

  float vel;

  float gravity;
}particles;

// Paticle System
particles par_sys[MAX_PARTICLES];

void normal_keys(unsigned char key, int x, int y) {
	switch(key){
		case 'r':
			fall = RAIN;
    		glutPostRedisplay();
    	break;
    	case 's':
			fall = SNOW;
    		glutPostRedisplay();
    	break;
    	case 'h':
			fall = HAIL;
    		glutPostRedisplay();
    	break;
    	case '=':
			hailsize += 0.01;
    	break;
    	case '-':
			hailsize -= 0.01;
    	break;
    	case ',':
			if (slowdown > 4.0) 
				slowdown += 0.01;
    	break;
    	case '.':
			if (slowdown > 1.0) 
				slowdown -= 0.01;
    	break;
    	case 27:
    		exit(0);
    	}
}

void special_keys(int key, int x, int y) {
	switch(key){
		case GLUT_KEY_UP:
			zoom += 1.0;
		break;
		case GLUT_KEY_DOWN:
			zoom -= 1.0;
		break;
		case GLUT_KEY_RIGHT:
			pan += 2.0;
		break;
		case GLUT_KEY_LEFT:
			pan -= 2.0;
		break;
		case GLUT_KEY_PAGE_UP:
			tilt -= 1.0;
		break;
		case GLUT_KEY_PAGE_DOWN:
			tilt += 1.0;
		break;
	}
}


void initParticles(int i) {
    par_sys[i].alive = true;
    par_sys[i].life = 1.0;
    par_sys[i].fade = float(rand()%100)/1000.0f+0.003f;
    par_sys[i].xpos = (float) (rand() % 21) - 10;
    par_sys[i].ypos = 10.0;
    par_sys[i].zpos = (float) (rand() % 21) - 10;
    par_sys[i].red = 0.5;
    par_sys[i].green = 0.5;
    par_sys[i].blue = 1.0;
    par_sys[i].vel = velocity;
    par_sys[i].gravity = -0.8;
}

void init( ) {
  int x, z;
  glShadeModel(GL_SMOOTH);
  glClearColor(0.0, 0.0, 0.0, 0.0);
  glClearDepth(1.0);
  glEnable(GL_DEPTH_TEST);

  for (z = 0; z < 21; z++) {
    for (x = 0; x < 21; x++) {
      ground_points[x][z][0] = x - 10.0;
      ground_points[x][z][1] = accum;
      ground_points[x][z][2] = z - 10.0;
      ground_colors[z][x][0] = r;
      ground_colors[z][x][1] = g;
      ground_colors[z][x][2] = b;
      ground_colors[z][x][3] = 0.0; // acummulation factor
    }
  }

  for (loop = 0; loop < MAX_PARTICLES; loop++) {
      initParticles(loop);
  }
}

// For Rain
void drawRain() {
  float x, y, z;
  for (loop = 0; loop < MAX_PARTICLES; loop=loop+2) {
    if (par_sys[loop].alive == true) {
      x = par_sys[loop].xpos;
      y = par_sys[loop].ypos;
      z = par_sys[loop].zpos + zoom;

      // Draw particles
      glColor3f(0.5, 0.5, 1.0);
      glBegin(GL_LINES);
        glVertex3f(x, y, z);
        glVertex3f(x, y+0.5, z);
      glEnd();


      par_sys[loop].ypos += par_sys[loop].vel / (slowdown*1000);
      par_sys[loop].vel += par_sys[loop].gravity;

      par_sys[loop].life -= par_sys[loop].fade;

      if (par_sys[loop].ypos <= -10) {
        par_sys[loop].life = -1.0;
      }

      if (par_sys[loop].life < 0.0) {
        initParticles(loop);
      }
    }
  }
}

// For Hail
void drawHail() {
  float x, y, z;

  for (loop = 0; loop < MAX_PARTICLES; loop=loop+2) {
    if (par_sys[loop].alive == true) {
      x = par_sys[loop].xpos;
      y = par_sys[loop].ypos;
      z = par_sys[loop].zpos + zoom;

      // Draw particles
      glColor3f(0.8, 0.8, 0.9);
      glBegin(GL_QUADS);
        // Front
        glVertex3f(x-hailsize, y-hailsize, z+hailsize);
        glVertex3f(x-hailsize, y+hailsize, z+hailsize);
        glVertex3f(x+hailsize, y+hailsize, z+hailsize);
        glVertex3f(x+hailsize, y-hailsize, z+hailsize);
        //Left
        glVertex3f(x-hailsize, y-hailsize, z+hailsize);
        glVertex3f(x-hailsize, y-hailsize, z-hailsize);
        glVertex3f(x-hailsize, y+hailsize, z-hailsize);
        glVertex3f(x-hailsize, y+hailsize, z+hailsize);
        // Back
        glVertex3f(x-hailsize, y-hailsize, z-hailsize);
        glVertex3f(x-hailsize, y+hailsize, z-hailsize);
        glVertex3f(x+hailsize, y+hailsize, z-hailsize);
        glVertex3f(x+hailsize, y-hailsize, z-hailsize);
        //Right
        glVertex3f(x+hailsize, y+hailsize, z+hailsize);
        glVertex3f(x+hailsize, y+hailsize, z-hailsize);
        glVertex3f(x+hailsize, y-hailsize, z-hailsize);
        glVertex3f(x+hailsize, y-hailsize, z+hailsize);
        //Top
        glVertex3f(x-hailsize, y+hailsize, z+hailsize);
        glVertex3f(x-hailsize, y+hailsize, z-hailsize);
        glVertex3f(x+hailsize, y+hailsize, z-hailsize);
        glVertex3f(x+hailsize, y+hailsize, z+hailsize);
        //Bottom
        glVertex3f(x-hailsize, y-hailsize, z+hailsize);
        glVertex3f(x-hailsize, y-hailsize, z-hailsize);
        glVertex3f(x+hailsize, y-hailsize, z-hailsize);
        glVertex3f(x+hailsize, y-hailsize, z+hailsize);
      glEnd();

      // Update values
      //Move
      if (par_sys[loop].ypos <= -10) {
        par_sys[loop].vel = par_sys[loop].vel * -1.0;
      }
      par_sys[loop].ypos += par_sys[loop].vel / (slowdown*1000); // * 1000
      par_sys[loop].vel += par_sys[loop].gravity;

      // Decay
      par_sys[loop].life -= par_sys[loop].fade;

      //Revive
      if (par_sys[loop].life < 0.0) {
        initParticles(loop);
      }
    }
  }
}

// For Snow
void drawSnow() {
  float x, y, z;
  for (loop = 0; loop < MAX_PARTICLES; loop=loop+2) {
    if (par_sys[loop].alive == true) {
      x = par_sys[loop].xpos;
      y = par_sys[loop].ypos;
      z = par_sys[loop].zpos + zoom;

      // Draw particles
      glColor3f(1.0, 1.0, 1.0);
      glPushMatrix();
      glTranslatef(x, y, z);
      glutSolidSphere(0.2, 16, 16);
      glPopMatrix();

      // Update values
      //Move
      par_sys[loop].ypos += par_sys[loop].vel / (slowdown*1000);
      par_sys[loop].vel += par_sys[loop].gravity;
      // Decay
      par_sys[loop].life -= par_sys[loop].fade;

      if (par_sys[loop].ypos <= -10) {
        int zi = z - zoom + 10;
        int xi = x + 10;
        ground_colors[zi][xi][0] = 1.0;
        ground_colors[zi][xi][2] = 1.0;
        ground_colors[zi][xi][3] += 1.0;
        if (ground_colors[zi][xi][3] > 1.0) {
          ground_points[xi][zi][1] += 0.1;
        }
        par_sys[loop].life = -1.0;
      }

      if (par_sys[loop].life < 0.0) {
        initParticles(loop);
      }
    }
  }
}

// Draw Particles
void drawScene( ) {
  int i, j;
  float x, y, z;

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glMatrixMode(GL_MODELVIEW);

  glLoadIdentity();


  glRotatef(pan, 0.0, 1.0, 0.0);
  glRotatef(tilt, 1.0, 0.0, 0.0);

  // GROUND?!
  glColor3f(r, g, b);
  glBegin(GL_QUADS);
    // along z - y const
    for (i = -10; i+1 < 11; i++) {
      // along x - y const
      for (j = -10; j+1 < 11; j++) {
        glColor3fv(ground_colors[i+10][j+10]);
        glVertex3f(ground_points[j+10][i+10][0],
              ground_points[j+10][i+10][1],
              ground_points[j+10][i+10][2] + zoom);
        glColor3fv(ground_colors[i+10][j+1+10]);
        glVertex3f(ground_points[j+1+10][i+10][0],
              ground_points[j+1+10][i+10][1],
              ground_points[j+1+10][i+10][2] + zoom);
        glColor3fv(ground_colors[i+1+10][j+1+10]);
        glVertex3f(ground_points[j+1+10][i+1+10][0],
              ground_points[j+1+10][i+1+10][1],
              ground_points[j+1+10][i+1+10][2] + zoom);
        glColor3fv(ground_colors[i+1+10][j+10]);
        glVertex3f(ground_points[j+10][i+1+10][0],
              ground_points[j+10][i+1+10][1],
              ground_points[j+10][i+1+10][2] + zoom);
      }

    }
  glEnd();
  // Which Particles
  if (fall == RAIN) {
    drawRain();
  }else if (fall == HAIL) {
    drawHail();
  }else if (fall == SNOW) {
    drawSnow();
  }

  glutSwapBuffers();
}

void reshape(int w, int h) {
    if (h == 0)
    	h = 1;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, (float) w / (float) h, .1, 200);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void idle ( ) {
  glutPostRedisplay();
}

int main (int argc, char** argv){
  printf("================= INSTRUCTIONS =================\n");
  printf("Rotate View: Arrows (Left, Right)\n");
  printf("Verticale View: (Page Up, Page Down)\n");
  printf("Zoom In: Up\n");
  printf("Zoom Out: Down\n");
  printf("Rain: r\n");
  printf("Snow: s\n");
  printf("Hail: h\nHail size: Bigger(=)\tSmaller(-)\n");
  printf("Exit: esc\n");
  printf("================================================\n");

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_RGB | GLUT_DOUBLE);
  glutInitWindowSize(WCX, WCY);
  glutCreateWindow("Rain+Snow+Hail");
  init();
  glutDisplayFunc(drawScene);
  glutReshapeFunc(reshape);
  glutKeyboardFunc(normal_keys);
  glutSpecialFunc(special_keys);
  glutIdleFunc(idle);
  glutMainLoop();
  return 0;
}