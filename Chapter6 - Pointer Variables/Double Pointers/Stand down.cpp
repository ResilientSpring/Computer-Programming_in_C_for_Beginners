#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cctype>
#include <iomanip>
using namespace std;

int main() {
	// In a declaration statement, preceding a variable with * causes that variable to be a pointer.
	int **double_pointer = NULL, * i_ptr = NULL;

		// A pointer is an object/variable that can contain a memory address.

	// ------- End of declaration statement.

	int ultimate_variable = 100;

	// i_ptr is an object/variable that can contain a memory address of an integer.
	i_ptr = &ultimate_variable;   // & is an operator standing for the memory address of its operand.
	double_pointer = &i_ptr;


}