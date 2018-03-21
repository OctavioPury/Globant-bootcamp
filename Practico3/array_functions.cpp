#include "stdafx.h"
#include "array_functions.h"
#include <iostream>

void inputdata(int intarr[], int length) {
	for (int i = 0; i < length; ++i) {
		std::cin >> intarr[i];
	}
}

void printarray(int intarr[], int length) {
	for (int i = 0; i < length; ++i) {
		std::cout << intarr[i] << ' ';
	}
	std::cout << '\n';
}