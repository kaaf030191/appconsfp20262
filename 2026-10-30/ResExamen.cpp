#include <iostream>

int menu() {
	int option;
	
	std::cout << "===========MENU===========\n";
	std::cout << "1. Descuentos.\n";
	std::cout << "2. Decimal a binario.\n";
	std::cout << "3. Conjetura de Collatz.\n";
	std::cout << "0. Salir.\n\n";
	std::cout << "Ingrese una opción: ";
	
	std::cin >> option;
	
	return option;
}

void discountExample() {
	float amount, discount, discountPercentage;
	bool isFrequent;
	
	std::cout << "Ingrese el monto: ";
	std::cin >> amount;
	
	std::cout << "El cliente es frecuente? (1=Si, 0=No) ";
	std::cin >> isFrequent;
	
	if(amount >= 200) {
		discountPercentage = 0.15;
	}
	
	if(amount >= 100 && amount < 200) {
		discountPercentage = 0.10;
	}
	
	if(amount < 100) {
		discountPercentage = 0;
	}
	
	if(isFrequent) {
		discountPercentage += 0.05;
	}
	
	discount = amount * discountPercentage;
	
	std::cout << "\nEl monto a pagar es: " << (amount - discount) << std::endl;
	std::cout << "El descuento aplicado es: " << discount << std::endl << std::endl;
	
	system("pause");
}

void intToBinary() {
	int number;
	int newNumber;
	std::string numberBinary = "";
	
	std::cout << "Ingrese un número entero: ";
	std::cin >> number;
	
	newNumber = number;
	
	while(newNumber > 1) {
		newNumber = number / 2;
		
		numberBinary = (newNumber > 1 ? std::to_string(number % 2) : std::to_string(newNumber) + (std::to_string(number % 2))) + numberBinary;
		
		number = number / 2;
	}
	
	std::cout << "\nEl número ingresado, en binario es: " << numberBinary << std::endl << std::endl;
	
	system("pause");
}

int main(int argc, char *argv[]) {
	int option;
	
	do {
		system("cls");
		option = menu();
		
		std::cout << std::endl;
		
		switch(option) {
		case 1:
			discountExample();
			
			break;
			
		case 2:
			intToBinary();
			
			break;
			
		case 3:
			break;
			
		default:
			std::cout << "\nIngrese una opción correcta.";
			
			break;
		}
	} while(option != 0);
	
	return 0;
}
