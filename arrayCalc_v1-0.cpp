#include <iostream>

int main(){
	int arr[5] = {11, 35, 62, 555, 989};
	int sum = 0;

	for (int i=0; i<5; ++i){
		sum += arr[i];
	}

	std::cout << sum << std::endl; // outputs 1652

return 0;
}
