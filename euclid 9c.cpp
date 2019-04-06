// euclid 9c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>
#include <fstream>


int main()
{
	// creating the file to store the values in incase the terminal closes
	std::ofstream myfile;
	myfile.open("euclid2019q9help.txt");
	//declaring the eqaution
	double equation;
	//													equation = 1.2;
	
	double a = 1;
	double b = 1;
	equation =  (a * a + b * b + 1)/(a * b);
														//std::cout << equation;
	unsigned int ramkill; // number the program bruteforces up to

	std::cout << "please enter a positve integer ";
	std::cin >> ramkill;
	printf("\n");
	std::cout << "(a,b,f(a,b)) \n";
	myfile << "(a,b,f(a,b)) \n";
	//std::cout << equation;
	for (unsigned int i = 1; i <= ramkill; i++) {
		for (unsigned int j = 1; j <= ramkill; j++) {
			a = i;
			b = j;
			equation = (a * a + b * b + 1) / (a * b);
			if (fmod(equation,1) == 0 && a >= b){ // check if f(a,b) % 1 is 0, and check if a >= b to eliminate repeats
				std::cout << "(" << a << "," << b << ",";
				std::cout << equation << ")\n";
				myfile << "(" << a << "," << b << ",";
				myfile << "(" << equation << ")\n";
			}
		}
	}
	myfile.close();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
