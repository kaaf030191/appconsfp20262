#include "Business.h"

bool Business::isValidRange(int value, int min, int max) {
//	bool inRange;
//	
//	if(value < min || value > max) {
//		inRange = false;
//	} else {
//		inRange = true;
//	}
//	
//	return inRange;
	
	return !(value < min || value > max);
}

void Business::registerDaysQuantity() {
	std::cout << "Ingrese la cantidad de días para el periodo a analizar (Entre 1 y 30): ";
	std::cin >> daysQuantity;
	
	while(isValidRange(daysQuantity, 1, 30)) {
		std::cout << "Ingrese un valor correcto (Entre 1 y 30): ";
		std::cin >> daysQuantity;
	}
}
