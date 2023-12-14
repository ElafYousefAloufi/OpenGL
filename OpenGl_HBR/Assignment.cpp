// Name: Elaf Yousef Aloufi
// ID: 1911265 
// Course: CPIT285
// Section: HBR 

#include <GL/glut.h> 
#include <gl/glut.h>
#include <math.h>

GLint tx = 0.0;

void initilize(void)
{
    // set the background color
    glClearColor(1.0, 1.0, 0.9, 0.0);
    // set projection parameters
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 400, 0, 400);
    glMatrixMode(GL_MODELVIEW); // Select the model-view matrix
    glLoadIdentity();           // Reset

}

//-------------------------------------------------------------------

void draw(void) {

    // Clear display window
    glClear(GL_COLOR_BUFFER_BIT);

    //Draw Rectangles
     // set the drawing color
    glColor3f(1.0f, 0.6f, 0.5f);
    glRecti(50, 170, 320, 140);


    //Draw Polygons
     // set the drawing color
    glColor3f(0.5f, 0.6f, 0.6f);
    glBegin(GL_POLYGON);
    glVertex2i(20, 20);
    glVertex2i(20, 30);
    glVertex2i(350, 30);
    glVertex2i(350, 20);
    glVertex2i(20, 20);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    // set the drawing color
    glColor3f(0.5f, 0.6f, 0.6f);
    glVertex2i(40, 180);
    glVertex2i(45, 188);
    glVertex2i(50, 188);
    glVertex2i(55, 188);
    glVertex2i(75, 188);
    glVertex2i(80, 180);
    glEnd();
    glFlush();


    glBegin(GL_POLYGON);
    // set the drawing color
    glColor3f(1.0f, 0.6f, 0.5f);
    glVertex2i(94, 270);
    glVertex2i(93, 250);
    glVertex2i(132, 250);
    glVertex2i(94, 230);
    glEnd();
    glFlush();


    glBegin(GL_POLYGON);
    // set the drawing color
    glColor3f(0.5f, 0.6f, 0.6f);
    glVertex2i(95, 266);
    glVertex2i(96, 270);
    glVertex2i(92, 268);
    glVertex2i(91, 268);
    glVertex2i(98, 270);
    glVertex2i(99, 270);
    glVertex2i(112, 262);
    glVertex2i(93, 250);
    glVertex2i(93, 250);
    glVertex2i(90, 268);
    glVertex2i(90, 268);
    glVertex2i(95, 260);
    glEnd();
    glFlush();


    // set the drawing color
    glColor3f(1.0f, 0.6f, 0.5f);
    glEnable(GL_POINT_SMOOTH);
    glPointSize(9);
    glBegin(GL_POINTS);
    glVertex2i(37, 240);
    glVertex2i(83, 263);
    glEnd();
    glFlush();


    // set the drawing color 
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2i(40, 30);
    glVertex2i(40, 170);
    glVertex2i(50, 170);
    glVertex2i(50, 30);

    glVertex2i(320, 30);
    glVertex2i(320, 170);
    glVertex2i(330, 170);
    glVertex2i(330, 30);

    glVertex2i(20, 170);
    glVertex2i(20, 180);
    glVertex2i(20, 180);
    glVertex2i(350, 180);
    glVertex2i(350, 180);
    glVertex2i(350, 170);
    glVertex2i(20, 170);
    glVertex2i(350, 170);

    glVertex2i(185, 30);
    glVertex2i(185, 140);

    glVertex2i(140, 155);
    glVertex2i(100, 155);
    glVertex2i(230, 155);
    glVertex2i(270, 155);


    glVertex2i(50, 139);
    glVertex2i(320, 139);


    glVertex2i(63, 188);
    glVertex2i(63, 193);
    glVertex2i(63, 193);
    glVertex2i(67, 193);
    glVertex2i(67, 193);
    glVertex2i(67, 188);
    glVertex2i(67, 188);
    glVertex2i(63, 188);

    glVertex2i(54, 186);
    glVertex2i(35, 236);
    glVertex2i(60, 186);
    glVertex2i(40, 237);

    glVertex2i(41, 241);
    glVertex2i(79, 260);
    glVertex2i(35, 244);
    glVertex2i(80, 266);

    glVertex2i(86, 263);
    glVertex2i(93, 263);

    glVertex2i(132, 250);
    glVertex2i(94, 230);
    glEnd();
    glFlush();

    // set the drawing color 
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(140, 155);
    glVertex2i(100, 155);
    glVertex2i(230, 155);
    glVertex2i(270, 155);
    glEnd();
    glFlush();

    //MONITOR DRAW
    glPushMatrix(); {
        glTranslatef(tx, 0, 0);

        // set the drawing color
        glColor3f(0.5f, 0.6f, 0.6f);
        glRecti(200, 205, 300, 275);

        // set the drawing color
        glColor3f(1.0f, 1.0f, 1.0f);
        glRecti(205, 220, 295, 270);

        //Draw Points
       // set the drawing color
        glColor3f(0.0f, 0.0f, 0.0f);
        glPointSize(3);
        glBegin(GL_POINTS);
        glVertex2i(287, 213);
        glEnd();
        glFlush();

        // set the drawing color 
        glColor3f(0.0f, 0.0f, 0.0f);
        glLineWidth(1);
        glBegin(GL_LINES);

        glVertex2i(232, 187);
        glVertex2i(235, 205);
        glVertex2i(235, 205);
        glVertex2i(266, 205);
        glVertex2i(266, 205);
        glVertex2i(269, 187);
        glVertex2i(269, 187);
        glVertex2i(232, 187);

        glVertex2i(220, 180);
        glVertex2i(220, 186);
        glVertex2i(220, 186);
        glVertex2i(280, 186);
        glVertex2i(280, 186);
        glVertex2i(280, 180);
        glEnd();
        glFlush();

        // set the drawing color 
        glColor3f(0.0f, 0.0f, 0.0f);
        glLineWidth(1);
        glBegin(GL_LINE_LOOP);
        glVertex2i(200, 274);
        glVertex2i(300, 274);
        glVertex2i(300, 206);
        glVertex2i(200, 206);
        glEnd();
        glFlush();

        // set the drawing color 
        glColor3f(0.0f, 0.0f, 0.0f);
        glLineWidth(1);
        glBegin(GL_LINE_LOOP);
        glVertex2i(205, 270);
        glVertex2i(295, 270);
        glVertex2i(295, 220);
        glVertex2i(205, 220);
        glEnd();
        glFlush();

        //Draw Quads
        // set the drawing color
        glColor3f(1.0f, 0.6f, 0.5f);
        glLineWidth(1);
        glBegin(GL_QUADS);
        glVertex2i(233, 187);
        glVertex2i(235, 205);
        glVertex2i(235, 205);
        glVertex2i(266, 205);
        glVertex2i(266, 205);
        glVertex2i(268, 187);
        glVertex2i(268, 187);
        glVertex2i(230, 187);
        glEnd();
        glFlush();

    } glPopMatrix();

    glutSwapBuffers();
}

//-------------------------------------------------------------------

void mySpecialKey(int key, int x, int y)
{

    switch (key)
    {

    case GLUT_KEY_RIGHT: tx += 1;
        break;

    case GLUT_KEY_LEFT: tx -= 1;
        break;

    default: GLUT_KEY_END;
        exit(0);
    }

    glutPostRedisplay();


}

//-------------------------------------------------------------------

void main(int argc, char** argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);
    // Set display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // Set display window position
    glutInitWindowPosition(200, 200);
    // Set display window position
    glutInitWindowSize(400, 400);
    // Create display window
    glutCreateWindow("Elaf Yousef Aloufi");
    // Send graphics to display window
    glutDisplayFunc(draw);
    //glutSpecialFunc(mySpecialKey);
    glutSpecialFunc(mySpecialKey);
    // Execute initialization procedure
    initilize();
    // Display everything and wait
    glutMainLoop();

}

