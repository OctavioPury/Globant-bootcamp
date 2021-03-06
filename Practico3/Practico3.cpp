// Practico3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "datatypes.h"
#include "array_functions.h"
#include <iostream>

#define CINIGNORE (std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'))

using namespace std;

int main()
{	
	bool flag = 0;
	char option;
	int intarr[5];
	do {
		std::cin >> option;
		CINIGNORE;

		switch (option) {
		case 'a':
			printsizes();
			break;
		case 'b':
			printfchar65();
			break;
		case 'c':
			coutchar65();
			break;
		case 'd':
			couttypelimits();
			break;
		case 'e':
			cout0xFFFFFFFF();
			break;
		case 'f':
			inputdata(intarr, 5);
			break;
		case 'g':
			printarray(intarr, 5);
			break;
		case 'x':
			flag = 1;
			break;
		default:
			std::cout << "Invalid option" << std::endl;
			break;
		}
	} while (flag != 1);
	return 0;
}
