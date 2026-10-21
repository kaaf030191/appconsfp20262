#include <iostream>

int main(int argc, char *argv[]) {	
	float numberOne;
	float numberTwo;
	float result;
	char option;
	
	std::cout << "Programa de operaciones matemáticas." << std::endl << std::endl;
	
	std::cout << "Ingrese la operación que desea realizar (1 para suma, 2 para resta):";
	std::cin >> option;
	
	std::cout << "Ingrese el primer número: ";
	std::cin >> numberOne;
	
	std::cout << "Ingrese el segundo número: ";
	std::cin >> numberTwo;
	
	if(option == '1') {
		result = numberOne + numberTwo;
		
		std::cout << numberOne << " + " << numberTwo << " = " << result;
	} else {
		result = numberOne - numberTwo;
		
		std::cout << numberOne << " - " << numberTwo << " = " << result;
	}
	
	return 0;
}
