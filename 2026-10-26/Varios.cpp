#include <iostream>

int main(int argc, char *argv[]) {
	char option;
	int value = -1;
	
	do {
		system("cls");
		
		std::cout << "===============MENU===============\n";
		std::cout << "a. Bucle for.\n";
		std::cout << "b. Bucle while.\n";
		std::cout << "c. Bucle do-while.\n";
		std::cout << "x. Salir.\n\n";
		std::cout << "Ingrese una opción: ";
		
		std::cin >> option;
		
		std::cout << std::endl;
		
		//i++ ==== i = i + 1;
		
		switch(option) {
		case 'a':
			for(unsigned short int i = 0; i < 5; i++) {
				std::cout << "Texto " << (i + 1) << std::endl;
			}
			
			break;
			
		case 'b':
			while(value != 0) {
				std::cout << "El valor actual de value es: " << value << std::endl;
				std::cout << "Ingrese el nuevo valor para value: ";
				std::cin >> value;
			}
			
			break;
			
		case 'c':
			std::cout << "Ingresaste a la opción \"c\".";
			
			break;
			
		case 'x':
			std::cout << "Adios, hasta la siguiente sesión.";
			
			break;
			
		default:
			std::cout << "Ingrese una opción correcta!!!";
			
			break;
		}
		
		std::cout << std::endl << std::endl;
		
		system("pause");
	} while(option != 'x');
	
	return 0;
}
