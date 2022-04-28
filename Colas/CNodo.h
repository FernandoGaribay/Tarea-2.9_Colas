#pragma once
#include <iostream>

using namespace std;

class CNodo {
private:
	int valor;
	CNodo* siguiente;

public:
	CNodo(int v);
	CNodo(int v, CNodo* sig);
	int getValor();
	CNodo* getSiguiente();

	friend class CCola;
};