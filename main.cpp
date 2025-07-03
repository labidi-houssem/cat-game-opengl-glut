#include <GL/glut.h>
#include <stdlib.h>
#include<stdio.h>
static int slices = 64;
static int stacks = 64;
int ch=(rand() % 20 + 1);
int cht=(rand() % 20 + 1);
double cx = 0; double cy = 21; double cz = 56;
double lx = 0; double ly = 0; double lz = -6;
double yverti = 30 ;double xhoriz = 0;
double r=0.92; double g=0.55 ;double b=0.29;

double yr=170;

double f1=-90;double f2=-0;double f3=1;
int score=0;



/* GLUT callback Handlers */
const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
const double a = t*90.0;
static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 500.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}
void cat (double yr){

glRotated(yr,0,1,0);

glPushMatrix();
/*doura lbden*/
glPushMatrix();

    glTranslated(0,0,0);
    glScaled(0.7,1,0.5);
    /*glColor3d(0.5,0.5,0.5);*/
    glColor3f(r,g,b);
    glutSolidSphere(1,slices,stacks);
glPopMatrix();
 /*doura fi west doura lkerch*/
glPushMatrix();

    glTranslated(0,0,0.01);
    glScaled(0.68,0.98,0.5);
    glColor3d(1,1,1);
    glutSolidSphere(1,slices,stacks);
glPopMatrix();
/*doura rass*/
 glPushMatrix();

    glTranslated(0,1.4,0);
    glScaled(0.5,0.5,0.5);
    /*glColor3d(1,0.8,0);*/
       glColor3f(r,g,b);
    glutSolidSphere(1,slices,stacks);
glPopMatrix();
/*fomm*/
glPushMatrix();
 glTranslated(0,1.1,0.4);
    glRotated(f1,f2,0,f3);// yth7ek glRotated(-180,1,0,0);  3adi glRotated(-90,0,0,1); mt4achech glRotated(-90,1,0,0)
    glColor3f(0,0,0);
    glutSolidCone(0.1,0.2,slices,stacks);
glPopMatrix();

/*5cham*/
glPushMatrix();
   glTranslated(-0.010,1.25,0.5);
    glScaled(0.05,0.05,0.05);

    glColor3d(0,0,0);
    glutSolidSphere(1,slices,stacks);



glPopMatrix();
/*sa9 lisar*/
glPushMatrix();

    glTranslated(-0.4,-1,0);
    glScaled(0.2,2,0.2);
    glColor3d(0,0,0);
    glutSolidCube(1);
glPopMatrix();

/*sa9 lmin*/
glPushMatrix();

    glTranslated(0.4,-1,0);
    glScaled(0.2,2,0.2);
    glColor3d(0,0,0);
    glutSolidCube(1);
glPopMatrix();
    /*yed lmin*/
glPushMatrix();

    glTranslated(0.95,0.2,0);
    glRotated(-45,0,0,1);
    glScaled(1.4,0.2,0.2);
    glColor3d(0,0,0);
    glutSolidCube(1);
glPopMatrix();
/*yed lsar*/
glPushMatrix();

    glTranslated(-0.95,0.2,0);
    glRotated(45,0,0,1);
    glScaled(1.4,0.2,0.2);
    glColor3d(0,0,0);
    glutSolidCube(1);
glPopMatrix();
/*wthen isar*/
glPushMatrix();

    glTranslated(-0.32,1.75,0);
    glRotated(-80,1,1,0);
    glColor3f(r,g,b);
    glutSolidCone(0.1,0.2,slices,stacks);
glPopMatrix();
/*wthen imin*/
glPushMatrix();

    glTranslated(0.32,1.75,0);
    glRotated(-80,1,-1,0);
    glColor3f(r,g,b);
    glutSolidCone(0.1,0.2,slices,stacks);
glPopMatrix();

/*3iin isar*/
  glPushMatrix();

    glTranslated(-0.22,1.4,0.4);
    glScaled(0.1,0.1,0.1);
    glColor3d(1,1,1);
    glutSolidSphere(1,slices,stacks);
glPopMatrix();
/*west il 3in isar*/
glPushMatrix();

    glTranslated(-0.22,1.4,0.5);
    glScaled(0.05,0.05,0.05);
    glColor3d(0,0,0);
    glutSolidSphere(1,slices,stacks);
glPopMatrix();
/*3iin imin*/
glPushMatrix();

    glTranslated(0.22,1.4,0.4);
    glScaled(0.1,0.1,0.1);
    glColor3d(1,1,1);
    glutSolidSphere(1,slices,stacks);
glPopMatrix();
/*west il 3in imin*/
glPushMatrix();

    glTranslated(0.22,1.4,0.5);
    glScaled(0.05,0.05,0.05);
    glColor3d(0,0,0);
    glutSolidSphere(1,slices,stacks);
glPopMatrix();

/*chla4em west isar*/
glPushMatrix();

    glTranslated(-0.49,1.2,0.6);
    glScaled(0.5,0.02,0);

    glColor3d(0,0,0);
    glutSolidCube(1);
glPopMatrix();

/*chla4em fou9 isar*/
glPushMatrix();

    glTranslated(-0.45,1.3,0.6);
    glRotated(-30,0,1,0);
    glScaled(0.5,0.02,0);

    glColor3d(0,0,0);
    glutSolidCube(1);
glPopMatrix();
    /*chla4em louta isar*/
glPushMatrix();

    glTranslated(-0.45,1.1,0.6);
    glRotated(30,0,1,0);
    glScaled(0.5,0.02,0);

    glColor3d(0,0,0);
    glutSolidCube(1);
glPopMatrix();



/*chla4em west imin*/
glPushMatrix();

    glTranslated(0.49,1.2,0.6);
    glScaled(0.5,0.01,0);

    glColor3d(0,0,0);
    glutSolidCube(1);
glPopMatrix();

/*chla4em fou9 imin*/
glPushMatrix();

    glTranslated(0.45,1.3,0.6);
    glRotated(30,0,1,0);
    glScaled(0.5,0.02,0);

    glColor3d(0,0,0);
    glutSolidCube(1);
glPopMatrix();
    /*chla4em louta imin*/
glPushMatrix();

    glTranslated(0.45,1.1,0.6);
    glRotated(-30,0,1,0);
    glScaled(0.5,0.02,0);

    glColor3d(0,0,0);
    glutSolidCube(1);
glPopMatrix();


glPopMatrix();


}

