#include "Arbol.h"

Arbol::Arbol() {

}

void Arbol::DibujarArbol(float x, float y, float z) {
	glPushMatrix();
		glTranslatef(x, y, z);
		glRotatef(90, 1, 0, 0);
		glutSolidSphere(0.5, 20, 20);
		glutSolidCylinder(0.2, 1.0, 20, 20);
	glPopMatrix();
}