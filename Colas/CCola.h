#pragma once
#include "CNodo.h"
#include <iostream>

using namespace std;

class CCola {
public:
	CCola() : primero(NULL), ultimo(NULL) {}
	~CCola();
	void Encolar(int v);
	int Desencolar();
	void MostrarLista();
private:
	CNodo* primero, * ultimo;
};