// Practico2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Operaciones_matematicas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_logicas.h"
#include "Operaciones_string.h"
#include "Operaciones_binarias.h"
#include <iostream>

using namespace std;

void printMenu();

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

		switch(option) {
			case 'a':
				cout << "Enter value: ";
				cin >> intvalue1;
				cout << numSquare(intvalue1) << endl;
			break;
			case 'b':
				cout << "Enter values: ";
				cin >> intvalue1 >> intvalue2;
				cout << sum(intvalue1, intvalue2) << endl;
			break;
			case 'c':
				cout << "Enter the radius of the circle: ";
				cin >> r;
				cout << circleArea(r) << endl;
			break;
			case 'd':
				cout << "Enter values: ";
				cin >> intvalue1 >> intvalue2;
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
				cout << strCompare(strvalue1, strvalue2) <<endl;
			break;
			case 'h':
				cout << "Enter values: ";
				cin >> intvalue1 >> intvalue2;
				cout << andBinary(intvalue1, intvalue2) << endl;
			break;
			case 'i':
				cout << "Enter values: ";
				cin >> intvalue1 >> intvalue2;
				cout << orBinary(intvalue1, intvalue2) << endl;
			case 'j':
				cout << "Enter value: ";
				cin >> intvalue1;
				cout << shiftright2(intvalue1) << endl;
			break;
			case 'k':
				cout << "Enter value: ";
				cin >> intvalue1;
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
	cout << "a- Square of a number" << endl;
	cout << "b- Sum of two numbers" << endl;
	cout << "c- Area of a circle" << endl;
	cout << "d- Maximum of two numbers" << endl;
	cout << "e- Concatenate the names of two variables" << endl;
	cout << "f- Print literal" << endl;
	cout << "g- String compare" << endl;
	cout << "h- AND (binary)" << endl;
	cout << "i- OR (binary)" << endl;
	cout << "j- Shift two bits to the right" << endl;
	cout << "k- Shift two bits to the left" << endl;
	cout << "l- Swap two variables" << endl;
	cout << "x- exit" << endl;
}

