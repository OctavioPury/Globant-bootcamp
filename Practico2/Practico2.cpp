// Practico2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Operaciones_matematicas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_logicas.h"
#include "Operaciones_string.h"
#include "Operaciones_binarias.h"
#include <iostream>
#include <string>

#define CINIGNORE (cin.ignore(numeric_limits<streamsize>::max(), '\n'))
//Discard whatever is in the buffer from cin.

using namespace std;

void printMenu();
int askint();
double askdouble();

int main() {

	bool flag = 0;
	char option;
	int intvalue1 = 0;
	int intvalue2 = 0;
	double r = 0;
	string strvalue1 = "";
	string strvalue2 = "";
	do {
		printMenu();
		cin >> option;
		CINIGNORE;

		switch(option) {
			case 'a':
				intvalue1 = askint();
				cout << numSquare(intvalue1) << endl;
			break;
			case 'b':
				intvalue1 = askint();
				intvalue2 = askint();
				cout << sum(intvalue1, intvalue2) << endl;
			break;
			case 'c':
				r = askdouble();
				cout << circleArea(r) << endl;
			break;
			case 'd':
				intvalue1 = askint();
				intvalue2 = askint();
				cout << maximum(intvalue1, intvalue2) << endl;
			break;
			case 'e':
				strvalue1 = concat(intvalue1, intvalue2);
				cout << strvalue1 << endl;
			break;
			case 'f':
				printLit();
			break;
			case 'g':
				cout << "Enter strings: ";
				cin >> strvalue1 >> strvalue2;
				cout << boolalpha;
				cout << strCompare(strvalue1, strvalue2) <<endl;
			break;
			case 'h':
				intvalue1 = askint();
				intvalue2 = askint();
				cout << andBinary(intvalue1, intvalue2) << endl;
			break;
			case 'i':
				intvalue1 = askint();
				intvalue2 = askint();
				cout << orBinary(intvalue1, intvalue2) << endl;
			break;
			case 'j':
				intvalue1 = askint();
				cout << shiftright2(intvalue1) << endl;
			break;
			case 'k':
				intvalue1 = askint();
				cout << shiftleft2(intvalue1) << endl;
			break;
			case 'l':
				cout << "Enter strings: ";
				cin >> strvalue1 >> strvalue2;
				swap(strvalue1, strvalue2);
				cout << "strvalue1: " << strvalue1 << endl;
				cout << "strvalue2: " << strvalue2 << endl;
			break;
			case 'x':
				flag = 1;
			break;
			default:
				cout << "Invalid option" << endl;
			break;
		}
	} while(flag != 1);
}

void printMenu() {
	cout << "Main menu" << endl;
	cout << "Please choose an option" << endl;
	cout << "(a) Square of a number" << endl;
	cout << "(b) Sum of two numbers" << endl;
	cout << "(c) Area of a circle" << endl;
	cout << "(d) Maximum of two numbers" << endl;
	cout << "(e) Concatenate the names of two variables" << endl;
	cout << "(f) Print literal" << endl;
	cout << "(g) String compare" << endl;
	cout << "(h) AND (binary)" << endl;
	cout << "(i) OR (binary)" << endl;
	cout << "(j) Shift two bits to the right" << endl;
	cout << "(k) Shift two bits to the left" << endl;
	cout << "(l) Swap two variables" << endl;
	cout << "(x) Exit" << endl;
}

int askint() {
//Parses a string recived from cin and check is a desired input which
//in this case is an int.

	long int value = 0;
	string rawinput;
	char* p = NULL;
	while (1) {
		cout << "Enter a number: ";
		cin >> rawinput;
		CINIGNORE;
		value = strtol(rawinput.c_str(), &p, 10);
		if (*p == NULL) {
			return value;
		}
		else {
			cout << "Invalid input." << endl;
		}
	}
}

double askdouble() {
//Parses a string recived from cin and check is a desired input which
//in this case is a non negative double.

	double value = 0;
	string rawimput;
	char* p = NULL;
	while (1) {
		cout << "Enter the circle radius: ";
		cin >> rawimput;
		CINIGNORE;
		value = strtod(rawimput.c_str(), &p);
		if (*p == NULL && value >= 0) {
			return value;
		}
		else {
			cout << "Invalid input." << endl;
		}
	}
}
