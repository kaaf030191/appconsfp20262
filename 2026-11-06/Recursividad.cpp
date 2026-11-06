#include <iostream>

int factorial(int x) {
	if(x == 0) {
		return 1;
	}
	
	return x * factorial(x - 1);
}

int main(int argc, char *argv[]) {
	int number = 7;
	
	std::cout << "El factorial de " << number << " es: " << factorial(number);
	
	return 0;
}
