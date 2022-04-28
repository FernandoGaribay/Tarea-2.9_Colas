#include <iostream>
#include "CCola.h"

using namespace std;

int main(void) {
	CCola Cola;

	cout << "ImprimirCola();" << endl;
	Cola.ImprimirCola();

	cout << "\nCola.Push(10);" << endl;
	Cola.Push(10);
	cout << "Cola.Push(20);" << endl;
	Cola.Push(20);
	cout << "Cola.Push(30);" << endl;
	Cola.Push(30);
	cout << "Cola.Push(40);" << endl;
	Cola.Push(40);
	cout << "Cola.Push(50);" << endl;
	Cola.Push(50);

	cout << "\nImprimirCola();" << endl;
	Cola.ImprimirCola();

	cout << "\nCola.Pop();" << endl;
	cout << "Dato sacado: " << Cola.Pop() << endl;

	cout << "\nCola.Pop();" << endl;
	cout << "Dato sacado: " << Cola.Pop() << endl;

	cout << "\nCola.Push(60);" << endl;
	Cola.Push(60);

	cout << "\nImprimirCola();" << endl;
	Cola.ImprimirCola();

	return 0;
}