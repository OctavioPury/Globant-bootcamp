#include "Operaciones_matematicas.h"
#include "stdafx.h"
#include <cstdlib>
#define PI 3.1415926535
#define MAX(A, B) ((A) > (B) ? (A) : (B))

int numSquare(int a) {
	return a * a;
}

int sum(int a, int b) {
	return a + b;
}

double circleArea(double r) {
	return (PI * r * r);
}

int maximum(int a, int b) {
	return MAX(a, b);
}