#pragma once
#include "CNodo.h"
#include <iostream>

using namespace std;

class CCola {
private:
	CNodo* ultimo;
	CNodo* primero;

public:
	CCola() : ultimo(NULL), primero(NULL) {}
	~CCola();
	void Push(int valor);
	int Pop();
	void ImprimirCola();
};