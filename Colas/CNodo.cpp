#include "CNodo.h"

CNodo::CNodo(int valor_, CNodo* siguiente_) {
	valor = valor_;
	siguiente = siguiente_;
}

CNodo::CNodo(int valor_) {
	valor = valor_;
	siguiente = NULL;
}

int CNodo::getValor() {
	return valor;
}

CNodo* CNodo::getSiguiente() {
	return siguiente;
}