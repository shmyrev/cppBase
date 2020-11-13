#include <iostream>

int main(){
	int fnumber, snumber = 0;

	std::cout << "Enter first number: ";
	std::cin >> fnumber;

	std::cout << "Enter second number: ";
	std::cin >> snumber;

	if (fnumber == snumber){
		std::cout << "Statement equal!\n";
	}
	else {
		if (fnumber > snumber){
			std::cout << fnumber << " greater " << snumber << std::endl;
		}
		else {
			if (fnumber < snumber){
				std::cout << fnumber << " less " << snumber << std::endl;
			}
		}
	}
	return 0;
}
