#include <iostream>

int main(){
	// integer type (4 bytes)
	int a = 55 + 32; // legal
	int b = 55 + "john"; //illegal
	int c = -42 + 55; // The integer type holds non-fractional numbers, which can be positive or negative. 
	signed int d = 42; // can hold both negative and positive numbers.
	unsigned int i = 43; // can hold only positive values.
	short int j = 23; // Half of the default size
	long int g = 54; // Twice the default size
	signed short int k = 45; // example

	// Floating point numbers.
	float a = 420.0; // is 4 byte.
	double b = -3.33; // is 8 byte.
	long double c = 0.0325; // is 16 byte.

	// String. Library <string>, <iostream>.
	string a = "I am learning C++"; // A string is an ordered sequence of characters, enclosed in double quotation marks.

	// Characters. Variable holds a 1-byte integer.
	char test = 'S'; // variable is typically interpreted as an ASCII character.

	// Bool. Only have two possible values: true (1) and false (0).
	bool on = true;
	bool off = false;
	
return 0;
}
