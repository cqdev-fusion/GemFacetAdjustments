//============================================================================
// Name        : GemAngleConversionWithRI.cpp
// Author      : CQ Dev
// Version     :
// Copyright   : Copyright 2023
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "UserInput.h"



int main() {

	// Critical Angle
//	double ri{};
//	double ni{};
//	double ca{};
//
//	double refactiveIndex = userInput(ri);
//	double enviroFactor = userInput(ni);
//	ca = criticalAngle(enviroFactor, ri);
//
//	std::cout << "The refractive index is: " << refractiveIndex << std::endl;
//	std::cout << "The critical angle is: " << ca << std::endl;

	UserInput user;

	double ri = user.input;
	std::cout << ri << std::endl;

	return 0;
}
