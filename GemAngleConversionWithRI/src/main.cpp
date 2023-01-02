//============================================================================
// Name        : GemAngleConversionWithRI.cpp
// Author      : CQ Dev
// Version     :
// Copyright   : Copyright 2023
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>

#include "aConversions.h"
#include "userInput.h"
#include "criticalAngle.h"



int main() {

	// Critical Angle
	const double ri{};
	const double ni{};
	double ca{};

	double refractiveIndex = ri_input(ri);
	double enviroFactor = ni_input(ni);
	ca = criticalAngle(enviroFactor, refractiveIndex);

//	std::cout << "The critical angle is: " << toDegs(ca) << std::endl;
	std::cout << "The critical angle is: " << ca << std::endl;

	return 0;
}
