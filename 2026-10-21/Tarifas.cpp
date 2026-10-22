#include <iostream>

int main(int argc, char *argv[]) {
	int hours;
	int totalPrice;
	int extraHours;
	
	std::cout << "Ingres el número de horas estacioando: ";
	std::cin >> hours;
	
	if(hours == 1) {
		totalPrice = 5;
	} else {
		if(hours > 1 && hours <= 4) {
			extraHours = hours - 1;
			totalPrice = 5 + (extraHours * 3);
		} else {
			totalPrice = 15;
		}
	}
	
	std::cout << "El costo a pagar es de: S/" << totalPrice;
	
	return 0;
}

