/* ArithmeticOperationAssignment.cpp : Promts the user for two variables and a char. Once the user enters that information,
the multifunction is called.  The multifunction takes the two integers that the user entered and then calcualtes them
by the char that the user entered.  The total is then sent back to the main function where the information is then
displayed to the console
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

//Function prototype
int multiFunction(int, int, char);

/*This is the loader function for this class.  This function prompts the user to enter two integers and a arithmetic
operator such as * , / , + , - , and then calls for the multifunction.  Upon return of the multifunction, this function
will display the results to the console */
void main() {

	//Declare local variables
	char arithOperator;
	int integerOne, integerTwo;
	int result;

	//Prompt the user for input values
	cout << "Please enter two numbers and a arithmetic operator(* , / , + , -):" << endl;
	cin >> integerOne >> integerTwo >> arithOperator;

	//Call the multifunction, and capture the return value
	result = multiFunction(integerOne, integerTwo, arithOperator);

	//Display the results to the console
	cout << "The result is: " << result << endl;

	//End of function
	system("pause");
	return;
}

/*  This function accepts the parameters from the main function, and then calculates the two integer values, depending
upon what char the user entered.*/
int multiFunction(int intParamOne, int intParamTwo, char charParam) {

	//Declare local variables
	int total;

	//Calculate a total depending upon which char value the user entered
	switch (charParam) {
	case '+':
		total = intParamOne + intParamTwo;
		break;
	case '-':
		total = intParamOne - intParamTwo;
		break;
	case '*':
		total = intParamOne * intParamTwo;
		break;
	case '/':
		total = intParamOne / intParamTwo;
		break;
	}

	//Return the total back to the main function
	return total;
}

