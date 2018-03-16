#include "Operaciones_preprocesador.h"
#include "stdafx.h"
#include <iostream>
#include <string>
#define NAME(A) (string (#A))

using namespace std;

string concat(size_t var1, size_t var2) {
	return NAME(var1) + NAME(var2);
}

void printLit() {
	unsigned int literal = 10u;
	cout << literal << endl;
}