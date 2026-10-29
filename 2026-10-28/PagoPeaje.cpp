#include <iostream>

float calculateBaseRate(int type, int axes) {
	float result = 0;
	
	switch(type) {
	case 1:
		result = axes * 5;
		
		break;
		
	case 2:
		result = axes * 10;
		
		break;
		
	case 3:
		result = axes * 7;
		
		break;
	}
	
	return result;
}

float applyPeakHour(float baseRate, int hour) {
	float amount = 0;
	
	if((hour >= 7 && hour <= 9) ||(hour >= 18 && hour <= 20)) {
		amount = (20 * baseRate) / 100;
	}
	
	return amount;
}

float calculateFine(int type, float weight) {
	float amount = 0;
	
	if(type == 2 && weight > 15) {
		amount = 50 * (weight - 15);
	}
	
	return amount;
}

void processVehicle(int type, int axes, float weight, int hour, int isFrequent, float &x, int &y) {
	float baseRate = calculateBaseRate(type, axes);
	float peakHour = applyPeakHour(baseRate, hour);
	float extraAmount = calculateFine(type, weight);
	
	float totalAmount = (baseRate + peakHour + extraAmount);
	float discount = isFrequent == 1 ? (totalAmount * 0.10) : 0;
	float finalAmount = totalAmount - discount;
	
	std::cout << std::endl;
	
	std::cout << "Monto total: " << totalAmount << std::endl;
	std::cout << "Descuento por viajero frecuente: " << discount << std::endl;
	std::cout << "Monto final: " << finalAmount << std::endl << std::endl;
	
	x += finalAmount;
	y += extraAmount > 0 ? 1 : 0;
}

int main(int argc, char *argv[]) {
	int vehicleQuantity;
	
	int vehicleType, axesNumber, arrivalHour, isFrequent;
	float weight;
	
	float totalAmount = 0;
	int extraAmountQuantity = 0;
	
	std::cout << "Ingrese la cantidad de vehículos: ";
	std::cin >> vehicleQuantity;
	
	for(unsigned short int i = 0; i < vehicleQuantity; i++) {
		std::cout << "Ingrese el tipo de vehículo (1=Automóvil, 2=Camión, 3=Autobús): ";
		std::cin >> vehicleType;
		
		std::cout << "Ingrese el número de ejes del vehículo: ";
		std::cin >> axesNumber;
		
		std::cout << "Ingrese el peso de la carga del vehículo en toneladas: ";
		std::cin >> weight;
		
		std::cout << "Ingrese la hora de llegada del vehículo (en formato de 24 horas \"0-24\"): ";
		std::cin >> arrivalHour;
		
		std::cout << "Es un viajero frecuente? (1 = Sí, 0 = No): ";
		std::cin >> isFrequent;
		
		processVehicle(vehicleType, axesNumber, weight, arrivalHour, isFrequent, totalAmount, extraAmountQuantity);
	}
	
	std::cout << "nRecaudo total: " << totalAmount << std::endl;
	std::cout << "Cantidad de camiones multados: " << extraAmountQuantity;
	
	return 0;
}
