#include <iostream>

int main(){
	int num1 = 0;
	int num2 = 0;

	std::cout << "Enter a number \n";
	std::cin >> num1;

	std::cout << "Enter another number \n";
	std::cin >> num2;

	int sum = num1 + num2;

	std::cout << "Sum is: " << sum << std::endl;

	return 0;
}
