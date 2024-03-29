#include "CCola.h"

CCola::~CCola(){
	while(primero) 
		Pop();
}

void CCola::Push(int v) {
	CNodo* nuevo; 

	nuevo = new CNodo(v);

	if (ultimo) 
		ultimo->siguiente = nuevo;

	ultimo = nuevo;

	if (!primero) 
		primero = nuevo;
}

int CCola::Pop() {
	CNodo* aux;
	int v;

	aux = primero;
	if (!aux)
		return 0;

	primero = aux->siguiente;
	v = aux->valor;
	delete aux;

	if (!primero)
		ultimo = NULL;

	return v;
}


void CCola::ImprimirCola() {
	CNodo* nodo = primero;

	if (nodo == NULL)
		cout << "LA COLA ESTA VACIA." << endl;
	else {
		while (nodo) {
			cout << nodo->valor << " <- ";
			nodo = nodo->siguiente;
		}
		cout << "NULL" << endl;
	}
}