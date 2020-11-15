#include <iostream>

int main(){
	int score = 5;
	std::cout << &score << std::endl; // output adress memory

	int *scorePtr;
	scorePtr = &score;
	std::cout << scorePtr << std::endl;

	int *ip; // pointer to an integer
	double *dp; // pointer to a double
	float *fp; // pointer to a float
	char *ch; // pointer to a character

return 0;
}
