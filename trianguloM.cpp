#include "trianguloM.h"

trianguloM::trianguloM() {

}

void trianguloM::DibujarTrianguloM(float x, float y, float z) {
    glPushMatrix();
        glTranslatef(x, y, z);
        glBegin(GL_TRIANGLES);
        glVertex3f(0.0, 0.6, 0.0);
        glVertex3f(0.6, 0.0, 0.0);
        glVertex3f(-0.6, 0.0, 0.0);
        glEnd();
    glPopMatrix();
}