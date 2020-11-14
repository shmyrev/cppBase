#include <iostream>

int main(){
	int num_1 = 0;
	int num_2 = 0;
	int total = 0;
	while (num_1 < 5){
		std::cin >> num_2;
		total = total + num_2;
		++num_1;
	}
	std::cout << total <<std::endl;
	return 0;
}
