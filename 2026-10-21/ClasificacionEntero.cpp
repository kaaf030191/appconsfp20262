#include <iostream>

int main(int argc, char *argv[]) {
	int number;
	
	std::cout << "Ingrese un número: ";
	std::cin >> number;
	
//	Si (condicion) Entonces
//		...
//	SiNo
//		...
//	FinSi
	
	if(number > 0) {
		std::cout << "El número ingresado es positivo." << std::endl;
	} else {
		if(number < 0) {
			std::cout << "El número ingresado es negativo." << std::endl;
		} else {
			std::cout << "El número es cero." << std::endl;
		}
	}
	
	if(number != 0) {
		if(number % 2 == 0) {
			std::cout << "El número es par." << std::endl;
		} else {
			std::cout << "El número es impar." << std::endl;
		}
	}
	
	return 0;
}

