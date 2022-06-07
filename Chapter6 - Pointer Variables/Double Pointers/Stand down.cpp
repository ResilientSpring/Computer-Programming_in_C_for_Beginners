#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cctype>
#include <iomanip>
using namespace std;

int main() {
	// In a declaration statement, preceding a variable with * causes that variable to be a pointer.
	int **double_pointer = NULL, * intermediate_pointer = NULL;

		// A pointer is an object/variable that can contain a memory address.

	// ------- End of declaration statement.

	int ultimate_variable = 100;

	// i_ptr is an object/variable that can contain a memory address of an integer.
	intermediate_pointer = &ultimate_variable;   // & is an operator standing for the memory address of its operand.
	double_pointer = &intermediate_pointer;

	printf("The value of the ultimate variable is %d \n", ultimate_variable);

	printf("The address of ultimate variable is %p \n", &ultimate_variable);

	printf("The value of intermediate pointer is %p \n", intermediate_pointer);

	printf("The address of ultimate variable is %p \n", *double_pointer);
}