//
//  main.c
//  teste
//
//  Created by Letícia Faleia on 27/05/21.
//

#include <stdlib.h>
#include <stdio.h>
#include <GLUT/glut.h>
#ifdef __APPLE__
#else
#endif


void desenhaCasa(){
    // Telhado da Casa
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.8, 0.6, 0.1);
    glBegin(GL_POLYGON);
    glVertex2f(0,3);
    glVertex2f(-2,1);
    glVertex2f(2,1);
    glEnd();

    // Parede da Casa
    glColor3f(0.82, 0.66, 0.91);
    glBegin(GL_POLYGON);
    glVertex2f(1.5, 1);
    glVertex2f(-1.5, 1);
    glVertex2f(-1.5, -2);
    glVertex2f(1.5, -2);
    glEnd();
    
    // Grama do quintal
    glColor3f(0.15, 0.75, 0.50);
    glBegin(GL_POLYGON);
    glVertex2f(50.09, -2.0);
    glVertex2f(-33.09, -2);
    glVertex2f(-19.75, -2.25);
    glVertex2f(10.5, -2.25);
    glEnd();
    
    // Porta da Casa
    glColor3f(1.1, 1.1, 1.1);
    glBegin(GL_POLYGON);
    glVertex2f(0.5, -.25);
    glVertex2f(-0.5, -.25);
    glVertex2f(-0.5, -2);
    glVertex2f(0.5, -2);
    glEnd();
    glFlush();
}

void init(){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glOrtho(-3,3,-3,3,-3,3);
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Casa da Letícia <3");
    init();
    glutDisplayFunc(desenhaCasa);
    glutMainLoop();
    return(0);
}
