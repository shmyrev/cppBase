#include <iostream>

int main(){
	int *p = new int; // request memory
	*p = 5; // store value

	std::cout << *p << std::endl; // use value

	delete p; // free up the memory

	// Array.
	int *p = NULL; // Pointer initialied with null
	p = new int[20]; // Request memory
	delete []p; // Delere array pointed to by p

return 0;
}
