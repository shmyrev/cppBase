#include <iostream>

int main(){
	std::cout << "char: " << sizeof(char) << std::endl; // char 1.
	std::cout << "int: " << sizeof(int) << std::endl; // int 4.
	std::cout << "float: " << sizeof(float) << std::endl; // float 4.
	std::cout << "double: " << sizeof(double) << std::endl; // double 8.

	double myArr[10]; // Array
	std::cout << sizeof(myArr) << std::endl; // 80.

return 0;
}
