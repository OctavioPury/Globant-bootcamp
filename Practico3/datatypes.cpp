#include "stdafx.h"
#include "datatypes.h"
#include <iostream>
#include <limits>

using std::cout;
using std::endl;

void printsizes() {
	cout << "short: " << sizeof(short) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "size_t: " << sizeof(size_t) << endl;
}

void printfchar65() {
	char c = 65;
	printf("Decimal: %d\n", c);
	printf("Hexadecimal: %#x\n", c);
	printf("Octal: %#o\n", c);
	printf("Char: %c\n", c);
}

void coutchar65() {
	char c = 65;
	cout << "decimal: " << std::dec << (int)c << endl;
	cout << std::showbase;
	cout << "hexadecimal: " << std::hex << (int)c << endl;
	cout << std::noshowbase;
	cout << "octal: " << std::oct << (int)c << endl;
	cout << "Char: " << c << endl;
}

void couttypelimits() {
	cout << "short min value: " << SHRT_MIN << endl;
	cout << "short max value: " << SHRT_MAX << endl;
	cout << "int min value: " << INT_MIN << endl;
	cout << "int max value: " << INT_MAX << endl;
	cout << "float min value: " << FLT_MIN << endl;
	cout << "float max value: " << FLT_MAX << endl;
	cout << "double min value: " << DBL_MIN << endl;
	cout << "double max value: " << DBL_MAX << endl;
	cout << "long min value: " << LONG_MIN << endl;
	cout << "long max value: " << LONG_MAX << endl;
	cout << "long long min value: " << LLONG_MIN << endl;
	cout << "long long max value: " << LLONG_MAX << endl;
}

void cout0xFFFFFFFF() {
	int a = 0xFFFFFFFF;
	unsigned int b = 0xFFFFFFFF;
	cout << "int: " << a << endl;
	cout << "unsigned int: " << b << endl;
}