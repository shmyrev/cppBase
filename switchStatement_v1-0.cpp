#include <iostream>

int main(){
	int num_1 = 0;

	std::cout << "How old are you?\n";
	std::cin >> num_1;

	switch (num_1){
		case 16:
			std::cout << "Too young\n";
			break;
		case 64:
			std::cout << "Adult\n";
			break;
		case 150:
			std::cout << "Senior\n";
			break;
		default:
			std::cout << "Dont live that much\n";
	}

return 0;
}
