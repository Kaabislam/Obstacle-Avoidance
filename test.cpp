//#include<GL/gl.h>
//#include <GL/glu.h>
//#include <GL/glut.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <windows.h>
//#include<math.h>
//#include<bits/stdc++.h>
//#include "include/BmpLoader.h"
//
//using namespace std;
//
//double Txval=0,Tyval=0,Tzval=0, arodure=60;
//double radius = 200;
//double eyex = 0;
//double eyey = 6;
//double eyez = radius;
//double centerx = 0;
//double centery = 6;
//double centerz = 0;
//double upx = 0;
//double upy = 1;
//double upz = 0;
//double myval = 0;
//
//double windowHeight=960, windowWidth=540;
//GLfloat alpha = 0.0, theta = 0.0, axis_x=0.0, axis_y=0.0;
//GLboolean bRotate = false, uRotate = false;
//double far_id =1000.0;
//double near_id = 4.0;
//unsigned int ID[100], ID1;
// /// 1920x1080
//
//static void resize(int width, int height)
//{
//    const float ar = (float) height / (float) width;
//
//    glViewport(0, 0, width, height);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glFrustum(-ar, ar, -ar, ar, near_id, far_id);
//
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity() ;
//
////    glMatrixMode( GL_PROJECTION );
////    glLoadIdentity();
////    glFrustum(-5,5, -5, 5, near_id, far_id);
////
////    //gluPerspective(60,1,5,100);
////    glMatrixMode( GL_MODELVIEW );
////    glLoadIdentity();
//}
//
//static void getNormal3p
//(GLfloat x1, GLfloat y1,GLfloat z1, GLfloat x2, GLfloat y2,GLfloat z2, GLfloat x3, GLfloat y3,GLfloat z3)
//{
//    GLfloat Ux, Uy, Uz, Vx, Vy, Vz, Nx, Ny, Nz;
//
//    Ux = x2-x1;
//    Uy = y2-y1;
//    Uz = z2-z1;
//
//    Vx = x3-x1;
//    Vy = y3-y1;
//    Vz = z3-z1;
//
//    Nx = Uy*Vz - Uz*Vy;
//    Ny = Uz*Vx - Ux*Vz;
//    Nz = Ux*Vy - Uy*Vx;
//
//    glNormal3f(Nx,Ny,Nz);
//}
//
//GLfloat up_fence_coordinate[8][3] =
//{
//    {28.0,1.0,0.0},
//    {28.0,3.0,0.0},
//    {28.0,3.0,2.0},
//    {28.0,1.0,2.0},
//
//    {-28.0,1.0,0.0},
//    {-28.0,3.0,0.0},
//    {-28.0,3.0,2.0},
//    {-28.0,1.0,2.0}
//
//};
//static GLubyte up_fence_indices[6][4] =
//{
//    {0,3,2,1},
//    {3,7,6,2},
//    {7,4,5,6},
//    {4,0,1,5},
//    {5,1,2,6},
//    {1,3,0,4}
//
//};
//void draw_up_fence_cube()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.0, 1.0, 0.3, 1.0 };
//    GLfloat mat_diffuse[] = { 0.0, 1.0, 0.0, 1.0 };
//    GLfloat mat_specular[] = { 0.0, 1.0, 0.0, 1.0 };
//    GLfloat mat_shininess[] = {20};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//
//    glBegin(GL_QUADS);
//    for (GLint i = 0; i <6; i++)
//    {
//        //glColor3f(0.1f, 0.1f, 0.1f);
//        //glColor3f(0.2f, 0.2f, 0.2f);
//        glVertex3fv(&up_fence_coordinate[up_fence_indices[i][0]][0]);
//        glVertex3fv(&up_fence_coordinate[up_fence_indices[i][1]][0]);
//        glVertex3fv(&up_fence_coordinate[up_fence_indices[i][2]][0]);
//        glVertex3fv(&up_fence_coordinate[up_fence_indices[i][3]][0]);
//    }
//    glEnd();
//
//
//}
//
//GLfloat mini_fence_coordinate[8][3] =
//{
//    {3.0,-5.0,0.0},
//    {3.0,5.0,0.0},
//    {1.0,5.0,0.0},
//    {1.0,-5.0,0.0},
//
//    {3.0,-5.0,2.0},
//    {3.0,5.0,2.0},
//    {1.0,5.0,2.0},
//    {1.0,-5.0,2.0},
//
//};
//static GLubyte mini_fence_indices[6][4] =
//{
//    {0,3,2,1},
//    {3,7,6,2},
//    {7,4,5,6},
//    {4,0,1,5},
//    {5,1,2,6},
//    {1,3,0,4}
//
//};
//
//
//void draw_mini_fence_cube()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.0, 1.0, 0.3, 1.0 };
//    GLfloat mat_diffuse[] = { 0.0, 1.0, 0.0, 1.0 };
//    GLfloat mat_specular[] = { 0.5, 1.0, 0.0, 1.0 };
//    GLfloat mat_shininess[] = {20};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//    glBegin(GL_QUADS);
//    for (GLint i = 0; i <6; i++)
//    {
//        // glColor3f(0.2f, 0.2f, 0.2f);
//        glVertex3fv(&mini_fence_coordinate[mini_fence_indices[i][0]][0]);
//        glVertex3fv(&mini_fence_coordinate[mini_fence_indices[i][1]][0]);
//        glVertex3fv(&mini_fence_coordinate[mini_fence_indices[i][2]][0]);
//        glVertex3fv(&mini_fence_coordinate[mini_fence_indices[i][3]][0]);
//    }
//    glEnd();
//}
//
//GLfloat house_coordinate[8][3] =
//{
//    {-18.0,-5.0,-5.0},
//    {-18.0,25.0,-5.0},
//    {18.0,25.0,-5.0},
//    {18.0,-5.0,-5.0},
//
//    {-18.0,-5.0,-43.0},
//    {-18.0,25.0,-43.0},
//    {18.0,25.0,-43.0},
//    {18.0,-5.0,-43.0},
//
//};
//static GLubyte house_indices[6][4] =
//{
//    {0,3,2,1},
//    {3,7,6,2},
//    {7,4,5,6},
//    {4,0,1,5},
//    {5,1,2,6},
//    {1,3,0,4}
//
//};
//
//void draw_house_cube()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.3, 0.3, 0.3, 1.0 };
//    GLfloat mat_diffuse[] = { 0.0, 0.0, 1.0, 1.0 };
//    GLfloat mat_specular[] = { 0.0, 0.0, 1.0, 1.0 };
//    GLfloat mat_shininess[] = {20};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//    glBegin(GL_QUADS);
//    for (GLint i = 0; i <6; i++)
//    {
//        //glColor3f(0.5, 0, 1);
//        glVertex3fv(&house_coordinate[house_indices[i][0]][0]);
//        glVertex3fv(&house_coordinate[house_indices[i][1]][0]);
//        glVertex3fv(&house_coordinate[house_indices[i][2]][0]);
//        glVertex3fv(&house_coordinate[house_indices[i][3]][0]);
//    }
//    glEnd();
//}
//
//GLfloat house_down_roof_coordinate[8][3] =
//{
//    //{-20.0,-5.0,-2.0},
//
//    {-18.0,25.0,-5.0},
//    {-25,30,3},
//    {25,30,3},
//    {18.0,25.0,-5.0},
//    //{20.0,-5.0,-2.0},
//
//    {-18.0,25.0,-43.0},
//    {-25,30.0,-49.0},
//    {25,30,-49.0},
//    {18.0,25.0,-43.0},
//
//};
//static GLubyte house_down_roof_indices[6][4] =
//{
//    {0,3,2,1},
//    {3,7,6,2},
//    {7,4,5,6},
//    {4,0,1,5},
//    {5,1,2,6},
//    {1,3,0,4}
//
//};
//
//
//void draw_house_down_roof_cube()
//{
//    //.239, .047, 0.008
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.0, 0.2, 0.2, 1.0 };
//    GLfloat mat_diffuse[] = { .239, .047, 0.008, 1.0 };
//    GLfloat mat_specular[] = { 0.5, 0.5, 0.5, 1.0 };
//    GLfloat mat_shininess[] = {10};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//    glBegin(GL_QUADS);
//    for (GLint i = 0; i <6; i++)
//    {
//        // glColor4f(1.0f, 0.5f, 0.0f, 0.0f);//orange/brown
//        // glColor3f(.239, .047, 0.008);//Bronze
//        glVertex3fv(&house_down_roof_coordinate[house_down_roof_indices[i][0]][0]);
//        glVertex3fv(&house_down_roof_coordinate[house_down_roof_indices[i][1]][0]);
//        glVertex3fv(&house_down_roof_coordinate[house_down_roof_indices[i][2]][0]);
//        glVertex3fv(&house_down_roof_coordinate[house_down_roof_indices[i][3]][0]);
//    }
//    glEnd();
//}
//
//
//
//GLfloat house_top_roof_pyramid[5][3] =
//{
//
//    {-25,30,3},
//    {25,30,3},
//    //{20.0,-5.0,-2.0},
//    {-25,30.0,-49.0},
//    {25,30,-49.0},
//    {0,48,-26.0}
//
//};
//
//static GLubyte house_top_roof_pyramid_Indices[4][3] =
//{
//    {4, 3, 2},
//    {4, 2, 0},
//    {4, 3, 1},
//    {4, 0, 1}
//};
//
//
//void draw_house_roof_top_pyramid()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.0, 0, 0, 1.0 };
//    GLfloat mat_diffuse[] = { .239, .047, 0.008, 1.0 };
//    GLfloat mat_specular[] = { 1, 1, 1, 1.0 };
//    GLfloat mat_shininess[] = {30};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//    //glColor3f(1,0,0);
//    glBegin(GL_TRIANGLES);
//    for (GLint i = 0; i <4; i++)
//    {
//        // glColor3f(.239, .047, 0.008);//Bronze
//        glVertex3fv(&house_top_roof_pyramid[house_top_roof_pyramid_Indices[i][0]][0]);
//        glVertex3fv(&house_top_roof_pyramid[house_top_roof_pyramid_Indices[i][1]][0]);
//        glVertex3fv(&house_top_roof_pyramid[house_top_roof_pyramid_Indices[i][2]][0]);
//    }
//    glEnd();
//
//
//}
//
//GLfloat door_coordinate[4][3] =
//{
//    {-9.0, -5, -4.989},
//    {-9.0, 7, -4.989},
//    {-1.0, 7, -4.9899},
//    {-1.0, -5, -4.9899}
//};
//
//
//
//void draw_door()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.0, 1.0, 0.0, 1.0 };
//    GLfloat mat_diffuse[] = { 0.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_specular[] = { 0.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_shininess[] = {20};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//
//    glBegin(GL_QUADS);
//
//    //glColor3f(0,1,0);
//    glVertex3fv(&door_coordinate[0][0]);
//    glVertex3fv(&door_coordinate[1][0]);
//    glVertex3fv(&door_coordinate[2][0]);
//    glVertex3fv(&door_coordinate[3][0]);
//
//    glEnd();
//}
//
//GLfloat window_coordinate[4][3] =
//{
//    {4.0, 9, -4.989},
//    {4.0, 13, -4.989},
//    {8.0, 13, -4.9899},
//    {8.0, 9, -4.9899}
//};
//
//
//
//void draw_window()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.0, 1.0, 0.0, 1.0 };
//    GLfloat mat_diffuse[] = { 0.0, 1.0, 0.0, 1.0 };
//    GLfloat mat_specular[] = { 0.0, 1.0, 0.0, 1.0 };
//    GLfloat mat_shininess[] = {20};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//
//    glBegin(GL_QUADS);
//
//    //glColor3f(0,1,0);
//    glVertex3fv(&window_coordinate[0][0]);
//    glVertex3fv(&window_coordinate[1][0]);
//    glVertex3fv(&window_coordinate[2][0]);
//    glVertex3fv(&window_coordinate[3][0]);
//
//    glEnd();
//}
//
//
//GLfloat cube_coordinate[8][3] =
//{
//     {0.0,0.0,0.0},
//    {0.0,2.0,0.0},
//    {2.0,2.0,0.0},
//    {2.0,0.0,0.0},
//
//    {0.0,0.0,-2.0},
//    {0.0,2.0,-2.0},
//    {2.0,2.0,-2.0},
//    {2.0,0.0,-2.0}
//
//};
//static GLubyte cube_indices[6][4] =
//{
//    {0,3,2,1},
//    {3,7,6,2},
//    {7,4,5,6},
//    {4,0,1,5},
//
//    {1,2,6,5},
//    {7,4,0,3}
//
//
//};
//
//static GLubyte pyramid_indices[6][4] =
//{
//    {0,3,2,1},
//    {3,7,2,2},
//    {7,4,1,2},
//    {4,0,1,1},
//
//    //{1,2,6,5},
//    {7,4,0,3}
//
//
//};
//
//void draw_color_pyramid()
//{
//    GLfloat mat_ambient[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_shininess[] = {60};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//    glBegin(GL_QUADS);
//    for (GLint i = 0; i <5; i++)
//    {
//        //glColor3f(0.1f, 0.1f, 0.1f);
//        //glColor3f(0.2f, 0.2f, 0.2f);
//        getNormal3p(cube_coordinate[pyramid_indices[i][0]][0], cube_coordinate[pyramid_indices[i][0]][1], cube_coordinate[pyramid_indices[i][0]][2],
//                    cube_coordinate[pyramid_indices[i][1]][0], cube_coordinate[pyramid_indices[i][1]][1], cube_coordinate[pyramid_indices[i][1]][2],
//                    cube_coordinate[pyramid_indices[i][2]][0], cube_coordinate[pyramid_indices[i][2]][1], cube_coordinate[pyramid_indices[i][2]][2]);
//
//        glVertex3fv(&cube_coordinate[pyramid_indices[i][0]][0]);glTexCoord2f(1,0);
//        glVertex3fv(&cube_coordinate[pyramid_indices[i][1]][0]);glTexCoord2f(1,1);
//        glVertex3fv(&cube_coordinate[pyramid_indices[i][2]][0]);glTexCoord2f(0,0);
//        glVertex3fv(&cube_coordinate[pyramid_indices[i][3]][0]);glTexCoord2f(0,1);
//    }
//    glEnd();
//
//
//}
//void draw_cube()
//{
//     GLfloat mat_ambient[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_shininess[] = {60};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//    glBegin(GL_QUADS);
//    for (GLint i = 0; i <6; i++)
//    {
//        //glColor3f(0.1f, 0.1f, 0.1f);
//        //glColor3f(0.2f, 0.2f, 0.2f);
//        getNormal3p(cube_coordinate[cube_indices[i][0]][0], cube_coordinate[cube_indices[i][0]][1], cube_coordinate[cube_indices[i][0]][2],
//                    cube_coordinate[cube_indices[i][1]][0], cube_coordinate[cube_indices[i][1]][1], cube_coordinate[cube_indices[i][1]][2],
//                    cube_coordinate[cube_indices[i][2]][0], cube_coordinate[cube_indices[i][2]][1], cube_coordinate[cube_indices[i][2]][2]);
//
//
//        glVertex3fv(&cube_coordinate[cube_indices[i][0]][0]);glTexCoord2f(1,0);
//        glVertex3fv(&cube_coordinate[cube_indices[i][1]][0]);glTexCoord2f(1,1);
//        glVertex3fv(&cube_coordinate[cube_indices[i][2]][0]);glTexCoord2f(0,0);
//        glVertex3fv(&cube_coordinate[cube_indices[i][3]][0]);glTexCoord2f(0,1);
//    }
//    glEnd();
//
//
//}
//
//void draw_color_cube(GLfloat c1,GLfloat c2,GLfloat c3 )
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.3*c1, 0.3*c2, 0.3*c3, 1.0 };
//    GLfloat mat_diffuse[] = { c1, c2, c3, 1.0 };
//    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_shininess[] = {40};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//    glBegin(GL_QUADS);
//    for (GLint i = 0; i <6; i++)
//    {
//        //glColor3f(0.1f, 0.1f, 0.1f);
//        //glColor3f(0.2f, 0.2f, 0.2f);
//        glVertex3fv(&cube_coordinate[cube_indices[i][0]][0]);
//        glVertex3fv(&cube_coordinate[cube_indices[i][1]][0]);
//        glVertex3fv(&cube_coordinate[cube_indices[i][2]][0]);
//        glVertex3fv(&cube_coordinate[cube_indices[i][3]][0]);
//    }
//    glEnd();
//
//
//}
//
//
//void draw_wheel (GLfloat c1,GLfloat c2,GLfloat c3, GLfloat radi )
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.3*c1, 0.3*c2, 0.3*c3, 1.0 };
//    GLfloat mat_diffuse[] = { c1, c2, c3, 1.0 };
//    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_shininess[] = {40};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//
//    double circle_radius = radi;
//
//    glBegin(GL_LINES);
////    glColor3f(1,0,0);
//    for(int i=0; i<1000; ++i)
//    {
//        glVertex2f(0,0);
//        glVertex2f(circle_radius*cos(2*3.14159*i/1000.0),circle_radius*sin(2*3.14159*i/1000.0));
//    }
//    glEnd();
//
//    glBegin(GL_LINES);
////    glColor3f(1,0,0);
//    for(int i=0; i<1000; ++i)
//    {
//        //glVertex2f(0,0);
//        glVertex3f(circle_radius*cos(2*3.14159*i/1000.0),circle_radius*sin(2*3.14159*i/1000.0), 0);
//        glVertex3f(circle_radius*cos(2*3.14159*i/1000.0),circle_radius*sin(2*3.14159*i/1000.0), 3);
//    }
//    glEnd();
//
//    glTranslatef(0,0,radi);
//
//    glBegin(GL_LINES);
////    glColor3f(1,0,0);
//    for(int i=0; i<1000; ++i)
//    {
//        glVertex2f(0,0);
//        glVertex2f(circle_radius*cos(2*3.14159*i/1000.0),circle_radius*sin(2*3.14159*i/1000.0));
//    }
//    glEnd();
//
//}
//
//
//void draw_car()
//{
//    glTranslatef(-50,0,0);
//
//    ///body
//    glPushMatrix();
//    glScalef(1.2,1.4,2);
//    glTranslatef(0,0,-40);
//
//
//    glPushMatrix();
//    glTranslatef(11.5,1,60);
//    //glRotatef(90,0,0,1);
//    glScalef(15.5, 1.7, 4);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, 3);
//    draw_cube();
//    glDisable(GL_TEXTURE_2D);
//    //draw_color_cube(1,0,0);
//    glPopMatrix();
//
//
//    glPushMatrix();
//    glTranslatef(16,4,60);
//    //glRotatef(90,0,0,1);
//    glScalef(6, 2, 4);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, 2);
//    draw_cube();
//    glDisable(GL_TEXTURE_2D);
//    glPopMatrix();
//
//
//    glPushMatrix();
//    glTranslatef(28,4,52.5);
//    glRotatef(-90,0,1,0);
//    //glRotatef(90,0,1,0);
//    glScalef(3.5, 2, 4);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, 5);
//    draw_color_pyramid();
//    glDisable(GL_TEXTURE_2D);
//    glPopMatrix();
//
//    glPushMatrix();
//    glTranslatef(28,4,52);
//    glRotatef(-90,0,1,0);
//    //glRotatef(90,0,1,0);
//    glScalef(4, 1.5, 7.3);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, 3);
//    draw_color_pyramid();
//    glPopMatrix();
//
//    glPushMatrix();
//    glTranslatef(16,4,60);
//    glRotatef(-270,0,1,0);
//    //glRotatef(90,0,1,0);
//    glScalef(4, 2, 2);
//    draw_color_pyramid();
//    glPopMatrix();
//    glPopMatrix();
//
//
//
//    ///wheel
//    glPushMatrix();
//    glTranslatef(20,0,38.5);
//    draw_wheel(0.2,0.2,0.2, 2.5);
//    glPopMatrix();
//
//    glPushMatrix();
//    glTranslatef(44,0,38.5);
//    draw_wheel(0.2,0.2,0.2, 2.5);
//    glPopMatrix();
//
//
//
//    glPushMatrix();
//    glTranslatef(0,0,-16.5);
//    glTranslatef(20,0,38.5);
//    draw_wheel(0.2,0.2,0.2, 2.5);
//    glPopMatrix();
//
//    glPushMatrix();
//    glTranslatef(0,0,-16.5);
//    glTranslatef(44,0,38.5);
//    draw_wheel(0.2,0.2,0.2, 2.5);
//    glPopMatrix();
//
//
//
//
//
//
//
//
//
//}
//
//void draw_fan_stand()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.3, 0.3, 0.3, 1.0 };
//    GLfloat mat_diffuse[] = { 0.0, 1.0, 0.0, 1.0 };
//    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_shininess[] = {40};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//
//
//    glTranslatef(-2,-5,0);
//    glScalef(2, 25, 2);
//    draw_cube();
//
//
//}
//
//void draw_triangle()
//{
//     glBegin(GL_TRIANGLES);
//    glVertex2f(0,0);
//    glVertex2f(5,-8);
//    glVertex2f(5,8);
//    glEnd();
//
//}
//
//
//void draw_fan()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.3, 0.3, 0.3, 1.0 };
//    GLfloat mat_diffuse[] = { 1.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_shininess[] = {40};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//
//
//
//    glPushMatrix();
//    glTranslatef(0,0,0);
//    glScalef(5, 0.8, 2);
//    draw_triangle();
//    glPopMatrix();
//
//    glPushMatrix();
//    //glTranslatef(0,0,0);
//    glRotatef(-90,0,0,1);
//    glScalef(5, 0.8, 2);
//    draw_triangle();
//    glPopMatrix();
////
//     glPushMatrix();
//    // glTranslatef(24,44,0);
//    glRotatef(180,0,0,1);
//    glScalef(5, 0.8, 2);
//    draw_triangle();
//    glPopMatrix();
////
////
//     glPushMatrix();
//
//     // glTranslatef(6,18,0);
//    glRotatef(90,0,0,1);
//    glScalef(5, 0.8, 2);
//    draw_triangle();
//    glPopMatrix();
//
//     glPushMatrix();
//
//    glTranslatef(-2,-2,0);
//    //glRotatef(90,0,0,1);
//    glScalef(2, 2, 1);
//    draw_cube();
//    glPopMatrix();
//
//
//}
//
//double ftheta = 0;
//bool frotate=0;
//
//void draw_windmill()
//{
//
//
//    //glutSolidSphere (10.0, 20, 26);
//
//
//    glPushMatrix();
//    draw_fan_stand();
//     glPopMatrix();
//
//    glPushMatrix();
////    glTranslatef();
//    glTranslatef(0,40,0);
//    glRotatef(ftheta, 0, 0, 1);
//    glTranslatef(0,-40,0);
//    glPushMatrix();
//    glTranslatef(0,40,2);
//    draw_fan();
//    glPopMatrix();
//    glPopMatrix();
//
//
//}
//
//
//
//
//void draw_every()
//{
//
//
//
//
//
//    glPushMatrix();
//
//    draw_house_cube();
//    draw_house_down_roof_cube();
//    draw_house_roof_top_pyramid();
//    draw_door();
//
//
//    draw_window();
//    glTranslatef(5.50,0,0);
//    draw_window();
//    glTranslatef(-5.5,0,0);
//
//    draw_window();
//    glTranslatef(0,5.5,0);
//    draw_window();
//    //  glTranslatef(0,-5.5,0);
//    draw_window();
//    glTranslatef(5.50,0,0);
//    draw_window();
//    glTranslatef(-5.5,0,0);
//    glTranslatef(0,-5.5,0);
//
//
//
//
//    //one side
//    draw_up_fence_cube();
//    glTranslatef(0.0,-3,0);
//    draw_up_fence_cube();
//    glTranslatef(0.0,3,0);
//    // draw_mini_fence_cube();
//    // make_multi_min();
//    for( GLint i=0; i<6; i++)
//    {
//
//        // glRotatef(60, 0, 0, 1 );
//        draw_mini_fence_cube();
//        glTranslatef(4.0,0,0);
//    }
//    glTranslatef(-24.0,0,0);
//    for( GLint i=0; i<6; i++)
//    {
//        glTranslatef(-4.0,0,0);
//        // glRotatef(60, 0, 0, 1 );
//        draw_mini_fence_cube();
//    }
//    glTranslatef(24.0,0,0);
//
//
//
//    // 2nd side
//    glRotatef(90, 0, 1, 0 );
//    glTranslatef(24,0,24);
//    draw_up_fence_cube();
//    glTranslatef(0.0,-3,0);
//    draw_up_fence_cube();
//    glTranslatef(0.0,3,0);
//    // draw_mini_fence_cube();
//    // make_multi_min();
//    for( GLint i=0; i<6; i++)
//    {
//
//        // glRotatef(60, 0, 0, 1 );
//        draw_mini_fence_cube();
//        glTranslatef(4.0,0,0);
//    }
//    glTranslatef(-24.0,0,0);
//    for( GLint i=0; i<6; i++)
//    {
//        glTranslatef(-4.0,0,0);
//        // glRotatef(60, 0, 0, 1 );
//        draw_mini_fence_cube();
//    }
//    glTranslatef(24.0,0,0);
//
//
//    glRotatef(90, 0, 1, 0 );
//    glTranslatef(24,0,24);
//    draw_up_fence_cube();
//    glTranslatef(0.0,-3,0);
//    draw_up_fence_cube();
//    glTranslatef(0.0,3,0);
//    // draw_mini_fence_cube();
//    // make_multi_min();
//    for( GLint i=0; i<6; i++)
//    {
//
//        // glRotatef(60, 0, 0, 1 );
//        draw_mini_fence_cube();
//        glTranslatef(4.0,0,0);
//    }
//    glTranslatef(-24.0,0,0);
//    for( GLint i=0; i<6; i++)
//    {
//        glTranslatef(-4.0,0,0);
//        // glRotatef(60, 0, 0, 1 );
//        draw_mini_fence_cube();
//    }
//    glTranslatef(24.0,0,0);
//
//    glRotatef(90, 0, 1, 0 );
//    glTranslatef(24,0,24);
//    draw_up_fence_cube();
//    glTranslatef(0.0,-3,0);
//    draw_up_fence_cube();
//    glTranslatef(0.0,3,0);
//    // draw_mini_fence_cube();
//    // make_multi_min();
//    for( GLint i=0; i<6; i++)
//    {
//
//        // glRotatef(60, 0, 0, 1 );
//        draw_mini_fence_cube();
//        glTranslatef(4.0,0,0);
//    }
//    glTranslatef(-24.0,0,0);
//    for( GLint i=0; i<6; i++)
//    {
//        glTranslatef(-4.0,0,0);
//        // glRotatef(60, 0, 0, 1 );
//        draw_mini_fence_cube();
//    }
//    glTranslatef(24.0,0,0);
//    glPopMatrix();
//
//
//    glPushMatrix();
//    draw_car();
//    glPopMatrix();
//
//
//
//    // glTranslatef(-50, 20, 0);
//
//
//
//
//}
//double limit = 360;
//double roll_value = 5;
//GLfloat angleYaw = 90.0, anglePitch = 90.0, angleRoll = 90.0;
//GLfloat angleYawLimit1 = 180.0, anglePitchLimit1 = 180.0, angleRollLimit1 = 270.0;
//GLfloat angleYawLimit2 = 0.0, anglePitchLimit2 = 0.0, angleRollLimit2 = -90.0;
//int f=0;
//double scale_x = 1;
//double scale_y = 1;
//double scale_z = 1;
//int bv = 0;
//
//
//
//void b_swap()
//{
//    if(bv==1)
//    {
//        int tmp = eyey;
//        eyey = eyez;
//        eyez = tmp;
//
//        tmp = upy;
//        upy = upz;
//        upz = tmp;
//
//    }
//}
//
//void init(int d)
//{
//    if(d!=f)
//    {
//        angleYaw = 90.0;
//        anglePitch = 270.0;
//        angleRoll = 90.0;
//        eyex = 0;
//        eyey = 35;
//        eyez = radius;
//        centerx = 0;
//        centery = 35;
//        centerz = 0;
//        upx = 0;
//        upy = 1;
//        upz = 0;
//        f=d;
//        scale_x=1.5;
//        scale_y=1.5;
//        scale_z=1.5;
//
//    }
//    b_swap();
//}
//
//void setCameraEye_Yaw() /// y axis , y u
//{
//    init(1);
//    f=1;
//    centerx = eyex+radius*(cos(angleYaw*3.1416/180.0));
//    centerz = eyez+radius*(sin(angleYaw*3.1416/180.0));
//
////    eyex = 200.0*(cos(angleYaw*3.1416/180.0));//-sin(anglePitch*3.1416/180.0));
////    eyez = 200.0*(sin(angleYaw*3.1416/180.0));//+cos(anglePitch*3.1416/180.0));
//}
//
//void setCameraEye_Roll() // z axis ,i o
//{
//    //init(2);
//    //f=2;
//    upx = (cos(angleRoll*3.1416/180.0));//-sin(angleYaw*3.1416/180.0));
//    upy = (sin(angleRoll*3.1416/180.0));//+cos(angleYaw*3.1416/180.0));
////    eyex = 200.0*sin(angleYaw*3.1416/180.0);
////    eyey = 200.0*(cos(angleYaw*3.1416/180.0));
////    upx = 1;
////    upy = 1;
////    upz = 1;
//
////    upx = eyex;
////    upy = eyey;
////    upz = 0;
//}
//
//void setCameraEye_Pitch() // x axis , r t
//{
//    init(3);
//    f=3;
//
//    centery = eyey+radius*(cos(anglePitch*3.1416/180.0));
//    centerz = eyez+radius*(sin(anglePitch*3.1416/180.0));
//}
//
////void setCameraEye_all()
////{
////    eyex = cos(angleYaw)*cos(anglePitch)*eyex+eyey*(cos(angleYaw)*sin(anglePitch)*sin(angleRoll)-sin(angleYaw)*cos(angleRoll))+eyez*(cos(angleYaw)*sin(anglePitch)*cos(angleRoll)+sin(angleYaw)*sin(angleRoll));
////    eyey = sin(angleYaw)*cos(anglePitch)*eyex+eyey*(sin(angleYaw)*sin(anglePitch)*sin(angleRoll)+cos(angleYaw)*cos(angleRoll))+eyez*(sin(angleYaw)*sin(anglePitch)*cos(angleRoll)-cos(angleYaw)*sin(angleRoll));
////    eyez = -sin(anglePitch)*eyex + eyey*cos(anglePitch)*sin(angleRoll)+eyez*cos(anglePitch)*cos(angleRoll);
////}
//
//void normal_view()
//{
////    init(5);
////    f=5;
//    bv = 0;
//    //b_swap();
//    //bv=0;
//    init(5);
//
//}
//
//
//void bird_view()
//{
////     init(6);
////     f=6;
//    bv = 1-bv;
//   // b_swap();
//
//}
//
//
//
//bool ini = 0;
//
//
//
//bool light_switch0 = 1, light_switch1 = 1, light_switch2 = 1;
//
//void light0()
//{
//    GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat light_ambient[]  = {0.5, 0.5, 0.5, 1.0};
//    GLfloat light_diffuse[]  = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//   // GLfloat light_position[] = { 10, 0.0, 50.0, 1.0 };
//    GLfloat light_position[] = { 15.8, 14.5, -10.8, 0.0 };
//
//
//    if(light_switch0)
//    glEnable( GL_LIGHT0);
//    else
//    glDisable(GL_LIGHT0);
//    glLightfv( GL_LIGHT0, GL_AMBIENT, light_ambient);
//    glLightfv( GL_LIGHT0, GL_DIFFUSE, light_diffuse);
//    glLightfv( GL_LIGHT0, GL_SPECULAR, light_specular);
//    glLightfv( GL_LIGHT0, GL_POSITION, light_position);
//
//    /*  GLfloat spot_direction[] = { 0.0, -1.0, 0.0 };
//      glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, spot_direction);
//      glLightf( GL_LIGHT0, GL_SPOT_CUTOFF, 10.0); */
//}
//
//void light1()
//{
//    GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat light_ambient[]  = {0.5, 0.5, 0.5, 1.0};
//    GLfloat light_diffuse[]  = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
////    GLfloat light_position[] = { 50.0, 0.0, 0.0, 1.0 };
//    GLfloat light_position[] = { 8, -4, -55.0, 1.0 };
//
//    if(light_switch1)
//    glEnable( GL_LIGHT1);
//    else
//    glDisable(GL_LIGHT1);
//    glLightfv( GL_LIGHT1, GL_AMBIENT, light_ambient);
//    glLightfv( GL_LIGHT1, GL_DIFFUSE, light_diffuse);
//    glLightfv( GL_LIGHT1, GL_SPECULAR, light_specular);
//    glLightfv( GL_LIGHT1, GL_POSITION, light_position);
//
//    /*  GLfloat spot_direction[] = { 0.0, -1.0, 0.0 };
//      glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, spot_direction);
//      glLightf( GL_LIGHT0, GL_SPOT_CUTOFF, 10.0); */
//}
//
//void light2()
//{
//    GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat light_ambient[]  = {1.0, 1.0, 1.0, 1.0};
//    GLfloat light_diffuse[]  = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat light_spot[] = {-1.0,-1.0,0};
//    GLfloat light_position[] = { -1.0,300.0,10.0, 1.0 };
////    GLfloat light_position[] = { 8, -4, -55.0, 1.0 };
//
//
//    if(light_switch2)
//    glEnable( GL_LIGHT2);
//    else
//    glDisable(GL_LIGHT2);
//    glLightf( GL_LIGHT2, GL_SPOT_CUTOFF, 45.0);
//     glLightf( GL_LIGHT2, GL_SPOT_EXPONENT, 2.0);
//    glLightfv( GL_LIGHT2, GL_SPOT_DIRECTION, light_spot);
//    glLightfv( GL_LIGHT2, GL_AMBIENT, light_ambient);
//    glLightfv( GL_LIGHT2, GL_DIFFUSE, light_diffuse);
//    glLightfv( GL_LIGHT2, GL_SPECULAR, light_specular);
//    glLightfv( GL_LIGHT2, GL_POSITION, light_position);
//
//
//
//
//    /*  GLfloat spot_direction[] = { 0.0, -1.0, 0.0 };
//      glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, spot_direction);
//      glLightf( GL_LIGHT0, GL_SPOT_CUTOFF, 10.0); */
//}
//
//
//bool tree = 1;
//
//void draw_floor()
//{
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0, 0, 0, 1.0 };
//    GLfloat mat_diffuse[] = { 0.0039, .1961, 0.12,1.0 };
//    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_shininess[] = {40};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//
//    glEnable(GL_TEXTURE_2D);
//    glTranslatef(-75,-5,50);
//    glScalef(80,1,80);
//    glBindTexture(GL_TEXTURE_2D, 1);
//    draw_cube();
//    glDisable(GL_TEXTURE_2D);
//
//}
//
//
//void draw_sp()
//{
//    glTranslatef(150,-30,-10);
//    glScalef(0.5,0.5,0.5);
//
//
//
//    glPushMatrix();
//
//     GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.0039, .1961, 0.12, 1.0 };
//    GLfloat mat_diffuse[] = { 0.0, 1.0, 0.0, 1.0 };
//    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//    GLfloat mat_shininess[] = {40};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//
//    glPushMatrix();
//	glTranslatef(0, 0.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(15, 3.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(30, 0.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(30, 1.0, 5.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(25, 10.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(25, 10.0, 5.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(20, 10.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(20, 11.0, 5.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(5, 10.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(5, 10.0, 5.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(20, 20.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//
//	glPushMatrix();
//
//	glTranslatef(0,5,10);
//
//    glPushMatrix();
//	glTranslatef(0, 0.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(15, 0.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(30, 0.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(30, 0.0, 5.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(25, 10.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(25, 10.0, 5.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(20, 10.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslatef(20, 10.0, 5.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(5, 10.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(5, 10.0, 5.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(20, 20.0, 0.0);
//	glutSolidSphere(10.0, 50, 50);
//	glPopMatrix();
//
//	glPopMatrix();
//
//
////    for(double i=60; i>=0; i-=2)
////    {
////        for(double j = 0; j<i; j+=5)
////        {
////
////            for(double k=0; k<j; k+=7)
////            {
////
////                glPushMatrix();
////                glTranslatef(i, -j, k);
////                glutSolidSphere(10.0, 50, 50);
////                glPopMatrix();
////            }
////        }
////    }
//
//
//	glPopMatrix();
//}
//
//
//
//void display(void)
//{
//    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//
//    glMatrixMode( GL_PROJECTION );
//    glLoadIdentity();
//    glFrustum(-5,5, -5, 5, near_id, far_id);
//
//    //gluPerspective(60,1,5,100);
//    glMatrixMode( GL_MODELVIEW );
//    glLoadIdentity();
//    gluLookAt(eyex,eyey,eyez, centerx,centery,centerz, upx,upy,upz); // camera , ,
//    light0();
//    light1();
//    light2();
//
//    //glViewport(0, 0, windowHeight, windowWidth);
//    //glRotatef(30, 0, 0, 1 );
//    glScalef(scale_x,scale_y,scale_z);
//    glRotatef( alpha,axis_x, axis_y, 0.0 );
//    glRotatef( theta, axis_x, axis_y, 0.0 );
//
//    // glTranslatef(0,0,Tzval);
//    //glTranslatef(Txval,Tyval,Tzval);
////       glTranslatef(Txval,0,0);
//    //setCameraEye_Pitch();
//
//    /*
//
//    glPushMatrix();
//    glEnable(GL_TEXTURE_2D);
//
//
//
//    glPushMatrix();
//    //glTranslatef(0,0,Tzval);
//
//    glScalef(50,50,50);
//    glBindTexture(GL_TEXTURE_2D, 1);
//    draw_cube();
//    glPopMatrix();
//
//    glDisable(GL_TEXTURE_2D);
//    glPopMatrix();
//
//    */
//
//
//
//
//
//
//
//
//    glScalef(1, 1.8, 1);
//    if(ini==0)
//    {
//        setCameraEye_Pitch();
//        ini=1;
//    }
//
//    glPushMatrix();
//    if(bv)
//    {
//
//        glRotatef(90,1,0,0);
//    }
//
//
//
//    //glPushMatrix();
//    glPushMatrix();
//    glTranslatef(-50, 0, 0);
//    draw_windmill();
//    // glutSolidSphere(3, 20, 40);
//    glPopMatrix();
//
//
//    glPushMatrix();
//    draw_every();
//    glPopMatrix();
//
//    glPushMatrix();
//
//    glTranslatef(-30,-12,0);
//    glScalef(1.5,1.5,1.5);
//
//    glPushMatrix();
//    glTranslatef(-100,50,0);
//    draw_sp();
//    glPopMatrix();
//
//    glPushMatrix();
//
//    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//    GLfloat mat_ambient[] = { 0.2, 0.2, 0.2, 1.0 };
//    GLfloat mat_diffuse[] = { .239, .047, 0.008, 1.0 };
//    GLfloat mat_specular[] = { 1, 1, 1, 1.0 };
//    GLfloat mat_shininess[] = {30};
//
//    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
//	glTranslatef(56,4,-4);
//    glScalef(2, 10, 2);
//
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, 4);
//	draw_cube();
//	glDisable(GL_TEXTURE_2D );
//	glPopMatrix();
//	glPopMatrix();
//
//	glPushMatrix();
//	draw_floor();
//	glPopMatrix();
//
//    glPushMatrix();
//    glPopMatrix();
//
//
//    glPopMatrix();
//
//
//
//    glFlush();
//    glutSwapBuffers();
//
//
//}
//
//
//
//
//
//
//
//
//void myKeyboardFunc( unsigned char key, int x, int y )
//{
//    switch ( key )
//    {
//    case 'r':
////        if(anglePitch>=anglePitchLimit1)
////                break;
//        anglePitch += roll_value;
//
//        //printf("%lf  p\n ", anglePitch);
//        //if(anglePitch > limit)
//        //    anglePitch -= limit;
//        setCameraEye_Pitch();
//        glutPostRedisplay();
//
//        // eyex = eyex;
//
//        break;
//    case 't':
////        if(anglePitch<=anglePitchLimit2)
////                break;
//        anglePitch -= roll_value;
//        //if(anglePitch < 0)
//        //   anglePitch += limit;
//        setCameraEye_Pitch();
//        glutPostRedisplay();
//        break;
//    case 'y':
////        if(angleYaw==angleYawLimit1)
////            break;
//        angleYaw += roll_value;
//        //if(angleYaw > limit)
//        //    angleYaw -= limit;
//        setCameraEye_Yaw();
//        //setCameraEye_Yaw();
//        glutPostRedisplay();
//
//        // eyex = eyex;
//        break;
//    case 'u':
////        if(angleYaw==angleYawLimit2)
////            break;
//        angleYaw -= roll_value;
//        //if(angleYaw < 0)
//        //   angleYaw += limit;
//        setCameraEye_Yaw();
//        //setCameraEye_Yaw();
//        glutPostRedisplay();
//        break;
//    case 'i':
//        //if(angleRoll>=angleRollLimit1)
//        //   break;
//        angleRoll += roll_value;
//        //if(angleRoll >= limit)
//        //    angleRoll -= limit;
//        printf("%lf\n", angleRoll);
//        setCameraEye_Roll();
//        //setCameraEye_Yaw();
//        glutPostRedisplay();
//
//        // eyex = eyex;
//        break;
//    case 'o':
//        //if(angleRoll<=angleRollLimit2)
//        //   break;
//        angleRoll -= roll_value;
//        //if(angleRoll < 0)
//        //    angleRoll += limit;
//        setCameraEye_Roll();
//        //setCameraEye_Yaw();
//        glutPostRedisplay();
//        break;
//
//    case 'q':
//    case 'Q':
//        bRotate = !bRotate;
//        // uRotate = false;
//        axis_x=0.0;
//        axis_y=1.0;
//
//        break;
//    case 'j':
//        frotate = !frotate;
//        // uRotate = false;
//        //axis_x=0.0;
//        //axis_y=1.0;
//
//        break;
//
//    case 'E':
//    case 'e':
//        uRotate = !uRotate;/**<  */
//        //bRotate = false;
//        axis_x=1.0;
//        axis_y=0.0;
//
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
//        centery+=2;
//        break;
//    case 's':
//        eyey-=2;
//        centery-=2;
//        break;
//    case 'f':
//        eyez+=2;
//        centerz+=2;
//        //glutPostRedisplay();
//        break;
//    case 'g':
//        eyez-=2;
//        centerz-=2;
//        //glutPostRedisplay();
//        break;
//    case 'z':
//        //eyez-=2;
//        //init(4);
//        f=4;
//        scale_x+=0.05;
//        scale_y+=0.05;
//        scale_z+=0.05;
//        glutPostRedisplay();
//        break;
//    case 'c':
//        //eyez-=2;
//        //init(4);
//        f=4;
//        if(scale_x==0.05)
//            break;
//        scale_x-=0.05;
//        scale_y-=0.05;
//        scale_z-=0.05;
//        glutPostRedisplay();
//        break;
//    case 'b':
//        bird_view();
//        break;
//    case 'n':
//        normal_view();
//        break;
//    case 'l':
//        light_switch0=!light_switch0;
//        //light0();
//        glutPostRedisplay();
//        break;
//    case 'k':
//        light_switch1=!light_switch1;
//        //light1();
//        glutPostRedisplay();
//        break;
//    case ';':
//        light_switch2=!light_switch2;
//        //light1();
//        glutPostRedisplay();
//        break;
//
//    case 27:	// Escape key
//        exit(1);
//    }
//}
//
///*
//r, t => pitch
//y, u => Yaw
//i, o => roll
//w, s => y move
//a, d => x move
//f, g => z move, zoom in/out
//c, z => scaling
//
//
//*/
//
//
//void animate()
//{
//    if (bRotate == true)
//    {
//        theta += 1;
//        if(theta > 360.0)
//            theta -= 360.0*floor(theta/360.0);
//    }
//
//    if (frotate == true)
//    {
//        ftheta += 4;
//       // if(ftheta > 360.0)
//         //   ftheta -= 360.0*floor(ftheta/360.0);
//    }
//
//    if (uRotate == true)
//    {
//        alpha += 1;
//        if(alpha > 360.0)
//            alpha -= 360.0*floor(alpha/360.0);
//    }
//    glutPostRedisplay();
//
//}
//
//static void idle(void)
//{
//    glutPostRedisplay();
//}
//int id= 1;
//void LoadTexture(const char*filename)
//{
//    glGenTextures(1, &ID[id++]);
//    glBindTexture(GL_TEXTURE_2D, ID[id-1]);
//    glPixelStorei(GL_UNPACK_ALIGNMENT, ID[id-1]);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_CLAMP);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//    BmpLoader bl(filename);
//    gluBuild2DMipmaps(GL_TEXTURE_2D, GL_RGB, bl.iWidth, bl.iHeight, GL_RGB, GL_UNSIGNED_BYTE, bl.textureData );
//}
//
//
////void LoadTexture2(const char*filename)
////{
////    glGenTextures(2, &ID[id++]);
////    glBindTexture(GL_TEXTURE_2D, ID1);
////    glPixelStorei(GL_UNPACK_ALIGNMENT, ID1);
////    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
////    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
////    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_LINEAR);
////    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_LINEAR);
////    BmpLoader bl(filename);
////    gluBuild2DMipmaps(GL_TEXTURE_2D, GL_RGB, bl.iWidth, bl.iHeight, GL_RGB, GL_UNSIGNED_BYTE, bl.textureData );
////}
//
//
//
//
//int main (int argc, char **argv)
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//    // glutInitWindowSize(900,900);
//    //glutInitWindowPosition(10,10);
//    glutInitWindowPosition(200,200);
//    glutInitWindowSize(windowHeight, windowWidth);
//    glutCreateWindow("Traingle-Demo");
//
//    LoadTexture("E:\\Code\\glut\\lab4\\lab4_asn_v3\\grass.bmp"); /// 1
//    LoadTexture("E:\\Code\\glut\\lab4\\lab4_asn_v3\\car_side_3.bmp"); /// 2
//    LoadTexture("E:\\Code\\glut\\lab4\\lab4_asn_v3\\car_side_2.bmp"); /// 3
//    LoadTexture("E:\\Code\\glut\\lab4\\lab4_asn_v3\\tree_wood.bmp"); /// 4
//    LoadTexture("E:\\Code\\glut\\lab4\\lab4_asn_v3\\glass.bmp"); /// 5
//
//
//    glShadeModel( GL_SMOOTH );
//    glEnable( GL_DEPTH_TEST );
//    glEnable(GL_NORMALIZE);
//    glEnable(GL_LIGHTING);
//    //light0();
//    //light1();
//    glEnable( GL_DEPTH_TEST );
//    glutKeyboardFunc(myKeyboardFunc);
//    glutReshapeFunc(resize);
//    glutDisplayFunc(display);
//
//    glutIdleFunc(idle);
//    glutIdleFunc(animate);
//    glutMainLoop();
//
//    return EXIT_SUCCESS;
//}
//
