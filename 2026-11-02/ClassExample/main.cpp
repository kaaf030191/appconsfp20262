#include<iostream>

#include "MyMath.h"

int main (int argc, char *argv[]) {
	MyMath myMath;
	
	float result = myMath.add(7, 5);
	
	std::cout << "La suma es: " << result;
	
	return 0;
}
