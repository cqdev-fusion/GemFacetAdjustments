#include "aConversions.h"

#include <iostream>
#include <math.h>



double atanOfNum(double num){
	return atan(num)*180/M_PI;
}

double tanOfNum(double num){
	double tanOfOrginal = tan(num * M_PI / 180);
	return tanOfOrginal;
}


