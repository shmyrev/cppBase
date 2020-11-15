#include <iostream>

int main (){
	int a[5];
	int b[5] = {11, 45, 62, 70, 88};

	std::cout << b[0] << std::endl; // outputs 11
	std::cout << b[4] << std::endl; // outputs 88

	a[2] = 99;
	std::cout << a[2] << std::endl; // outputs 99

return 0;
}
