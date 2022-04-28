#pragma once
#include <iostream>

using namespace std;

class CNodo {
private:
	int valor;
	CNodo* siguiente;

public:
	CNodo(int valor_);
	CNodo(int valor_, CNodo* siguiente_);
	int getValor();
	CNodo* getSiguiente();

	friend class CCola;
};