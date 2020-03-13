#include <windows.h>
#include<cstdio>
#include <GL/glut.h>
#include <GL/gl.h>
#include<stdlib.h>
#include<math.h>
#include<bits/stdc++.h>
# define PI           3.14159265358979323846

void morning();
void day();
void night();
void winter_night();
void mrngSky();
void sun();
void nitSky();
void snow();
void daySky();
void day_cloud();
void night_cloud();
void sun();
void moon();
void plane();
void base_ground();
void tree();
void rail_line();
void train();
void night_train();
void day_road();
void car();
void microbus();
void night_microbus();
void jeep();
void bus();
void night_bus();
void day_buildings();
void night_buildings();
void nagordola_on();
void nagordola_off();
void lake();
void night_lake();
void boat();
void night_boat();
void morning_sound();

GLfloat snowPosition = 0.0f;
GLfloat snowSpeed = 0.01f;
GLfloat planeSpeed = 0.04f;
GLfloat planePosition = 0.0f;
GLfloat rightSpeed = 0.05f;
GLfloat rightPosition = 0.0f;
GLfloat leftSpeed = 0.05f;
GLfloat leftPosition = 0.0f;
GLfloat trainSpeed = 0.1f;
GLfloat trainPosition = 0.0f;
GLfloat boatSpeed = 0.02f;
GLfloat boatPosition = 0.0f;
GLfloat rSpeed=0.0f;

void init() {
    glLoadIdentity();
}

