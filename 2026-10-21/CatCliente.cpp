#include <iostream>

int main(int argc, char *argv[]) {
	char customerCategory;
	float amount, discount, finalAmount, discountPercentage;
	
	std::cout << "Ingrese la cateogoría del cliente: ";
	std::cin >> customerCategory;
	
	std::cout << "Ingrese el monto de la compra: ";
	std::cin >> amount;
	
	switch(customerCategory) {
	case 'A':
		discountPercentage = 10;
		
		if(amount > 200) {
			discountPercentage = 20;
		}
		
		break;
		
	case 'B':
		discountPercentage = 5;
		
		if(amount > 200) {
			discountPercentage = 15;
		}
		
		break;
		
	case 'C':
		discountPercentage = 5;
		
		break;
		
	default:
		break;
	}
	
	discount = amount * (discountPercentage / 100);
	finalAmount = amount - discount;
	
	std::cout << std::endl;
	
	std::cout << "El monto a pagar original es: " << amount << std::endl;
	std::cout << "El descuento es: " << discount << std::endl;
	std::cout << "El precio final a pagar es: " << finalAmount << std::endl;
	
	return 0;
}

