#include "CCola.h"

CCola::~CCola()
{
	while (primero) Desencolar();
}

void CCola::Encolar(int v)
{
	CNodo* nuevo; 

	nuevo = new CNodo(v);

	if (ultimo) 
		ultimo->siguiente = nuevo;

	ultimo = nuevo;

	if (!primero) 
		primero = nuevo;
}

int CCola::Desencolar() {
	CNodo* nodo; 
	int v; 

	nodo = primero;

	if (!nodo) 
		return 0; 

	primero = nodo->siguiente;
	v = nodo->valor;
	delete nodo;

	if (!primero) 
		ultimo = NULL;

	return v;
}

void CCola::MostrarLista() {
	CNodo* nodo = primero;

	if (nodo == NULL)
		cout << "Cola vacia " << endl;
	else {
		while (nodo) {
			cout << nodo->valor << "-> ";
			nodo = nodo->siguiente;
		}
		cout << endl;
	}
}