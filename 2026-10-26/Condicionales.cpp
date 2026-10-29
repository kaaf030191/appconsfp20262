#include <iostream>

int main(int argc, char *argv[]) {
	bool x = true;
	int number = 6;
	std::string tempText = "";
	
	if((x && number > 7) || number == 7) {
		std::cout << "Se ingresó a la condición";
	} else {
		std::cout << "No se ingresó a la condición";
	}
	
	std::cout << "\n\n=================================\n\n";
	
//	if(x) {
//		std::cout << "Se ingresó a la condición";
//	} else {
//		std::cout << "No se ingresó a la condición";
//	}
	
	tempText = (x && number > 7) ? "Se ingresó a la condición" : "No se ingresó a la condición";
	
	std::cout << tempText;
	
	return 0;
}