void tree(){
 /*chajra sa9ha isar3*/
glPushMatrix();
     glTranslated(-6.5,-0.7,-1);
     glScaled(0.6,3.8,0.6);
     glColor3d(0.38,0.11,0.02);
     glutSolidCube(1);
glPopMatrix();
 /*chajra rasha isar3*/
glPushMatrix();
        glTranslated(-6.5,1.6,-1);
        glScaled(1.9,1.3,1);
        glColor3f(0.03,0.4,0.01);
        glutSolidSphere(1,10,10);
glPopMatrix();


}

void tree2(){
 /*chajra sa9ha isar2*/
glPushMatrix();
     glTranslated(20,-0.7,-15);
     glScaled(0.6,3.8,0.6);
     glColor3d(0.38,0.11,0.02);
     glutSolidCube(1);
glPopMatrix();
 /*chajra rasha isar2*/
glPushMatrix();
        glTranslated(20,1.2,-15);
        glRotated(-90,1,0,0);
    glColor3f(0.03,0.4,0.01);
    glutSolidCone(3,2,slices,stacks);
glPopMatrix();
glPushMatrix();
        glTranslated(20,1.5,-15);
        glRotated(-90,1,0,0);
    glColor3f(0.03,0.4,0.01);
    glutSolidCone(3,2,slices,stacks);
glPopMatrix();

glPushMatrix();
        glTranslated(20,1.8,-15);
        glRotated(-90,1,0,0);
    glColor3f(0.03,0.4,0.01);
    glutSolidCone(3,2,slices,stacks);
glPopMatrix();


}

