#include <iostream>

int main(){
	int num_1 = 0;

	while (num_1 <= 20){
		if (num_1 % 2 == 0)
			std::cout << num_1 << " ";
		++num_1;
	}
	
return 0;
}
