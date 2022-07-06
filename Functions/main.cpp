//**********************************************************************
// File name:			main.cpp
// Author:				
// Date:					
// Class:					
// Assignment:		Lab09
// Purpose:				This program enters a simple fraction's numerator and 
//								denominator.The original fraction is outputted along 
//								with the reduced version of the fraction. Some simple  
//								error checking is done such as divide by zero.
// Hours: 
//**********************************************************************

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void printAsterisks (int totalAsterisks);
void printHeading (string title);
int getPositiveInt (string prompt);
void printFraction (int numerator, int denominator);
int minimum (int num1, int num2);
int greatestCommonDivisor (int num1, int num2);
void printFractionReduced (int numerator, int denominator);

/***********************************************************************
Function:			main

Description:	A simple driver that tests the inputting of a fraction and
							the outputting of the fraction along with the reduced
							fraction.

Parameters:		None

Returned:			return status
***********************************************************************/
int main () {
	const string HEADING_NAME = "Fun With Fractions";
	const int ROUND_AMOUNT = 2;

	//int numerator, denominator;

	//printHeading (HEADING_NAME);

	//cout << endl << endl;
	//numerator = getPositiveInt ("Enter Numerator: ");
	//do {
	//	denominator = getPositiveInt ("Enter Denominator: ");
	//} while (0 == denominator);

	//cout << endl << "Original Fraction: ";
	//printFraction (numerator, denominator);

	//cout << endl << endl << "Support Functions: " << endl;
	//cout << "minimum (16, 4): " << minimum (16, 4) << endl;
	//cout << "gcd (16, 12): " << greatestCommonDivisor (16, 12) << endl;

	//cout << endl << "Reduced Fraction: ";
	//printFractionReduced (numerator, denominator);

	//cout << endl << endl;

	return EXIT_SUCCESS;
}

/***********************************************************************
Function:			printAsterisks

Description:	Outputs the specified number of asterisks

Parameters:		totalAsterisks - number of asterisks to output

Returned:			None
***********************************************************************/
void printAsterisks (int totalAsterisks) {

}
/***********************************************************************
Function:			printHeading

Description:	Outputs a heading by outputting a name between a row of
							asterisks

Parameters:		title - name of the heading

Returned:			None
***********************************************************************/
void printHeading (string title) {
	const int NUM_ASTERISKS = static_cast<int> (title.length ());

}

/***********************************************************************
Function:			getPositiveInt

Description:	Get's a positive integer from stdin (keyboard). Validate
							with a do while until integer is >= 0

Parameters:		None

Returned:			An integer greater than or equal to 0
***********************************************************************/
int getPositiveInt (string prompt) {

	return 0;
}

/***********************************************************************
Function:			printFraction

Description:	Prints a fraction of the form numerator / denominator

Parameters:		numerator   - the numerator of a fraction
							denominator - the denominator of a fraction

Returned:			None
***********************************************************************/
void printFraction (int numerator, int denominator) {

}

/***********************************************************************
Function:			minimum

Description:	Finds the minimum value of two integers

Parameters:		num1 - first integer
							num2 - second integer

Returned:			The smallest value between num1 and num2
***********************************************************************/
int minimum (int num1, int num2) {

	return 0;
}

/***********************************************************************
Function:			greatestCommonDivisor

Description:	Finds the greatest common divisor between two integer
							values

Parameters:		num1 - first integer
							num2 - second integer

Returned:			The greatest common divisor of two integers
***********************************************************************/
int greatestCommonDivisor (int num1, int num2) {

	return 0;
}

/***********************************************************************
Function:			printFractionReduced

Description:	Prints a fraction in reduced form without changing the
							fraction

Parameters:		numerator   - the numerator of a fraction
							denominator - the denominator of a fraction

Returned:			None
***********************************************************************/
void printFractionReduced (int numerator, int denominator) {

}