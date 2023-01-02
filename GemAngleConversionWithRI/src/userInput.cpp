/*
 * ri_input.cpp
 *
 *  Created on: 2 Jan 2023
 *      Author: fusion
 */
#include <iostream>
#include "userInput.h"

double ri{};
double ni{};

double ri_input(double num){
	std::cout << "Enter the refractive index: ";
	std::cin >> ri;
	return ri;
}

double ni_input(double num){
	std::cout << "Enter the ni: ";
	std::cin >> ni;
	return ni;
}




