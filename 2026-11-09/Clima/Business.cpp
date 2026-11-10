#include <iostream>
#include <cmath>

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
	
	while(!isValidRange(daysQuantity, 1, 30)) {
		std::cout << "Ingrese un valor correcto (Entre 1 y 30): ";
		std::cin >> daysQuantity;
	}
}

void Business::registerTemperature() {
	for(unsigned int i = 0; i < daysQuantity; i++) {
		std::cout << "\n\nDatos del día " << (i + 1) << ": \n\n";
		for(unsigned int j = 0; j < 2; j++) {
			switch(j) {
			case 0:
				std::cout << "Ingrese la temperatura de la mañana (Valor entre -10 y 50): ";
				std::cin >> morningTemperatureTemp;
				
				while(!isValidRange(morningTemperatureTemp, -10, 50)) {
					std::cout << "Ingrese la temperatura de la mañana (Valor entre -10 y 50): ";
					std::cin >> morningTemperatureTemp;
				}
				
				if(maxTemperature < morningTemperatureTemp) {
					maxTemperature = morningTemperatureTemp;
					temperatureMaxDay = i + 1;
					temperatureMaxSlot = true;
				}
				
				//totalTemperature += morningTemperatureTemp;
				
				break;
				
			case 1:
				std::cout << "Ingrese la temperatura de la tarde (Valor entre -10 y 50): ";
				std::cin >> afternoonTemperatureTemp;
				
				while(!isValidRange(afternoonTemperatureTemp, -10, 50)) {
					std::cout << "Ingrese la temperatura de la tarde (Valor entre -10 y 50): ";
					std::cin >> afternoonTemperatureTemp;
				}
				
				if(maxTemperature < afternoonTemperatureTemp) {
					maxTemperature = afternoonTemperatureTemp;
					temperatureMaxDay = i + 1;
					temperatureMaxSlot = false;
				}
				
				//totalTemperature += afternoonTemperatureTemp;
				
				break;
			}
		}
		
		//if(afternoonTemperatureTemp - morningTemperatureTemp > 5 || afternoonTemperatureTemp - morningTemperatureTemp < -5)
		if(std::abs(afternoonTemperatureTemp - morningTemperatureTemp) > 5) {
			temperatureInestability++;
		}
		
		totalTemperature += (morningTemperatureTemp + afternoonTemperatureTemp);
	}
	
	totalAverageTemperature = totalTemperature / (daysQuantity * 2);
	
	int tempTotalAverageTemperature = (int)totalAverageTemperature;
	
	if(tempTotalAverageTemperature >= -10 && tempTotalAverageTemperature <= 0) {
		climateType = "Frío extremo";
	}
	
	if(tempTotalAverageTemperature > 0 && tempTotalAverageTemperature <= 15) {
		climateType = "Frío";
	}
	
	if(tempTotalAverageTemperature > 15 && tempTotalAverageTemperature <= 25) {
		climateType = "Templado";
	}
	
	if(tempTotalAverageTemperature > 25 && tempTotalAverageTemperature <= 35) {
		climateType = "Cálido";
	}
	
	if(tempTotalAverageTemperature > 35) {
		climateType = "Calor extremo";
	}
}

void Business::showData() {
	std::cout << "\n\nPromedio global de la temperatura: " << totalAverageTemperature << std::endl;
	std::cout << "Pico más alto el día: " << temperatureMaxDay << " / En el turno " << (temperatureMaxSlot ? "mañana" : "tarde.") << std::endl;
	std::cout << "Cantida de días de inestabilidad climática: " << temperatureInestability << std::endl;
	std::cout << "Tipo de clima: " << climateType << std::endl;
}
