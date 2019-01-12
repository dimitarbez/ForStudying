// Target.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>

float distanceCalc(int x, int y)
{
	float result;

	result = sqrt(pow(x,2)+pow(y,2));

	return result;
}

int main()
{
	int x, y;
	std::cin >> x >> y;
	std::cout << distanceCalc(x, y);
}

