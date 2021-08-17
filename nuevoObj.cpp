#include "nuevoObj.h"


nuevoObj::nuevoObj() {

}


void nuevoObj::dibujarNuevo(float x, float y, float z) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glutSolidSphere(0.5, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(x + 0.5, y, z);
    glutSolidSphere(0.5, 20, 20);
    glPopMatrix();

}
