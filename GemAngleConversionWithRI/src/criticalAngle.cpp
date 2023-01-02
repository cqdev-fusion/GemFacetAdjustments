/*
 * criticalAngle.cpp
 *
 *  Created on: 2 Jan 2023
 *      Author: fusion
 */

#include "criticalAngle.h"
#include "aConversions.h"
#include <math.h>

double criticalAngle(double ni, double ri){
	double angle{};
	double a = asin(ni/ri);
	angle = a * 180 / M_PI;
	return angle;
}