void sound()
{
    PlaySound("a.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void update(int value)
{

       if(snowPosition < -1.5)
       {
         snowPosition = 2.0f;
       }

       if(snowPosition>2.0)
       {
          snowPosition=-1.5;
       }
       snowPosition -= snowSpeed;
       glutPostRedisplay();
       glutTimerFunc(25, update, 0);
}

void update1(int value) {


if(planePosition <- 1.5)
        planePosition = 1.5f;

    planePosition -= planeSpeed;


	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update2(int value) {


if(rightPosition > 1.5)
        rightPosition = -1.5f;

    rightPosition += rightSpeed;


	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void update3(int value) {


if(leftPosition <- 1.5)
        leftPosition = 2.0;

    leftPosition -= leftSpeed;


	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

void update4(int value) {


if(trainPosition <- 1.5)
        trainPosition = 2.0f;

    trainPosition -= trainSpeed;


	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}

void update5(int value) {


if(boatPosition <- 1.5)
        boatPosition = 1.0;

    boatPosition -= boatSpeed;


	glutPostRedisplay();


	glutTimerFunc(100, update5, 0);
}

void FilledCircle(GLfloat cx,GLfloat cy, GLfloat r, int amount){
    int i;
    GLfloat twicePi=2.0f*PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(i=0;i<=amount;i++){
        glVertex2f(
            cx+(r*cos(i*twicePi/amount)),
            cy+(r*sin(i*twicePi/amount))
        );


    }
    glEnd();
}

void LineCircle(GLfloat cx,GLfloat cy, GLfloat r, int amount){
    int i;
    GLfloat twicePi=2.0f*PI;
	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= amount;i++) {
			glVertex2f(
			    cx + (r*cos(i*twicePi/amount)),
			    cy + (r*sin(i*twicePi/amount))
			);

    }
    glEnd();
}


void HalfCircle(GLfloat cx,GLfloat cy,GLfloat r)
{
	int i;
	int lineAmount = 100;
	GLfloat twicePi=2.0f*PI;
	glBegin(GL_TRIANGLE_FAN);
		for(i = 50; i <= lineAmount;i++)
        {
			glVertex2f(cx + (r*cos(i*twicePi/lineAmount)),cy+(r*sin(i*twicePi/lineAmount)));

		}
	glEnd();
}
void mrngSky()
{
    glBegin(GL_QUADS);
    glColor3ub(180, 235, 245);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glColor3ub(200, 240, 250);
    glVertex2f(-1.0,.2);
    glVertex2f(1.0,.2);
    glEnd();
}


void daySky()
{
    glBegin(GL_QUADS);
    glColor3ub(100, 200, 220);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glColor3ub(150, 240, 240);
    glVertex2f(-1.0,.2);
    glVertex2f(1.0,.2);
    glEnd();
}

void nitSky()
{
    glBegin(GL_QUADS);
    glColor3ub(80, 80, 80);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glColor3ub(150, 150, 150);
    glVertex2f(-1.0,.2);
    glVertex2f(1.0,.2);
    glEnd();
}



void snow()
{
    glPushMatrix();
    glTranslatef(-snowPosition,snowPosition, 0.0f);
    glColor3ub(255,255,255);
    FilledCircle(0,0,0.025,100);
    FilledCircle(-0.6,0.7,0.025,100);
    FilledCircle(-0,0.9,0.025,100);
    FilledCircle(-0.86,0.7,0.025,100);
    FilledCircle(-0.65,0.87,0.025,100);
    FilledCircle(-0.57,0.34,0.025,100);
    FilledCircle(0,0,0.025,100);
    FilledCircle(0.54,0.52,0.025,100);
    FilledCircle(0.67,0.67,0.025,100);
    FilledCircle(0.82,0.35,0.025,100);
    FilledCircle(0.38,0.2,0.025,100);
    FilledCircle(0.9,0.6,0.025,100);
    FilledCircle(0.2,0.5,0.025,100);
    FilledCircle(-0.32,0.5,0.025,100);
    FilledCircle(-0.65,0.25,0.025,100);
    FilledCircle(-0.7,0.3,0.025,100);

    glTranslatef(snowPosition,snowPosition, 0.0f);
    glColor3ub(255,255,255);
    glTranslatef(-0.2,1,0);
    FilledCircle(0,0,0.025,100);
    FilledCircle(-0.6,0.7,0.025,100);
    FilledCircle(-0,0.9,0.025,100);
    FilledCircle(-0.86,0.7,0.025,100);
    FilledCircle(-0.65,0.87,0.025,100);
    FilledCircle(-0.57,0.34,0.025,100);
    FilledCircle(0,0,0.025,100);
    FilledCircle(0.54,0.52,0.025,100);
    FilledCircle(0.67,0.67,0.025,100);
    FilledCircle(0.82,0.35,0.025,100);
    FilledCircle(0.38,0.2,0.025,100);
    FilledCircle(0.9,0.6,0.025,100);
    FilledCircle(0.2,0.5,0.025,100);
    FilledCircle(-0.32,0.5,0.025,100);
    FilledCircle(-0.65,0.25,0.025,100);
    FilledCircle(-0.7,0.3,0.025,100);


    glTranslatef(0.0f,snowPosition, 0.0f);
    glColor3ub(255,255,255);
    glTranslatef(0.2,0,0);
    FilledCircle(0,0,0.025,100);
    FilledCircle(-0.6,0.7,0.025,100);
    FilledCircle(-0,0.9,0.025,100);
    FilledCircle(-0.86,0.7,0.025,100);
    FilledCircle(-0.65,0.87,0.025,100);
    FilledCircle(-0.57,0.34,0.025,100);
    FilledCircle(0,0,0.025,100);
    FilledCircle(0.54,0.52,0.025,100);
    FilledCircle(0.67,0.67,0.025,100);
    FilledCircle(0.82,0.35,0.025,100);
    FilledCircle(0.38,0.2,0.025,100);
    FilledCircle(0.9,0.6,0.025,100);
    FilledCircle(0.2,0.5,0.025,100);
    FilledCircle(-0.32,0.5,0.025,100);
    FilledCircle(-0.65,0.25,0.025,100);
    FilledCircle(-0.7,0.3,0.025,100);
    glPopMatrix();
}
void sun(){

    glColor3ub(253, 255, 135);
    FilledCircle(.78,.83,.06,100);
}

void day_cloud(){

    //sun
    glColor3ub(253, 255, 135);
    FilledCircle(.78,.83,.06,100);

    //glColor3ub(242, 242, 242);
    //FilledCircle(.78,.8,.05,100);
    glColor3ub(242, 242, 242);
    FilledCircle(.7,.8,.05,100);
    glColor3ub(242, 242, 242);
    FilledCircle(.75,.75,.05,100);

    glColor3ub(242, 242, 242);
    FilledCircle(.18,.7,.05,100);
    glColor3ub(242, 242, 242);
    FilledCircle(.1,.7,.05,100);
    glColor3ub(242, 242, 242);
    FilledCircle(.15,.65,.05,100);

    glColor3ub(242, 242, 242);
    FilledCircle(-.48,.85,.05,100);
    glColor3ub(242, 242, 242);
    FilledCircle(-.4,.85,.05,100);
    glColor3ub(242, 242, 242);
    FilledCircle(-.45,.8,.05,100);


    glColor3ub(242, 242, 242);
    FilledCircle(-.88,.9,.05,100);
    glColor3ub(242, 242, 242);
    FilledCircle(-.8,.9,.05,100);
    glColor3ub(242, 242, 242);
    FilledCircle(-.85,.85,.05,100);

}
void moon(){
    glColor3ub(255, 255, 2555);
    FilledCircle(.78,.83,.06,100);
}

void night_cloud(){

    //glColor3ub(242, 242, 242);
    //FilledCircle(.78,.8,.05,100);

    glColor3ub(220, 220, 220);
    FilledCircle(.18,.7,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(.1,.7,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(.15,.65,.05,100);

    glColor3ub(220, 220, 220);
    FilledCircle(-.48,.85,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.4,.85,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.45,.8,.05,100);


    glColor3ub(220, 220, 220);
    FilledCircle(-.88,.9,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.8,.9,.05,100);
    glColor3ub(220, 220, 220);
    FilledCircle(-.85,.85,.05,100);

}
void base_ground()
{
    glBegin(GL_QUADS);
    glColor3ub(115, 36, 0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-.9);
    glVertex2f(-1.0,-.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(23, 135, 0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(-.8,-1.0);
    glVertex2f(-.9,-.93);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(23, 135, 0);
    glVertex2f(-.8,-1.0);
    glVertex2f(-.6,-1.0);
    glVertex2f(-.7,-.93);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(23, 135, 0);
    glVertex2f(-.6,-1.0);
    glVertex2f(-.4,-1.0);
    glVertex2f(-.5,-.93);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(23, 135, 0);
    glVertex2f(1.0,-1.0);
    glVertex2f(.8,-1.0);
    glVertex2f(.9,-.93);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(23, 135, 0);
    glVertex2f(.8,-1.0);
    glVertex2f(.6,-1.0);
    glVertex2f(.7,-.93);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(23, 135, 0);
    glVertex2f(.6,-1.0);
    glVertex2f(.4,-1.0);
    glVertex2f(.5,-.93);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(158, 113, 0);
    glVertex2f(-1.0,-.9);
    glVertex2f(1.0,-.9);
    glVertex2f(1.0,-.8);
    glVertex2f(-1.0,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 36, 0);
    glVertex2f(-1.0,-.8);
    glVertex2f(1.0,-.8);
    glVertex2f(1.0,-.65);
    glVertex2f(-1.0,-.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 36, 0);
    glVertex2f(-1.0,-.18);
    glVertex2f(1.0,-.18);
    glVertex2f(1.0,-.02);
    glVertex2f(-1.0,-.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(13, 198, 47);
    glVertex2f(-1.0,.09);
    glVertex2f(1.0,.09);
    glVertex2f(1.0,.2);
    glVertex2f(-1.0,.2);
    glEnd();



    //building base
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0,.1);
    glVertex2f(1.0,0.1);
    glVertex2f(1.0,0.09);
    glVertex2f(-1.0,0.09);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0,.02);
    glVertex2f(1.0,.02);
    glVertex2f(1.0,.01);
    glVertex2f(-1.0,.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(201, 201, 201);
    glVertex2f(-1.0,.09);
    glVertex2f(1.0,0.09);
    glVertex2f(1.0,0.02);
    glVertex2f(-1.0,0.02);
    glEnd();
}

void tree(){

    glBegin(GL_QUADS);
    glColor3ub(165, 49, 0);
    glVertex2f(-.58,.1);
    glVertex2f(-.56,.1);
    glVertex2f(-.56,.25);
    glVertex2f(-.58,.25);
    glEnd();

    glColor3ub(45,140,0);
    FilledCircle(-.6,.2,.05,100);
    glColor3ub(45,140,0);
    FilledCircle(-.54,.2,.05,100);
    glColor3ub(45,140,0);
    FilledCircle(-.57,.25,.05,100);

    //tree-2

    glBegin(GL_QUADS);
    glColor3ub(165, 49, 0);
    glVertex2f(-.02,.1);
    glVertex2f(-.00,.1);
    glVertex2f(-.00,.25);
    glVertex2f(-.02,.25);
    glEnd();

    glColor3ub(45,140,0);
    FilledCircle(-.04,.2,.05,100);
    glColor3ub(45,140,0);
    FilledCircle(.02,.2,.05,100);
    glColor3ub(45,140,0);
    FilledCircle(-.01,.25,.05,100);

}

void day_buildings() {

//building-1
    //structure
    glBegin(GL_QUADS);
    glColor3ub(180,180,255);
    glVertex2f(.75,.1);
    glVertex2f(1.0,.1);
    glVertex2f(1.0,.6);
    glVertex2f(.75,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.75,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,.62);
    glVertex2f(.75,.62);
    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3ub(112, 48, 0);
    glVertex2f(.82,.16);
    glVertex2f(.92,.16);
    glVertex2f(.92,.1);
    glVertex2f(.82,.1);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.86,.16);
    glVertex2f(.88,.16);
    glVertex2f(.88,.6);
    glVertex2f(.86,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.78,.48);
    glVertex2f(.83,.48);
    glVertex2f(.83,.55);
    glVertex2f(.78,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.78,.33);
    glVertex2f(.83,.33);
    glVertex2f(.83,.4);
    glVertex2f(.78,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.78,.18);
    glVertex2f(.83,.18);
    glVertex2f(.83,.25);
    glVertex2f(.78,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.91,.48);
    glVertex2f(.96,.48);
    glVertex2f(.96,.55);
    glVertex2f(.91,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.91,.33);
    glVertex2f(.96,.33);
    glVertex2f(.96,.4);
    glVertex2f(.91,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.91,.18);
    glVertex2f(.96,.18);
    glVertex2f(.96,.25);
    glVertex2f(.91,.25);
    glEnd();

//building-2

    //structure
    glBegin(GL_QUADS);
    glColor3ub(255,200,140);
    glVertex2f(.5,.1);
    glVertex2f(.73,.1);
    glVertex2f(.73,.55);
    glVertex2f(.5,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.5,.55);
    glVertex2f(.73,.55);
    glVertex2f(.73,.57);
    glVertex2f(.5,.57);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.52,.18);
    glVertex2f(.71,.18);
    glVertex2f(.71,.25);
    glVertex2f(.52,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.52,.27);
    glVertex2f(.71,.27);
    glVertex2f(.71,.34);
    glVertex2f(.52,.34);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.52,.36);
    glVertex2f(.71,.36);
    glVertex2f(.71,.43);
    glVertex2f(.52,.43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.52,.45);
    glVertex2f(.71,.45);
    glVertex2f(.71,.52);
    glVertex2f(.52,.52);
    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3ub(112, 48, 0);
    glVertex2f(.55,.16);
    glVertex2f(.68,.16);
    glVertex2f(.68,.1);
    glVertex2f(.55,.1);
    glEnd();


//building-3

    glBegin(GL_POLYGON);
    glColor3ub(125,55,0);
    glVertex2f(.28,.1);
    glVertex2f(.48,.1);
    glVertex2f(.48,.6);
    glVertex2f(.38,.8);
    glVertex2f(.28,.6);
    glEnd();

    //windows
    glBegin(GL_POLYGON);
    glColor3ub(78,137,239);
    glVertex2f(.29,.1);
    glVertex2f(.47,.1);
    glVertex2f(.47,.6);
    glVertex2f(.38,.75);
    glVertex2f(.29,.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(125,55,0);
    glVertex2f(.47,.6);
    glVertex2f(.29,.6);
    glVertex2f(.47,.55);
    glVertex2f(.29,.55);
    glVertex2f(.47,.5);
    glVertex2f(.29,.5);
    glVertex2f(.47,.45);
    glVertex2f(.29,.45);
    glVertex2f(.47,.4);
    glVertex2f(.29,.4);
    glVertex2f(.47,.35);
    glVertex2f(.29,.35);
    glVertex2f(.47,.3);
    glVertex2f(.29,.3);
    glVertex2f(.47,.25);
    glVertex2f(.29,.25);
    glVertex2f(.47,.2);
    glVertex2f(.29,.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,20,220);
    glVertex2f(.33,.1);
    glVertex2f(.43,.1);
    glVertex2f(.43,.15);
    glVertex2f(.33,.15);
    glEnd();

//building-4
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 180);
    glVertex2f(.08,.1);
    glVertex2f(.27,.1);
    glVertex2f(.27,.5);
    glVertex2f(.08,.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.08,.5);
    glVertex2f(.27,.5);
    glVertex2f(.27,.52);
    glVertex2f(.08,.52);
    glEnd();


    //windows
    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.09,.17);
    glVertex2f(.14,.17);
    glVertex2f(.14,.49);
    glVertex2f(.09,.49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.15,.17);
    glVertex2f(.2,.17);
    glVertex2f(.2,.49);
    glVertex2f(.15,.49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.21,.17);
    glVertex2f(.26,.17);
    glVertex2f(.26,.49);
    glVertex2f(.21,.49);
    glEnd();

//door
    glBegin(GL_QUADS);
    glColor3ub(112, 48, 0);
    glVertex2f(.13,.15);
    glVertex2f(.22,.15);
    glVertex2f(.22,.1);
    glVertex2f(.13,.1);
    glEnd();


//building-5

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 180);
    glVertex2f(-.28,.1);
    glVertex2f(-.1,.1);
    glVertex2f(-.1,.26);
    glVertex2f(-.28,.26);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(-.28,.26);
    glVertex2f(-.1,.26);
    glVertex2f(-.1,.28);
    glVertex2f(-.28,.28);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(-.25,.1);
    glVertex2f(-.2,.1);
    glVertex2f(-.2,.17);
    glVertex2f(-.25,.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(-.18,.1);
    glVertex2f(-.13,.1);
    glVertex2f(-.13,.17);
    glVertex2f(-.18,.17);
    glEnd();


//flag
    glBegin(GL_QUADS);
    glColor3ub(200,120,0);
    glVertex2f(-.23,.28);
    glVertex2f(-.22,.28);
    glVertex2f(-.22,.45);
    glVertex2f(-.23,.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(7,100,0);
    glVertex2f(-.22,.35);
    glVertex2f(-.12,.35);
    glVertex2f(-.12,.45);
    glVertex2f(-.22,.45);
    glEnd();

    glColor3ub(255,0,0);
    FilledCircle(-.165,.4,.025,100);

//building-round

    //structure
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.8,.5);
    glVertex2f(-.8,.57);
    glEnd();

    glColor3ub(150,0,0);
    FilledCircle(-.8,.57,.008,100);

    glBegin(GL_QUADS);
    glColor3ub(215, 215, 215);
    glVertex2f(-.93,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.3);
    glVertex2f(-.93,.3);
    glEnd();


    glColor3ub(160,170,255);
    FilledCircle(-.8,.35,.17,100);

    //door
    glBegin(GL_QUADS);
    glColor3ub(0,20,220);
    glVertex2f(-.85,.1);
    glVertex2f(-.75,.1);
    glVertex2f(-.75,.15);
    glVertex2f(-.85,.15);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(-.92,.25);
    glVertex2f(-.68,.25);
    glVertex2f(-.68,.3);
    glVertex2f(-.92,.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(-.95,.32);
    glVertex2f(-.65,.32);
    glVertex2f(-.65,.37);
    glVertex2f(-.95,.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(-.92,.39);
    glVertex2f(-.68,.39);
    glVertex2f(-.68,.44);
    glVertex2f(-.92,.44);
    glEnd();


}

void night_buildings(){
    //building-1
    //structure
    glBegin(GL_QUADS);
    glColor3ub(0,180,102);
    glVertex2f(.75,.1);
    glVertex2f(1.0,.1);
    glVertex2f(1.0,.6);
    glVertex2f(.75,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.75,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,.62);
    glVertex2f(.75,.62);
    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3ub(112, 48, 0);
    glVertex2f(.82,.16);
    glVertex2f(.92,.16);
    glVertex2f(.92,.1);
    glVertex2f(.82,.1);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(.86,.16);
    glVertex2f(.88,.16);
    glVertex2f(.88,.6);
    glVertex2f(.86,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(.78,.48);
    glVertex2f(.83,.48);
    glVertex2f(.83,.55);
    glVertex2f(.78,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(.78,.33);
    glVertex2f(.83,.33);
    glVertex2f(.83,.4);
    glVertex2f(.78,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(.78,.18);
    glVertex2f(.83,.18);
    glVertex2f(.83,.25);
    glVertex2f(.78,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(.91,.48);
    glVertex2f(.96,.48);
    glVertex2f(.96,.55);
    glVertex2f(.91,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(.91,.33);
    glVertex2f(.96,.33);
    glVertex2f(.96,.4);
    glVertex2f(.91,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(.91,.18);
    glVertex2f(.96,.18);
    glVertex2f(.96,.25);
    glVertex2f(.91,.25);
    glEnd();

//building-2

    //structure
    glBegin(GL_QUADS);
    glColor3ub(255,200,140);
    glVertex2f(.5,.1);
    glVertex2f(.73,.1);
    glVertex2f(.73,.55);
    glVertex2f(.5,.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.5,.55);
    glVertex2f(.73,.55);
    glVertex2f(.73,.57);
    glVertex2f(.5,.57);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(120,180,255);
    glVertex2f(.52,.18);
    glVertex2f(.71,.18);
    glVertex2f(.71,.25);
    glVertex2f(.52,.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120,180,255);
    glVertex2f(.52,.27);
    glVertex2f(.71,.27);
    glVertex2f(.71,.34);
    glVertex2f(.52,.34);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120,180,255);
    glVertex2f(.52,.36);
    glVertex2f(.71,.36);
    glVertex2f(.71,.43);
    glVertex2f(.52,.43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120,180,255);
    glVertex2f(.52,.45);
    glVertex2f(.71,.45);
    glVertex2f(.71,.52);
    glVertex2f(.52,.52);
    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3ub(112, 48, 0);
    glVertex2f(.55,.16);
    glVertex2f(.68,.16);
    glVertex2f(.68,.1);
    glVertex2f(.55,.1);
    glEnd();


//building-3

    glBegin(GL_POLYGON);
    glColor3ub(125,55,0);
    glVertex2f(.28,.1);
    glVertex2f(.48,.1);
    glVertex2f(.48,.6);
    glVertex2f(.38,.8);
    glVertex2f(.28,.6);
    glEnd();

    //windows
    glBegin(GL_POLYGON);
    glColor3ub(120,180,255);
    glVertex2f(.29,.1);
    glVertex2f(.47,.1);
    glVertex2f(.47,.6);
    glVertex2f(.38,.75);
    glVertex2f(.29,.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(125,55,0);
    glVertex2f(.47,.6);
    glVertex2f(.29,.6);
    glVertex2f(.47,.55);
    glVertex2f(.29,.55);
    glVertex2f(.47,.5);
    glVertex2f(.29,.5);
    glVertex2f(.47,.45);
    glVertex2f(.29,.45);
    glVertex2f(.47,.4);
    glVertex2f(.29,.4);
    glVertex2f(.47,.35);
    glVertex2f(.29,.35);
    glVertex2f(.47,.3);
    glVertex2f(.29,.3);
    glVertex2f(.47,.25);
    glVertex2f(.29,.25);
    glVertex2f(.47,.2);
    glVertex2f(.29,.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,20,220);
    glVertex2f(.33,.1);
    glVertex2f(.43,.1);
    glVertex2f(.43,.15);
    glVertex2f(.33,.15);
    glEnd();

//building-4
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 180);
    glVertex2f(.08,.1);
    glVertex2f(.27,.1);
    glVertex2f(.27,.5);
    glVertex2f(.08,.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(.08,.5);
    glVertex2f(.27,.5);
    glVertex2f(.27,.52);
    glVertex2f(.08,.52);
    glEnd();


    //windows
    glBegin(GL_QUADS);
    glColor3ub(120,180,255);
    glVertex2f(.09,.17);
    glVertex2f(.14,.17);
    glVertex2f(.14,.49);
    glVertex2f(.09,.49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120,180,255);
    glVertex2f(.15,.17);
    glVertex2f(.2,.17);
    glVertex2f(.2,.49);
    glVertex2f(.15,.49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120,180,255);
    glVertex2f(.21,.17);
    glVertex2f(.26,.17);
    glVertex2f(.26,.49);
    glVertex2f(.21,.49);
    glEnd();

//door
    glBegin(GL_QUADS);
    glColor3ub(112, 48, 0);
    glVertex2f(.13,.15);
    glVertex2f(.22,.15);
    glVertex2f(.22,.1);
    glVertex2f(.13,.1);
    glEnd();


//building-5

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 180);
    glVertex2f(-.28,.1);
    glVertex2f(-.1,.1);
    glVertex2f(-.1,.26);
    glVertex2f(-.28,.26);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125,55,0);
    glVertex2f(-.28,.26);
    glVertex2f(-.1,.26);
    glVertex2f(-.1,.28);
    glVertex2f(-.28,.28);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(-.25,.1);
    glVertex2f(-.2,.1);
    glVertex2f(-.2,.17);
    glVertex2f(-.25,.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,80,225);
    glVertex2f(-.18,.1);
    glVertex2f(-.13,.1);
    glVertex2f(-.13,.17);
    glVertex2f(-.18,.17);
    glEnd();


//flag
    glBegin(GL_QUADS);
    glColor3ub(200,120,0);
    glVertex2f(-.23,.28);
    glVertex2f(-.22,.28);
    glVertex2f(-.22,.45);
    glVertex2f(-.23,.45);
    glEnd();

//building-round

    //structure
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.8,.5);
    glVertex2f(-.8,.57);
    glEnd();

    glColor3ub(255,0,0);
    FilledCircle(-.8,.57,.008,100);

    glBegin(GL_QUADS);
    glColor3ub(215, 215, 215);
    glVertex2f(-.93,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.3);
    glVertex2f(-.93,.3);
    glEnd();

    glColor3ub(160,170,255);
    FilledCircle(-.8,.35,.17,100);



    //door
    glBegin(GL_QUADS);
    glColor3ub(0,20,220);
    glVertex2f(-.85,.1);
    glVertex2f(-.75,.1);
    glVertex2f(-.75,.15);
    glVertex2f(-.85,.15);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(255,255,150);
    glVertex2f(-.92,.25);
    glVertex2f(-.68,.25);
    glVertex2f(-.68,.3);
    glVertex2f(-.92,.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,150);
    glVertex2f(-.95,.32);
    glVertex2f(-.65,.32);
    glVertex2f(-.65,.37);
    glVertex2f(-.95,.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,150);
    glVertex2f(-.92,.39);
    glVertex2f(-.68,.39);
    glVertex2f(-.68,.44);
    glVertex2f(-.92,.44);
    glEnd();
}

void rail_line(){
    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-1.0,-.9);
    glVertex2f(1.0,-.9);
    glVertex2f(1.0,-.875);
    glVertex2f(-1.0,-.875);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-1.0,-.825);
    glVertex2f(1.0,-.825);
    glVertex2f(1.0,-.8);
    glVertex2f(-1.0,-.8);
    glEnd();

//middle lines
    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-.9,-.875);
    glVertex2f(-.88,-.875);
    glVertex2f(-.88,-.8);
    glVertex2f(-.9,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-.8,-.875);
    glVertex2f(-.78,-.875);
    glVertex2f(-.78,-.8);
    glVertex2f(-.8,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-.7,-.875);
    glVertex2f(-.68,-.875);
    glVertex2f(-.68,-.8);
    glVertex2f(-.7,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-.6,-.875);
    glVertex2f(-.58,-.875);
    glVertex2f(-.58,-.8);
    glVertex2f(-.6,-.8);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-.5,-.875);
    glVertex2f(-.48,-.875);
    glVertex2f(-.48,-.8);
    glVertex2f(-.5,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-.4,-.875);
    glVertex2f(-.38,-.875);
    glVertex2f(-.38,-.8);
    glVertex2f(-.4,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-.3,-.875);
    glVertex2f(-.28,-.875);
    glVertex2f(-.28,-.8);
    glVertex2f(-.3,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-.2,-.875);
    glVertex2f(-.18,-.875);
    glVertex2f(-.18,-.8);
    glVertex2f(-.2,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(-.1,-.875);
    glVertex2f(-.08,-.875);
    glVertex2f(-.08,-.8);
    glVertex2f(-.1,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(.0,-.875);
    glVertex2f(.02,-.875);
    glVertex2f(.02,-.8);
    glVertex2f(.0,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(.1,-.875);
    glVertex2f(.12,-.875);
    glVertex2f(.12,-.8);
    glVertex2f(.1,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(.2,-.875);
    glVertex2f(.22,-.875);
    glVertex2f(.22,-.8);
    glVertex2f(.2,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(.3,-.875);
    glVertex2f(.32,-.875);
    glVertex2f(.32,-.8);
    glVertex2f(.3,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(.4,-.875);
    glVertex2f(.42,-.875);
    glVertex2f(.42,-.8);
    glVertex2f(.4,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(.5,-.875);
    glVertex2f(.52,-.875);
    glVertex2f(.52,-.8);
    glVertex2f(.5,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(.6,-.875);
    glVertex2f(.62,-.875);
    glVertex2f(.62,-.8);
    glVertex2f(.6,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(.7,-.875);
    glVertex2f(.72,-.875);
    glVertex2f(.72,-.8);
    glVertex2f(.7,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(.8,-.875);
    glVertex2f(.82,-.875);
    glVertex2f(.82,-.8);
    glVertex2f(.8,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87, 87, 87);
    glVertex2f(.9,-.875);
    glVertex2f(.92,-.875);
    glVertex2f(.92,-.8);
    glVertex2f(.9,-.8);
    glEnd();
}

void train(){

    glPushMatrix();
    glTranslatef(trainPosition,0.0, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(252, 212, 126);
    glVertex2f(-.78,-.89);
    glVertex2f(-.5,-.89);
    glVertex2f(-.5,-.68);
    glVertex2f(-.65,-.68);
    glVertex2f(-.78,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.5,-.89);
    glVertex2f(-.48,-.89);
    glVertex2f(-.48,-.68);
    glVertex2f(-.5,-.68);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(252, 212, 126);
    glVertex2f(-.48,-.89);
    glVertex2f(-.18,-.89);
    glVertex2f(-.18,-.68);
    glVertex2f(-.48,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.18,-.89);
    glVertex2f(-.16,-.89);
    glVertex2f(-.16,-.68);
    glVertex2f(-.18,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(252, 212, 126);
    glVertex2f(-.16,-.89);
    glVertex2f(.16,-.89);
    glVertex2f(.16,-.68);
    glVertex2f(-.16,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(.16,-.89);
    glVertex2f(.18,-.89);
    glVertex2f(.18,-.68);
    glVertex2f(.16,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(252, 212, 126);
    glVertex2f(.18,-.89);
    glVertex2f(.48,-.89);
    glVertex2f(.48,-.68);
    glVertex2f(.18,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(.48,-.89);
    glVertex2f(.5,-.89);
    glVertex2f(.5,-.68);
    glVertex2f(.48,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(252, 212, 126);
    glVertex2f(.5,-.89);
    glVertex2f(.8,-.89);
    glVertex2f(.8,-.68);
    glVertex2f(.5,-.68);
    glEnd();

    //window

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(-.65,-.8);
    glVertex2f(-.53,-.8);
    glVertex2f(-.53,-.7);
    glVertex2f(-.65,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(-.46,-.8);
    glVertex2f(-.4,-.8);
    glVertex2f(-.4,-.7);
    glVertex2f(-.46,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(-.36,-.8);
    glVertex2f(-.3,-.8);
    glVertex2f(-.3,-.7);
    glVertex2f(-.36,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(-.26,-.8);
    glVertex2f(-.2,-.8);
    glVertex2f(-.2,-.7);
    glVertex2f(-.26,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(-.14,-.8);
    glVertex2f(-.08,-.8);
    glVertex2f(-.08,-.7);
    glVertex2f(-.14,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(-.04,-.8);
    glVertex2f(.02,-.8);
    glVertex2f(.02,-.7);
    glVertex2f(-.04,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(.06,-.8);
    glVertex2f(.12,-.8);
    glVertex2f(.12,-.7);
    glVertex2f(.06,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(.2,-.8);
    glVertex2f(.26,-.8);
    glVertex2f(.26,-.7);
    glVertex2f(.2,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(.3,-.8);
    glVertex2f(.36,-.8);
    glVertex2f(.36,-.7);
    glVertex2f(.3,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(.4,-.8);
    glVertex2f(.46,-.8);
    glVertex2f(.46,-.7);
    glVertex2f(.4,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(.52,-.8);
    glVertex2f(.58,-.8);
    glVertex2f(.58,-.7);
    glVertex2f(.52,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(.62,-.8);
    glVertex2f(.68,-.8);
    glVertex2f(.68,-.7);
    glVertex2f(.62,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(.72,-.8);
    glVertex2f(.78,-.8);
    glVertex2f(.78,-.7);
    glVertex2f(.72,-.7);
    glEnd();

    glPopMatrix();

}

void night_train(){

    glPushMatrix();
    glTranslatef(trainPosition,0.0, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(220, 180, 100);
    glVertex2f(-.78,-.89);
    glVertex2f(-.5,-.89);
    glVertex2f(-.5,-.68);
    glVertex2f(-.65,-.68);
    glVertex2f(-.78,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.5,-.89);
    glVertex2f(-.48,-.89);
    glVertex2f(-.48,-.68);
    glVertex2f(-.5,-.68);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(220, 180, 100);
    glVertex2f(-.48,-.89);
    glVertex2f(-.18,-.89);
    glVertex2f(-.18,-.68);
    glVertex2f(-.48,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.18,-.89);
    glVertex2f(-.16,-.89);
    glVertex2f(-.16,-.68);
    glVertex2f(-.18,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(220, 180, 100);
    glVertex2f(-.16,-.89);
    glVertex2f(.16,-.89);
    glVertex2f(.16,-.68);
    glVertex2f(-.16,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(.16,-.89);
    glVertex2f(.18,-.89);
    glVertex2f(.18,-.68);
    glVertex2f(.16,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(220, 180, 100);
    glVertex2f(.18,-.89);
    glVertex2f(.48,-.89);
    glVertex2f(.48,-.68);
    glVertex2f(.18,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(.48,-.89);
    glVertex2f(.5,-.89);
    glVertex2f(.5,-.68);
    glVertex2f(.48,-.68);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(220, 180, 100);
    glVertex2f(.5,-.89);
    glVertex2f(.8,-.89);
    glVertex2f(.8,-.68);
    glVertex2f(.5,-.68);
    glEnd();

    //window

    glBegin(GL_QUADS);
    glColor3ub(0, 128, 255);
    glVertex2f(-.65,-.8);
    glVertex2f(-.53,-.8);
    glVertex2f(-.53,-.7);
    glVertex2f(-.65,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-.46,-.8);
    glVertex2f(-.4,-.8);
    glVertex2f(-.4,-.7);
    glVertex2f(-.46,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-.36,-.8);
    glVertex2f(-.3,-.8);
    glVertex2f(-.3,-.7);
    glVertex2f(-.36,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-.26,-.8);
    glVertex2f(-.2,-.8);
    glVertex2f(-.2,-.7);
    glVertex2f(-.26,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-.14,-.8);
    glVertex2f(-.08,-.8);
    glVertex2f(-.08,-.7);
    glVertex2f(-.14,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-.04,-.8);
    glVertex2f(.02,-.8);
    glVertex2f(.02,-.7);
    glVertex2f(-.04,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.06,-.8);
    glVertex2f(.12,-.8);
    glVertex2f(.12,-.7);
    glVertex2f(.06,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.2,-.8);
    glVertex2f(.26,-.8);
    glVertex2f(.26,-.7);
    glVertex2f(.2,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.3,-.8);
    glVertex2f(.36,-.8);
    glVertex2f(.36,-.7);
    glVertex2f(.3,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.4,-.8);
    glVertex2f(.46,-.8);
    glVertex2f(.46,-.7);
    glVertex2f(.4,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.52,-.8);
    glVertex2f(.58,-.8);
    glVertex2f(.58,-.7);
    glVertex2f(.52,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(.62,-.8);
    glVertex2f(.68,-.8);
    glVertex2f(.68,-.7);
    glVertex2f(.62,-.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 44, 87);
    glVertex2f(.72,-.8);
    glVertex2f(.78,-.8);
    glVertex2f(.78,-.7);
    glVertex2f(.72,-.7);
    glEnd();

    glPopMatrix();
}

void day_road(){
    glBegin(GL_QUADS);
    glColor3ub(255, 250, 92);
    glVertex2f(-1.0,-.65);
    glVertex2f(1.0,-.65);
    glVertex2f(1.0,-.63);
    glVertex2f(-1.0,-.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170, 170, 170);
    glVertex2f(-1.0,-.63);
    glVertex2f(1.0,-.63);
    glVertex2f(1.0,-.2);
    glVertex2f(-1.0,-.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 250, 92);
    glVertex2f(-1.0,-.41);
    glVertex2f(1.0,-.41);
    glVertex2f(1.0,-.4);
    glVertex2f(-1.0,-.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 250, 92);
    glVertex2f(-1.0,-.2);
    glVertex2f(1.0,-.2);
    glVertex2f(1.0,-.18);
    glVertex2f(-1.0,-.18);
    glEnd();

//middle lines
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,-.52);
    glVertex2f(-.7,-.52);
    glVertex2f(-.7,-.5);
    glVertex2f(-.8,-.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);
    glVertex2f(-.5,-.52);
    glVertex2f(-.4,-.52);
    glVertex2f(-.4,-.5);
    glVertex2f(-.5,-.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);
    glVertex2f(-.1,-.52);
    glVertex2f(.0,-.52);
    glVertex2f(.0,-.5);
    glVertex2f(-.1,-.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);
    glVertex2f(.3,-.52);
    glVertex2f(.4,-.52);
    glVertex2f(.4,-.5);
    glVertex2f(0.3,-.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);
    glVertex2f(.7,-.52);
    glVertex2f(.8,-.52);
    glVertex2f(.8,-.5);
    glVertex2f(.7,-.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,-.32);
    glVertex2f(-.7,-.32);
    glVertex2f(-.7,-.3);
    glVertex2f(-.8,-.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);
    glVertex2f(-.5,-.32);
    glVertex2f(-.4,-.32);
    glVertex2f(-.4,-.3);
    glVertex2f(-.5,-.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);
    glVertex2f(-.1,-.32);
    glVertex2f(.0,-.32);
    glVertex2f(.0,-.3);
    glVertex2f(-.1,-.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);
    glVertex2f(.3,-.32);
    glVertex2f(.4,-.32);
    glVertex2f(.4,-.3);
    glVertex2f(0.3,-.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);
    glVertex2f(.7,-.32);
    glVertex2f(.8,-.32);
    glVertex2f(.8,-.3);
    glVertex2f(.7,-.3);
    glEnd();
}

void car(){

    glPushMatrix();
    glTranslatef(leftPosition,0.0, 0.0f);
    //body
    glBegin(GL_POLYGON);
    glColor3ub(255,51,51);
    glVertex2f(.25,-.55);
    glVertex2f(.6,-.55);
    glVertex2f(.6,-.46);
    glVertex2f(.55,-.46);
    glVertex2f(.5,-.42);
    glVertex2f(.4,-.42);
    glVertex2f(.35,-.47);
    glVertex2f(.25,-.47);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(.35,-.47);
    glVertex2f(.45,-.47);
    glVertex2f(.45,-.43);
    glVertex2f(.4,-.43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(.46,-.47);
    glVertex2f(.53,-.47);
    glVertex2f(.5,-.43);
    glVertex2f(.46,-.43);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(.35,-.54,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.35,-.54,.02,100);

    glColor3ub(0,0,0);
    FilledCircle(.5,-.54,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(.5,-.54,.02,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255 ,220);
    glVertex2f(.25,-.53);
    glVertex2f(.27,-.53);
    glVertex2f(.27,-.5);
    glVertex2f(.25,-.5);
    glEnd();

    glPopMatrix();
}

void microbus(){

    glPushMatrix();
    glTranslatef(leftPosition,0.0, 0.0f);
//body
    glBegin(GL_POLYGON);
    glColor3ub(0,255,128);
    glVertex2f(-.4,-.6);
    glVertex2f(-.05,-.6);
    glVertex2f(-.05,-.45);
    glVertex2f(-.3,-.45);
    glVertex2f(-.4,-.52);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(-.38,-.53);
    glVertex2f(-.25,-.53);
    glVertex2f(-.25,-.46);
    glVertex2f(-.29,-.46);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(-.23,-.53);
    glVertex2f(-.16,-.53);
    glVertex2f(-.16,-.46);
    glVertex2f(-.23,-.46);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(-.14,-.53);
    glVertex2f(-.07,-.53);
    glVertex2f(-.07,-.46);
    glVertex2f(-.14,-.46);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(-.28,-.58,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(-.28,-.58,.02,100);

    glColor3ub(0,0,0);
    FilledCircle(-.12,-.58,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(-.12,-.58,.02,100);


    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255 ,220);
    glVertex2f(-.4,-.58);
    glVertex2f(-.4,-.55);
    glVertex2f(-.38,-.55);
    glVertex2f(-.38,-.58);
    glEnd();

    glPopMatrix();

}

void night_microbus(){

    glPushMatrix();
    glTranslatef(leftPosition,0.0, 0.0f);
//body
    glBegin(GL_POLYGON);
    glColor3ub(0,255,128);
    glVertex2f(-.4,-.6);
    glVertex2f(-.05,-.6);
    glVertex2f(-.05,-.45);
    glVertex2f(-.3,-.45);
    glVertex2f(-.4,-.52);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(-.38,-.53);
    glVertex2f(-.25,-.53);
    glVertex2f(-.25,-.46);
    glVertex2f(-.29,-.46);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-.23,-.53);
    glVertex2f(-.16,-.53);
    glVertex2f(-.16,-.46);
    glVertex2f(-.23,-.46);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-.14,-.53);
    glVertex2f(-.07,-.53);
    glVertex2f(-.07,-.46);
    glVertex2f(-.14,-.46);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(-.28,-.58,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(-.28,-.58,.02,100);

    glColor3ub(0,0,0);
    FilledCircle(-.12,-.58,.035,100);
    glColor3ub(255,255,255);
    FilledCircle(-.12,-.58,.02,100);


    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-.4,-.58);
    glVertex2f(-.4,-.55);
    glVertex2f(-.38,-.55);
    glVertex2f(-.38,-.58);
    glEnd();

    glPopMatrix();
}

void jeep(){

    glPushMatrix();
    glTranslatef(rightPosition,0.0, 0.0f);
    //body
    glBegin(GL_POLYGON);
    glColor3ub(153,255,51);
    glVertex2f(-.85,-.35);
    glVertex2f(-.6,-.35);
    glVertex2f(-.6,-.28);
    glVertex2f(-.65,-.28);
    glVertex2f(-.68,-.23);
    glVertex2f(-.85,-.23);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(-.66,-.28);
    glVertex2f(-.69,-.24);
    glVertex2f(-.75,-.24);
    glVertex2f(-.75,-.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(-.76,-.28);
    glVertex2f(-.76,-.24);
    glVertex2f(-.83,-.24);
    glVertex2f(-.83,-.28);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(-.78,-.34,.03,100);
    glColor3ub(255,255,255);
    FilledCircle(-.78,-.34,.015,100);

    glColor3ub(0,0,0);
    FilledCircle(-.67,-.34,.03,100);
    glColor3ub(255,255,255);
    FilledCircle(-.67,-.34,.015,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255 ,220);
    glVertex2f(-.6,-.33);
    glVertex2f(-.6,-.3);
    glVertex2f(-.62,-.3);
    glVertex2f(-.62,-.33);
    glEnd();

    glPopMatrix();


}

void bus(){

    glPushMatrix();
    glTranslatef(rightPosition,0.0, 0.0f);
    //body
    glBegin(GL_QUADS);
    glColor3ub(255, 180, 81);
    glVertex2f(0.0,-.37);
    glVertex2f(.4,-.37);
    glVertex2f(.4,-.18);
    glVertex2f(0.0,-.18);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.35,-.2);
    glVertex2f(.35,-.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(.32,-.28);
    glVertex2f(.32,-.2);
    glVertex2f(.27,-.2);
    glVertex2f(.27,-.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(.25,-.28);
    glVertex2f(.25,-.2);
    glVertex2f(.20,-.2);
    glVertex2f(.20,-.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(.18,-.28);
    glVertex2f(.18,-.2);
    glVertex2f(.13,-.2);
    glVertex2f(.13,-.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(.11,-.28);
    glVertex2f(.11,-.2);
    glVertex2f(.06,-.2);
    glVertex2f(.06,-.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(.02,-.25);
    glVertex2f(.02,-.2);
    glVertex2f(.0,-.2);
    glVertex2f(.0,-.25);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(.1,-.35,.04,100);
    glColor3ub(255,255,255);
    FilledCircle(.1,-.35,.015,100);

    glColor3ub(0,0,0);
    FilledCircle(.3,-.35,.04,100);
    glColor3ub(255,255,255);
    FilledCircle(.3,-.35,.015,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255 ,220);
    glVertex2f(.4,-.35);
    glVertex2f(.4,-.32);
    glVertex2f(.38,-.32);
    glVertex2f(.38,-.35);
    glEnd();

    glPopMatrix();

}

void night_bus(){

    glPushMatrix();
    glTranslatef(rightPosition,0.0, 0.0f);
        //body
    glBegin(GL_QUADS);
    glColor3ub(255, 180, 81);
    glVertex2f(0.0,-.37);
    glVertex2f(.4,-.37);
    glVertex2f(.4,-.18);
    glVertex2f(0.0,-.18);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.35,-.2);
    glVertex2f(.35,-.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.32,-.28);
    glVertex2f(.32,-.2);
    glVertex2f(.27,-.2);
    glVertex2f(.27,-.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.25,-.28);
    glVertex2f(.25,-.2);
    glVertex2f(.20,-.2);
    glVertex2f(.20,-.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.18,-.28);
    glVertex2f(.18,-.2);
    glVertex2f(.13,-.2);
    glVertex2f(.13,-.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.11,-.28);
    glVertex2f(.11,-.2);
    glVertex2f(.06,-.2);
    glVertex2f(.06,-.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(.02,-.25);
    glVertex2f(.02,-.2);
    glVertex2f(.0,-.2);
    glVertex2f(.0,-.25);
    glEnd();

    //tires
    glColor3ub(0,0,0);
    FilledCircle(.1,-.35,.04,100);
    glColor3ub(255,255,255);
    FilledCircle(.1,-.35,.015,100);

    glColor3ub(0,0,0);
    FilledCircle(.3,-.35,.04,100);
    glColor3ub(255,255,255);
    FilledCircle(.3,-.35,.015,100);

    //head_light
    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.4,-.35);
    glVertex2f(.4,-.32);
    glVertex2f(.38,-.32);
    glVertex2f(.38,-.35);
    glEnd();

    glPopMatrix();
}

void plane(){

    glPushMatrix();
    glTranslatef(planePosition,0.0, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255,246,178);
    glVertex2f(.0,.82);
    glVertex2f(.28,.82);
    glVertex2f(.28,.92);
    glVertex2f(.25,.88);
    glVertex2f(.08,.88);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 88, 88);
    glVertex2f(.2,.75);
    glVertex2f(.25,.78);
    glVertex2f(.15,.84);
    glVertex2f(.1,.84);
    glEnd();

    //windows
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(.08,.85);
    glVertex2f(.1,.85);
    glVertex2f(.1,.87);
    glVertex2f(.08,.87);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(.12,.85);
    glVertex2f(.14,.85);
    glVertex2f(.14,.87);
    glVertex2f(.12,.87);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(.16,.85);
    glVertex2f(.18,.85);
    glVertex2f(.18,.87);
    glVertex2f(.16,.87);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(.2,.85);
    glVertex2f(.22,.85);
    glVertex2f(.22,.87);
    glVertex2f(.2,.87);
    glEnd();

    glPopMatrix();


}

void nagordola_off(){


    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2f(-.49,.1);
    glVertex2f(-.47,.1);
    glVertex2f(-.39,.4);
    glVertex2f(-.41,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2f(-.33,.1);
    glVertex2f(-.31,.1);
    glVertex2f(-.39,.4);
    glVertex2f(-.41,.4);
    glEnd();

    glColor3ub(0, 0, 0);
    LineCircle(-.4,.4,.15,100);

    glColor3ub(0, 0, 255);
    LineCircle(-.4,.4,.13,100);



    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.4f,.4f);
    glVertex2f(-.53f,.4f);
    glVertex2f(-.4f,.4f);
    glVertex2f(-.27f,.4f);
    glVertex2f(-.4f,.4f);
    glVertex2f(-.4f,.27f);
    glVertex2f(-.4f,.4f);
    glVertex2f(-.4f,.53f);
    glVertex2f(-.4f,.4f);
    glVertex2f(-.49f,.31f);
    glVertex2f(-.4f,.4f);
    glVertex2f(-.49f,.5f);
    glVertex2f(-.4f,.4f);
    glVertex2f(-.3f,.31f);
    glVertex2f(-.4f,.4f);
    glVertex2f(-.3f,.48f);
    glEnd();

    glColor3ub(255,0,0);
    FilledCircle(-.4,.4,.02,100);


}

void nagordola_on(){

    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2f(-.49,.1);
    glVertex2f(-.47,.1);
    glVertex2f(-.39,.4);
    glVertex2f(-.41,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2f(-.33,.1);
    glVertex2f(-.31,.1);
    glVertex2f(-.39,.4);
    glVertex2f(-.41,.4);
    glEnd();

    glPushMatrix();
    glTranslatef(-.4,.4,0);
    glRotatef(rSpeed,0,0,1);
    glRotatef(120,0,0,1);

    glColor3ub(0, 0, 0);
    LineCircle(-.0,.0,.15,100);

    glColor3ub(0, 0, 255);
    LineCircle(0,0,.13,100);


    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.4f+.4,.4f-.4);
    glVertex2f(-.53f+.4,.4f-.4);
    glVertex2f(-.4f+.4,.4f-.4);
    glVertex2f(-.27f+.4,.4f-.4);
    glVertex2f(-.4f+.4,.4f-.4);
    glVertex2f(-.4f+.4,.27f-.4);
    glVertex2f(-.4f+.4,.4f-.4);
    glVertex2f(-.4f+.4,.53f-.4);
    glVertex2f(-.4f+.4,.4f-.4);
    glVertex2f(-.49f+.4,.31f-.4);
    glVertex2f(-.4f+.4,.4f-.4);
    glVertex2f(-.49f+.4,.5f-.4);
    glVertex2f(-.4f+.4,.4f-.4);
    glVertex2f(-.3f+.4,.31f-.4);
    glVertex2f(-.4f+.4,.4f-.4);
    glVertex2f(-.3f+.4,.48f-.4);
    glEnd();

    glColor3ub(255,0,0);
    FilledCircle(-.0,.0,.02,100);

        rSpeed+=.4;
    glPopMatrix();
}

void lake(){
    //water
    glBegin(GL_QUADS);
    glColor3ub(111, 200, 228);
    glVertex2f(-1.0,-.18);
    glVertex2f(1.0,-.18);
    glVertex2f(1.0,.01);
    glVertex2f(-1.0,.01);
    glEnd();

//roadside
    glColor3ub(180,180,180);
    HalfCircle(-.9,-.18,-.1);
    HalfCircle(-.7,-.18,-.1);
    HalfCircle(-.5,-.18,-.1);
    HalfCircle(-.3,-.18,-.1);
    HalfCircle(-.1,-.18,-.1);
    HalfCircle(.1,-.18,-.1);
    HalfCircle(.3,-.18,-.1);
    HalfCircle(.5,-.18,-.1);
    HalfCircle(.7,-.18,-.1);
    HalfCircle(.9,-.18,-.1);

    glColor3ub(150,150,150);
    HalfCircle(-.9,-.18,-.07);
    HalfCircle(-.7,-.18,-.07);
    HalfCircle(-.5,-.18,-.07);
    HalfCircle(-.3,-.18,-.07);
    HalfCircle(-.1,-.18,-.07);
    HalfCircle(.1,-.18,-.07);
    HalfCircle(.3,-.18,-.07);
    HalfCircle(.5,-.18,-.07);
    HalfCircle(.7,-.18,-.07);
    HalfCircle(.9,-.18,-.07);

    //building_side
    HalfCircle(-.95,.01,-.06);
    HalfCircle(-.83,.01,-.06);
    HalfCircle(-.71,.01,-.06);
    HalfCircle(-.59,.01,-.06);
    HalfCircle(-.47,.01,-.06);
    HalfCircle(-.35,.01,-.06);
    HalfCircle(-.23,.01,-.06);
    HalfCircle(-.11,.01,-.06);
    HalfCircle(.01,.01,-.06);
    HalfCircle(.13,.01,-.06);
    HalfCircle(.25,.01,-.06);
    HalfCircle(.37,.01,-.06);
    HalfCircle(.49,.01,-.06);
    HalfCircle(.61,.01,-.06);
    HalfCircle(.73,.01,-.06);
    HalfCircle(.85,.01,-.06);
    HalfCircle(.97,.01,-.06);

}

void night_lake(){
    //water
    glBegin(GL_QUADS);
    glColor3ub(50, 140, 180);
    glVertex2f(-1.0,-.18);
    glVertex2f(1.0,-.18);
    glVertex2f(1.0,.01);
    glVertex2f(-1.0,.01);
    glEnd();

//roadside
    glColor3ub(180,180,180);
    HalfCircle(-.9,-.18,-.1);
    HalfCircle(-.7,-.18,-.1);
    HalfCircle(-.5,-.18,-.1);
    HalfCircle(-.3,-.18,-.1);
    HalfCircle(-.1,-.18,-.1);
    HalfCircle(.1,-.18,-.1);
    HalfCircle(.3,-.18,-.1);
    HalfCircle(.5,-.18,-.1);
    HalfCircle(.7,-.18,-.1);
    HalfCircle(.9,-.18,-.1);

    glColor3ub(150,150,150);
    HalfCircle(-.9,-.18,-.07);
    HalfCircle(-.7,-.18,-.07);
    HalfCircle(-.5,-.18,-.07);
    HalfCircle(-.3,-.18,-.07);
    HalfCircle(-.1,-.18,-.07);
    HalfCircle(.1,-.18,-.07);
    HalfCircle(.3,-.18,-.07);
    HalfCircle(.5,-.18,-.07);
    HalfCircle(.7,-.18,-.07);
    HalfCircle(.9,-.18,-.07);

    //building_side
    HalfCircle(-.95,.01,-.06);
    HalfCircle(-.83,.01,-.06);
    HalfCircle(-.71,.01,-.06);
    HalfCircle(-.59,.01,-.06);
    HalfCircle(-.47,.01,-.06);
    HalfCircle(-.35,.01,-.06);
    HalfCircle(-.23,.01,-.06);
    HalfCircle(-.11,.01,-.06);
    HalfCircle(.01,.01,-.06);
    HalfCircle(.13,.01,-.06);
    HalfCircle(.25,.01,-.06);
    HalfCircle(.37,.01,-.06);
    HalfCircle(.49,.01,-.06);
    HalfCircle(.61,.01,-.06);
    HalfCircle(.73,.01,-.06);
    HalfCircle(.85,.01,-.06);
    HalfCircle(.97,.01,-.06);
}

void boat(){

    glPushMatrix();
    glTranslatef(boatPosition,0.0, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255,255,130);
    glVertex2f(.2,-.042);
    glVertex2f(.3,-.075);
    glVertex2f(.45,-.075);
    glVertex2f(.47,-.042);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,150,0);
    glVertex2f(.25,-.042);
    glVertex2f(.47,-.042);
    glVertex2f(.47,.0);
    glVertex2f(.3,.0);
    glEnd();

//windows
    glBegin(GL_QUADS);
    glColor3ub(0, 140, 220);
    glVertex2f(.3,-.037);
    glVertex2f(.34,-.037);
    glVertex2f(.34,-.008);
    glVertex2f(.3,-.008);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 140, 220);
    glVertex2f(.35,-.037);
    glVertex2f(.39,-.037);
    glVertex2f(.39,-.008);
    glVertex2f(.35,-.008);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 140, 220);
    glVertex2f(.4,-.037);
    glVertex2f(.44,-.037);
    glVertex2f(.44,-.008);
    glVertex2f(.4,-.008);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.21,-.04);
    glVertex2f(.21,-.01);
    glEnd();

    glColor3ub(150,0,0);
    FilledCircle(.21,-.01,.006,100);

    glPushMatrix();


}

void night_boat(){

    glPushMatrix();
    glTranslatef(boatPosition,0.0, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255,255,130);
    glVertex2f(.2,-.042);
    glVertex2f(.3,-.075);
    glVertex2f(.45,-.075);
    glVertex2f(.47,-.042);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,150,0);
    glVertex2f(.25,-.042);
    glVertex2f(.47,-.042);
    glVertex2f(.47,.0);
    glVertex2f(.3,.0);
    glEnd();

//windows
    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.3,-.037);
    glVertex2f(.34,-.037);
    glVertex2f(.34,-.008);
    glVertex2f(.3,-.008);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.35,-.037);
    glVertex2f(.39,-.037);
    glVertex2f(.39,-.008);
    glVertex2f(.35,-.008);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(.4,-.037);
    glVertex2f(.44,-.037);
    glVertex2f(.44,-.008);
    glVertex2f(.4,-.008);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.21,-.04);
    glVertex2f(.21,-.01);
    glEnd();

    glColor3ub(255,0,0);
    FilledCircle(.21,-.01,.006,100);

    glPushMatrix();

}

void dayDisp(int val){
    glutDisplayFunc(day);
}
void nightDisp(int val){
    glutDisplayFunc(night);
}
void morningDisp(int val){
    glutDisplayFunc(morning);
}
void winter_nightDisp(int val){
    glutDisplayFunc(winter_night);
}

void morning() {
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    mrngSky();
    sun();
    base_ground();
    tree();
    rail_line();
    //train();
    day_road();
    car();
    //microbus();
    //jeep();
    bus();
    day_buildings();
    nagordola_off();
    lake();
    //boat();
    //plane();
    //morning_sound();
    glutTimerFunc(10000,dayDisp,0);
	glFlush();

}

void day() {
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    daySky();
    day_cloud();
    plane();
    base_ground();
    tree();
    rail_line();
    train();
    day_road();
    car();
    microbus();
    jeep();
    bus();
    day_buildings();
    nagordola_on();
    lake();
    boat();


    glutTimerFunc(10000,nightDisp,0);
	glFlush();

}

void night() {
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    nitSky();
    moon();
    night_cloud();
    plane();
    base_ground();
    tree();
    rail_line();
    night_train();
    day_road();
    car();
    night_microbus();
    jeep();
    night_bus();
    night_buildings();
    nagordola_on();
    night_lake();
    night_boat();
    glutTimerFunc(10000,winter_nightDisp,0);
	glFlush();

}
void winter_night() {
    glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	init();
    nitSky();
    moon();
    base_ground();
    tree();
    rail_line();
    night_train();
    day_road();
    night_microbus();
    night_bus();
    night_buildings();
    nagordola_off();
    night_lake();
    snow();
    glutTimerFunc(10000,morningDisp,0);
	glFlush();
}

void idle(){
   glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Final Project");
	glutReshapeWindow(1000,700);
	glutDisplayFunc(morning);
    glutIdleFunc(idle);
    glutTimerFunc(30, update, 0);
    glutTimerFunc(30, update1, 0);
    glutTimerFunc(30, update2, 0);
    glutTimerFunc(30, update3, 0);
    glutTimerFunc(30, update4, 0);
    glutTimerFunc(30, update5, 0);
    sound();
	glutMainLoop();
	return 0;
}
