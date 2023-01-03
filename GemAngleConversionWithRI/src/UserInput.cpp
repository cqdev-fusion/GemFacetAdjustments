/*
 * UserInput.cpp
 *
 *  Created on: 3 Jan 2023
 *      Author: fusion
 */

#include "UserInput.h"
#include <iostream>

UserInput::UserInput() {
	// TODO Auto-generated constructor stub
	std::cout << "Enter a number: ";
	std::cin >> input;
}

UserInput::~UserInput() {
	// TODO Auto-generated destructor stub
}
