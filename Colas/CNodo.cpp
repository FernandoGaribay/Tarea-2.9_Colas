#include "CNodo.h"

CNodo::CNodo(int v, CNodo* sig) {
	valor = v;
	siguiente = sig;
}
CNodo::CNodo(int v) {
	valor = v;
	siguiente = NULL;
}
int CNodo::getValor() {
	return valor;
}
CNodo* CNodo::getSiguiente() {
	return siguiente;
}