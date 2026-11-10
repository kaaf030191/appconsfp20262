#include<iostream>
#include <windows.h>

#include "Business.h"

int main (int argc, char *argv[]) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	Business business;
	
	business.registerDaysQuantity();
	business.registerTemperature();
	business.showData();
	
	return 0;
}
