//#include <GL/gl.h>
//#include <GL/glu.h>
//#include <GL/glut.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <windows.h>
//#include <math.h>
//
//
//double Txval=0,Tyval=0,Tzval=0, arodure=60;
//double eyex = 1;
//double eyey = 1;
//double eyez = 10;
//double centerx = 2;
//double centery = 0;
//double centerz = 0;
//double upx = 0;
//double upy = 1;
//double upz = 0;
//double myval = 0;
//
//double windowHeight=1200, windowWidth=800;
//GLfloat alpha = 0.0, theta = 0.0, axis_x=0.0, axis_y=0.0;
//GLboolean bRotate = false, uRotate = false;
//GLboolean lt1 = true, lt2 = true;
//
//static GLfloat cube[8][3] =
//{
//    {0.0, 0.0, 0.0},    //0
//    {0.0, 0.0, 2.0},    //1
//    {2.0, 0.0, 2.0},    //2
//    {2.0, 0.0, 0.0},    //3
//    {0.0, 2.0, 0.0},    //4
//    {0.0, 2.0, 2.0},    //5
//    {2.0, 2.0, 2.0},    //6
//    {2.0, 2.0, 0.0}     //7
//};
//static GLubyte cubeIdx[6][4] =
//{
//    {0,3,2,1},
//    {5,4,7,6},
//    {5,1,2,6},
//    {0,3,7,4},
//    {5,4,0,1},
//    {2,3,7,6}
//};
//
//typedef struct Material {
//    GLfloat * no;
//    GLfloat * ambient;
//    GLfloat * diffuse;
//    GLfloat * specular;
//    GLfloat * shininess;
//} Material;
//
//void assignMaterial(Material mat) {
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat.ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat.diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat.specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat.shininess);
//}
//
//
//void sphere(GLdouble rad, GLint slices, GLint stacks){
//     GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.5, 0, 0.5, 1.0 };
//    GLfloat mat_diffuse[] = { 1.0, 0, 1.0, 1.0 };
//    GLfloat mat_specular[] = { 1, 1,1 , 1.0 };
//    GLfloat mat_shininess[] = {60};
//    GLfloat mat_emission[] = {1.0, 0, 0.5, 1.0};
////front phase niye kaaj hoche
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//
//glutSolidSphere(rad, slices, stacks);
//}
//
//void drawCube(Material mat)
//{
//
//    assignMaterial(mat);
//
//    glBegin(GL_QUADS);
//    for (GLint i = 0; i <6; i++)
//    {
//        glVertex3fv(&cube[cubeIdx[i][0]][0]);
//        glVertex3fv(&cube[cubeIdx[i][1]][0]);
//        glVertex3fv(&cube[cubeIdx[i][2]][0]);
//        glVertex3fv(&cube[cubeIdx[i][3]][0]);
//    }
//    glEnd();
//
//}
//
//void draw_quad()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.0, 0.1, 0.7, 1.0 };
//    GLfloat mat_diffuse[] = { 0.0, 0.3, 0.7, 1.0 };
//    GLfloat mat_specular[] = { 1, 1,1 , 1.0 };
//    GLfloat mat_shininess[] = {60};
//    GLfloat mat_emission[] = {1.0, 0, 0.5, 1.0};
////front phase niye kaaj hoche
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//    glBegin(GL_QUADS);
//        glVertex2f(1.0, 1.5);
//        glVertex2f(0.0, 1.5);
//        glVertex2f(0.0, -1.5);
//        glVertex2f(1.0, -1.5);
//    glEnd();
//
//}
//
//void drawCylinder()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.0, 0.1, 0.5, 1.0 };
//    GLfloat mat_diffuse[] = { 0.0, 0.3, 0.5, 1.0 };
//    GLfloat mat_specular[] = { 1, 1,1 , 1.0 };
//    GLfloat mat_shininess[] = {60};
//    GLfloat mat_emission[] = {1.0, 0, 0.5, 1.0};
////front phase niye kaaj hoche
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//    GLUquadricObj *quadratic;
//    quadratic = gluNewQuadric();
//    //glRotatef(0.0f, 0.0f, 1.0f, 0.0f);
//    gluCylinder(quadratic,0.2f,0.2f,5.0f,30,30);
//}
//
//GLfloat fAng = 0.0;
//GLboolean fRot = true;
//void drawBlades()
//{
//    glPushMatrix();
//    glColor3f(1.0, 0.0, 0.0);
//    glTranslatef(3.4, -3.0, 0.5);
//    glRotatef(90.0, 0.0, 1.0, 0);
//    draw_quad();
//    glPopMatrix();
//
//    glPushMatrix();
//    glColor3f(1.0, 0.0, 0.0);
//    glRotatef(90.0, 1.0, 0.0, 0.0);
//    glRotatef(90.0, 0.0, 1.0, 0.0);
//    glTranslatef(-3.5, 0.0, 3.4);
//    draw_quad();
//    glPopMatrix();
//}
//void drawFan()
//{
//
//    glPushMatrix();
//    glTranslatef(3.0, -3.5, -0.5);
//    sphere(0.5, 10, 10);
//    glPopMatrix();
//    glPushMatrix();
//    glTranslatef(-2.0, 0.0, 0.0);
//    glRotatef(fAng, 2.0, 0.0, 0.0);
//    glTranslatef(2.0, 0.0, 0.0);
//    drawBlades();
//    glPopMatrix();
//    glPushMatrix();
//    glColor3f(1.0, 0.0, 0.0);
//    glTranslatef(3.0, -3.5, -6.0);
//    drawCylinder();
//    glPopMatrix();
//
//}
//
//void drawRoof(Material mat){
//    assignMaterial(mat);
//
//
//     glBegin(GL_QUADS);
//     glVertex3f(0.0f, 2.0f, 2.0f);
//     glVertex3f(2.0f, 2.0f, 2.0f);
//     glVertex3f(2.5f, 2.5f, 2.5f);
//     glVertex3f(-0.5f, 2.5f, 2.5f);
//     glEnd();
//
//     glBegin(GL_QUADS);
//     glVertex3f(2.0f, 0.0f, 2.0f);
//     glVertex3f(2.5f, -0.5f, 2.5f);
//     glVertex3f(2.5f, 2.5f, 2.5f);
//     glVertex3f(2.0f, 2.0f, 2.0f);
//     glEnd();
//
//     glBegin(GL_QUADS);
//     glVertex3f(0.0f, 0.0f, 2.0f);
//     glVertex3f(-0.5f, -0.5f, 2.5f);
//     glVertex3f(2.5f, -0.5f, 2.5f);
//     glVertex3f(2.0f, 0.0f, 2.0f);
//     glEnd();
//
//     glBegin(GL_QUADS);
//     glVertex3f(-0.5f, 2.5f, 2.5f);
//     glVertex3f(-0.5f, -0.5f, 2.5f);
//     glVertex3f(0.0f, 0.0f, 2.0f);
//     glVertex3f(0.0f, 2.0f, 2.0f);
//     glEnd();
//
//     glBegin(GL_TRIANGLES);
//     glVertex3f(1.0f, 1.0f, 3.5f);
//     glVertex3f(-0.5f, -0.5f, 2.5f);
//     glVertex3f(2.5f, -0.5f, 2.5f);
//     glEnd();
//
//     glBegin(GL_TRIANGLES);
//     glVertex3f(1.0f, 1.0f, 3.5f);
//     glVertex3f(2.5f, -0.5f, 2.5f);
//     glVertex3f(2.5f, 2.5f, 2.5f);
//     glEnd();
//
//     glBegin(GL_TRIANGLES);
//     glVertex3f(1.0f, 1.0f, 3.5f);
//     glVertex3f(-0.5f, 2.5f, 2.5f);
//     glVertex3f(-0.5f, -0.5f, 2.5f);
//     glEnd();
//
//     glBegin(GL_TRIANGLES);
//     glVertex3f(1.0f, 1.0f, 3.5f);
//     glVertex3f(-0.5f, 2.5f, 2.5f);
//     glVertex3f(2.5f, 2.5f, 2.5f);
//     glEnd();
//}
//void drawFenceBlock(Material mat){
//
//    GLfloat transMat[15][3] =
//    {
//        {0, 2, 0},
//        {0, 2, 0},
//        {0, -6, 0},
//        {0, -2, 0},
//        {2, 2, 0},
//        {0, 4, 0},
//        {2, 2, 0},
//        {0, -2, 0},
//        {0, -2, 0},
//        {0, -2, 0},
//        {0, -2, 0},
//        {2, 2, 0},
//        {0, 4, 0},
//        {-8, 0, 0},
//        {0, -4, 0}
//    };
//
//    drawCube(mat);
//
//    for(int i = 0; i < 15; i++)
//    {
//        GLfloat x = transMat[i][0];
//        GLfloat y= transMat[i][1];
//        GLfloat z = transMat[i][2];
//        glTranslatef(x, y, z);
//        drawCube(mat);
//    }
//
//}
//void drawFence(Material mat){
//    drawFenceBlock(mat);
//
//    for(int i = 0; i < 6; i++)
//    {
//        glTranslatef(10,2,0);
//        drawFenceBlock(mat);
//    }
//}
//void drawFenceComp(Material mat){
//
//
//     glScalef(0.2,0.2,0.2);
//     glTranslatef(-20,2,0);
//     drawFence(mat);
//
//     for(int i = 0; i < 3; i++)
//     {
//         glTranslatef(6,2,2);
//         glRotatef(90,0,1,0);
//         drawFence(mat);
//     }
//}
//
//void light0() {
//    GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat light_ambient[]  = {0.3, 0.3, 0.3, 1.0};
//    GLfloat light_diffuse[]  = { 1.0, 1.0, 1.0, 1.0 };
//    //GLfloat light_diffuse[]  = { 1.0, 1.0, 1.0, 1.0 };
//
//    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat light_position[] = { 0.0, 50.0, 0.0, 1.0 };
//
//    glEnable( GL_LIGHT0);
//    //fv=floot vector
//    //GL_LIGHT0=0th light
//    glLightfv( GL_LIGHT0, GL_AMBIENT, light_ambient);
//    glLightfv( GL_LIGHT0, GL_DIFFUSE, light_diffuse);
//    glLightfv( GL_LIGHT0, GL_SPECULAR, light_specular);
//    glLightfv( GL_LIGHT0, GL_POSITION, light_position);
//}
//
//void light1() {
//    GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat light_ambient[]  = {0.3, 0.3, 0.3, 1.0};
//    GLfloat light_diffuse[]  = { 1.0, 1.0, 1.0, 1.0 };
//    //GLfloat light_diffuse[]  = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat light_spot[] = {-1.0,-1.0,0};
//
//    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat light_position[] = { 50.0, 0.0, 0.0, 1.0 };
//
//    glEnable( GL_LIGHT1);
//    //fv=floot vector
//    //GL_LIGHT0=0th light
//    glLightf( GL_LIGHT2, GL_SPOT_CUTOFF, 60.0);
//    glLightf( GL_LIGHT2, GL_SPOT_EXPONENT, 2.0);
//    glLightfv( GL_LIGHT2, GL_SPOT_DIRECTION, light_spot);
//    glLightfv( GL_LIGHT1, GL_AMBIENT, light_ambient);
//    glLightfv( GL_LIGHT1, GL_DIFFUSE, light_diffuse);
//    glLightfv( GL_LIGHT1, GL_SPECULAR, light_specular);
//    glLightfv( GL_LIGHT1, GL_POSITION, light_position);
//}
//
//void lightCtrl()
//{
//    if(lt1 == false) glDisable(GL_LIGHT0);
//    else glEnable(GL_LIGHT0);
//
//    if(lt2 == false) glDisable(GL_LIGHT1);
//    else glEnable(GL_LIGHT1);
//}
//
//
//
//void setMaterial(Material *mat, GLfloat *no, GLfloat *amb, GLfloat *diff, GLfloat *spec,GLfloat *shin)
//{
//    mat->no = no;
//    mat->ambient = amb;
//    mat->diffuse = diff;
//    mat->specular = spec;
//    mat->shininess = shin;
//    printf("shininess : %f", mat->shininess[0]);
//}
//void display(void)
//{
//    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//
//    glMatrixMode( GL_PROJECTION );
//    glLoadIdentity();
//    glFrustum(-5, 5, -5, 5, 4, 1000.0);
//     //gluPerspective(60,1,5,100);
//    glMatrixMode( GL_MODELVIEW );
//    glLoadIdentity();
//    gluLookAt(eyex,eyey,eyez, centerx,centery,centerz, upx,upy,upz); // camera , ,
//
//    glViewport(0, 0, windowHeight, windowWidth);
//
//    //glRotatef(30, 0, 0, 1 );
//    //glScalef(1.5,1.5,1.5);
//
//     glRotatef( alpha,axis_x, axis_y, 0.0 );
//     glRotatef( theta, axis_x, axis_y, 0.0 );
//
//      lightCtrl();
//      Material roof_mat, cube_mat, fence_mat;
//
//      // declare roof material
//      GLfloat roof_no[4] = { 0.0, 0.0, 0.0, 1.0 };
//      GLfloat roof_ambient[4] = { 1.0, 0, 0.0, 1.0 };
//      GLfloat roof_diffuse[4] = { 1.0, 0, 0.0, 1.0 };
//      GLfloat roof_specular[4] = { 1, 1,1 , 1.0 };
//      GLfloat roof_shininess[1] = {60};
//      setMaterial(&roof_mat, roof_no, roof_ambient, roof_diffuse, roof_specular, roof_shininess);
//      // declare cube material
//
//      GLfloat cube_no[4] = { 0.0, 0.0, 0.0, 1.0 };
//      GLfloat cube_ambient[4] = { 0.0, 0, 0.5, 1.0 };
//      GLfloat cube_diffuse[4] = { 0.0, 0.0, 1.0, 1.0 };
//      GLfloat cube_specular[4] = { 1, 1,1 , 1.0 };
//      GLfloat cube_shininess[1] = {50};
//      setMaterial(&cube_mat, cube_no, cube_ambient, cube_diffuse, cube_specular, cube_shininess);
//
//      // declare fence material
//      GLfloat fence_no[4] = { 0.0, 0.0, 0.0, 1.0 };
//      GLfloat fence_ambient[4] = { 0.0, 1.0, 0.0, 1.0 };
//      GLfloat fence_diffuse[4] = { 0.0, 1.0, 0.0, 1.0 };
//      GLfloat fence_specular[4] = { 1, 1,1 , 1.0 };
//      GLfloat fence_shininess[1] = {60};
//      setMaterial(&fence_mat, fence_no, fence_ambient, fence_diffuse, fence_specular, fence_shininess);
//      glScalef(0.5,0.5,0.5);
//      drawFenceComp(fence_mat);
//
//      glTranslatef(-25,0,-13);
//      glScalef(7,7,7);
//      glRotatef(-90, 1, 0, 0 );
//      drawRoof(roof_mat);
//      drawCube(cube_mat);
//
//      // draw door
//      glBegin(GL_QUADS);
//      glColor3f(1, 1.0, 0);
//      glVertex3f(0.5, 0, 0);
//      glVertex3f(1, 0, 0);
//      glVertex3f(1, 0, 1);
//      glVertex3f(0.5, 0, 1);
//      glEnd();
//      glTranslatef(5, 0, 5);
//      sphere(1.0, 50, 50);
//      glPushMatrix();
//      //glTranslatef(0.0, -5.0, -5.3);
//      drawFan();
//      glPopMatrix();
//
//    glFlush();
//    glutSwapBuffers();
//}
//
//
///*
//r => rotate
//1 => light0 on off
//2 => light1 on off
//f, g => zoom in zoom out
//
//*/
//
//void myKeyboardFunc( unsigned char key, int x, int y )
//{
//    switch ( key )
//    {
//    case 'r':
//    case 'R':
//        bRotate = !bRotate;
//        uRotate = false;
//        axis_x=0.0;
//        axis_y=1.0;
//        break;
//    case 'm':
//        fRot = !fRot;
//    case '1':
//        lt1 = !lt1;
//        break;
//    case '2':
//        lt2 = !lt2;
//        break;
//    case 'a':
//        eyex-=2;
//        centerx-=2;
//        break;
//    case 'd':
//        eyex+=2;
//        centerx+=2;
//        break;
//    case 'w':
//        eyey+=2;
//        break;
//    case 's':
//        eyey-=2;
//        break;
//    case 'f':
//        eyez+=2;
//        glutPostRedisplay();
//        break;
//    case 'g':
//        eyez-=2;
//        glutPostRedisplay();
//        break;
//
//    case 27:	// Escape key
//        exit(1);
//    }
//}
//
//
//
//void animate()
//{
//    if (bRotate == true)
//    {
//        theta += 0.2;
//        if(theta > 360.0)
//            theta -= 360.0*floor(theta/360.0);
//    }
//
//    if (uRotate == true)
//    {
//        alpha += 0.2;
//        if(alpha > 360.0)
//            alpha -= 360.0*floor(alpha/360.0);
//    }
//    if (fRot == true)
//    {
//        fAng += 2.0;
//    }
//    glutPostRedisplay();
//
//}
//
//
//int main (int argc, char **argv)
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//
//    glutInitWindowPosition(0,0);
//    glutInitWindowSize(windowHeight, windowWidth);
//    glutCreateWindow("Assignment-1707074");
//    glShadeModel( GL_SMOOTH );
//    glEnable( GL_DEPTH_TEST );
//    glEnable(GL_NORMALIZE);
//    glEnable(GL_LIGHTING);
//    light0();
//    light1();
//    glutKeyboardFunc(myKeyboardFunc);
//    glutDisplayFunc(display);
//    glutIdleFunc(animate);
//    glutMainLoop();
//
//    return 0;
//}
//