void piste (){
/*kayaasss*/
glPushMatrix();
 glTranslated(0,-2.6,-7);
 glScaled(10,1.3,95);
 glColor3d(0.30,0.32,0.38);
  glutSolidCube(1);
glPopMatrix();

}

void point_a(){
/*maraba3 abyeth*/
glPushMatrix();
glTranslated(0,-2,-6);
glScaled(10,1,3.5);
glColor3f(1,1,1);
glutSolidCube(1);
glPopMatrix();
/*moraba3 ak7el loul louta*/
glPushMatrix();
glTranslated(4.5,-1.9,-4.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();

/*moraba3 ak7el thzni louta*/
glPushMatrix();
glTranslated(2.7,-1.9,-4.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();


/*moraba3 ak7el thaleth louta*/
glPushMatrix();
glTranslated(0.9,-1.9,-4.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();


/*moraba3 ak7el raba3 louta*/
glPushMatrix();
glTranslated(-1.0,-1.9,-4.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();

/*moraba3 ak7el 5ames louta*/
glPushMatrix();
glTranslated(-2.7,-1.9,-4.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();

/*moraba3 ak7el sades louta*/
glPushMatrix();
glTranslated(-4.5,-1.9,-4.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();



/*moraba3 ak7el loul west*/
glPushMatrix();
glTranslated(3.5,-1.9,-5.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();

/*moraba3 ak7el thani west*/
glPushMatrix();
glTranslated(1.7,-1.9,-5.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();


/*moraba3 ak7el thaleth west*/
glPushMatrix();
glTranslated(-0.1,-1.9,-5.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();

/*moraba3 ak7el raba3 west*/
glPushMatrix();
glTranslated(-1.7,-1.9,-5.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();

/*moraba3 ak7el 5ames west*/
glPushMatrix();
glTranslated(-3.7,-1.9,-5.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();


/*moraba3 ak7el loul lfou9*/
glPushMatrix();
glTranslated(4.5,-1.9,-6.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();




/*moraba3 ak7el thzni lfou9*/
glPushMatrix();
glTranslated(2.7,-1.9,-6.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();


/*moraba3 ak7el thaleth lfou9*/
glPushMatrix();
glTranslated(0.9,-1.9,-6.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();


/*moraba3 ak7el raba3 lfou9*/
glPushMatrix();
glTranslated(-1.0,-1.9,-6.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();

/*moraba3 ak7el 5ames lfou9*/
glPushMatrix();
glTranslated(-2.7,-1.9,-6.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();

/*moraba3 ak7el sades lfou9*/
glPushMatrix();
glTranslated(-4.5,-1.9,-6.75);
//glScaled(10,1,4);
glColor3f(0,0,0);
glutSolidCube(1);

glPopMatrix();

}

void ghima(double x){
glPushMatrix();
        glTranslated(x/80,0,0);

    glPushMatrix();
        glTranslated(5,6,-6);
        glScaled(1,1,1);
        glColor3f(1,1,1);
        glutSolidSphere(1,slices,stacks);

    glPopMatrix();
    glPushMatrix();
        glTranslated(6,6.5,-6);
        glScaled(1,1,1);
        glColor3f(1,1,1);
        glutSolidSphere(1,slices,stacks);

    glPopMatrix();
    glPushMatrix();
        glTranslated(7,6,-6);
        glScaled(1,1,1);
        glColor3f(1,1,1);
        glutSolidSphere(1,slices,stacks);

    glPopMatrix();
glPopMatrix();

}


void sMouse(int button, int state, int x, int y){

printf("Souris a: %d %d \n",x,y);
switch (button) {

case GLUT_LEFT_BUTTON : printf("Bouton Gauche \n");

if (state == GLUT_DOWN) { printf("Appui \n"); yr-=10;}
if (state == GLUT_UP) printf("Relachement \n");
break;

case GLUT_MIDDLE_BUTTON : printf("Bouton du Milieu \n");

if (state == GLUT_DOWN) printf("Appui \n");
if (state == GLUT_UP) printf("Relachement \n");
break;

case GLUT_RIGHT_BUTTON : printf("%lf",yr);

if (state == GLUT_DOWN) { printf("Appui \n"); yr+=10;}
if (state == GLUT_UP) printf("Relachement \n");
break;

default :printf("Erreur \n"); break;
}

glutPostRedisplay();
}

void tSpecial(int key, int x, int y) {
switch (key) {

case GLUT_KEY_UP : // case GLUT_KEY_F1 :
printf("%lf",yverti);
if ((yverti!=-4||xhoriz<=0)&&(yverti!=-27||xhoriz>=0)&&(yverti!=12||xhoriz>=0)&&(yverti!=-55||xhoriz<=0)&&(yverti!=-93.5)&&(score!=3)){
yverti -= 0.5;/*cz=cz-0.5 ;*/ }else{yr=170;yverti = 30;cz=56;xhoriz = 0;score=score+1;printf("%i",score);}break;

case GLUT_KEY_DOWN : // case GLUT_KEY_F2 :
if ((yverti!=-6||xhoriz<=0)&&(yverti!=-29||xhoriz>=0)&&(yverti!=10||xhoriz>=0)&&(score!=3)){
yverti += 0.5;}else{yr=170;yverti = 30;xhoriz = 0;score=score+1;printf("%s",score);} break;

case GLUT_KEY_LEFT : // case GLUT_KEY_F1 :
if ((xhoriz>-4)&&(score!=3)){
xhoriz -= 0.5;
}break;
case GLUT_KEY_RIGHT : // case GLUT_KEY_F2 :
if ((xhoriz<4)&&(score!=3)){
xhoriz += 0.5;
}break;
default :
printf(" Autre Touche Speciale\n "); break;

}
glutPostRedisplay();
}






static void display(void)
{

    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    const double a = t*90.0;
score = score%4;
glPushMatrix();
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
/*gluLookAt(3,3,3,0,0,0,0,1,0);*/
gluLookAt(cx,cy,cz,lx,ly,lz,0,1,0);










/*9atouss*/

glPushMatrix();
glTranslated(xhoriz,0,yverti);
glPushMatrix();cat(yr);glPopMatrix();
glPopMatrix();




/*obstacle loul*/

glPushMatrix();
glTranslated(2.5,-2.6,-7);
glRotated(-90,1,0,0);
glScaled(0.5,0.7,0.1);
piste();

glPopMatrix();

/*obstacle 2*/

glPushMatrix();
glTranslated(-2.5,-2.6,-30);
glRotated(-90,1,0,0);
glScaled(0.5,0.7,0.1);
piste();

glPopMatrix();

/*obstacle thaleth*/

glPushMatrix();
glTranslated(2.5,-2.6,-60);
glRotated(-90,1,0,0);
glScaled(0.5,0.7,0.1);
piste();

glPopMatrix();


/*point d'arrivée*/

glPushMatrix();
glTranslated(0,-0.4,-90);
point_a();

glPopMatrix();

/*point d*/

glPushMatrix();
glTranslated(0,-0.4,35);
point_a();

glPopMatrix();




/*chajra axe imin*/

int ch=-20;
for (int i=0;i<14;i++){

glPushMatrix();
glTranslated(-1,1,-ch);
tree();
ch=ch+7;

glPopMatrix();

}



/*chajra axe isar*/

int c=-20;
for (int i=0;i<14;i++){

glPushMatrix();
glTranslated(14,1,-c);
tree();
c=c+7;

glPopMatrix();

}



/*chajra type 2 axe imin*/

for (int i=2;i<35;i++){
  for (int j=-20;j<35;j++){
  glPushMatrix();
glTranslated(i,1,-j);
tree2();

j=j+5;
glPopMatrix();
  }i=i+5;
}

/*chajra type 2 axe isar*/

for (int i=40;i<80;i++){
  for (int j=-20;j<35;j++){
  glPushMatrix();
glTranslated(-i,1,-j);
tree2();

j=j+5;
glPopMatrix();
  }i=i+5;
}


/*chajra tay7a*/

glPushMatrix();
 glTranslated(2,-5,15);
glRotated(-80,1,0,1);
 tree();

glPopMatrix();

/*9aa333*/
glPushMatrix();
 glTranslated(0,-2.7,-9);
 glScaled(150,1,195);
glColor3d(0.21,0.70,0.33);
  glutSolidCube(1);
glPopMatrix();


/*kayaasss*/
glPushMatrix();
 glTranslated(0,-2.6,-7);
 glScaled(10,1.3,195);
 glColor3d(0.30,0.32,0.38);
  glutSolidCube(1);
glPopMatrix();

/*5ittt*/
glPushMatrix();
 glTranslated(0,-2.9,-15);
 glScaled(0.5,2,165);
glColor3d(1,1,1);
  glutSolidCube(1);
glPopMatrix();


/*chamess*/
glPushMatrix();
  glTranslated(0,15,-6);
    glScaled(1,1,1);
    glColor3f(0.87,0.75,0.05);
    glutSolidSphere(1,slices,stacks);
glPopMatrix();




    glPushMatrix();
    glTranslated(5,6,-6);
    ghima(a);
    glPopMatrix();





/*4ima2*/

   glPushMatrix();
    glTranslated(-19,6,-6);
    ghima(a);
    glPopMatrix();





    glColor3f(1.0f, 1.0f, 1.0f);

    glRasterPos2f(-50.5f, 22.0f);

   char text[50];
sprintf(text, "votre score est : %d", score);


    for (int i = 0; text[i] != '\0'; ++i) {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, text[i]);
    }


    if (yverti==-93.5){
      glColor3f(0.87, 0.98, 0.68);

    glRasterPos2f(-2.6f, 0.1f);

   char text[] = "YOU WIN !";


    for (int i = 0; text[i] != '\0'; ++i) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }


    }



if (score==3){


    glColor3f(0.89, 0.04, 0.10);

    glRasterPos2f(-5.0f, 0.5f);

   char text[] = "GAME OVER";


    for (int i = 0; text[i] != '\0'; ++i) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }

}





glPopMatrix();



glPopMatrix();


glutSwapBuffers();
}


static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case '8': cx++  ;printf("cx: %lf, cy: %lf, cz: %lf\n", cx, cy, cz); break;printf("cx: %lf, cy: %lf, cz: %lf\n", cx, cy, cz); case '5': cx-- ;printf("cx: %lf, cy: %lf, cz: %lf\n", cx, cy, cz); break;
        case '6': cz++;printf("cx: %lf, cy: %lf, cz: %lf\n", cx, cy, cz); break;case '4': cz-- ; printf("cx: %lf, cy: %lf, cz: %lf\n", cx, cy, cz);break;
        case '7': cy++;break;case '1':cy--;printf("cx: %lf, cy: %lf, cz: %lf\n", cx, cy, cz);break;
        case 'r': r=0.92;g=0.21;b=0.16;    break;case 'g':r=0.13;g=0.8;b=0.30;  break;case 'b':r=0.22;g=0.13;b=0.8  ;break; case 'n': r=0.92;  g=0.55 ; b=0.29;break;
        case 't':f1=-90;f2=1;f3=0 ;break; case 's':f1=-180; f2=1;f3=0;  break; case 'o': f1=-90; f2=-0; f3=1; break;
        case 'a':cz=38;cx=0;cy=0;yr=0;break;
        case 'z':cx= 67; cy= 22; cz= 50;break;case'e':cx= -68; cy: 22;cz= 44;break;case'q':cx= -65; cy= 22; cz= -89;break;case'w':cx= 82; cy= 22;cz=-59;break;
    }

    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

/* Program entry point */

int main(int argc, char *argv[])
{

    glutInit(&argc, argv);
    glutInitWindowSize(1920,1080);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");
    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutMouseFunc ( sMouse);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(0.3,0.5,0.9,1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
    glutSpecialFunc(tSpecial);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);






    glutMainLoop();

    return EXIT_SUCCESS;
}
