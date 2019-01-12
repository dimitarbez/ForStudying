
#include "pch.h"
#include <iostream>
#include <array>
using namespace std;


int binarySearch(int dataset[], int searchedVal, int max, int min)
{

	
	if (min > max)
	{
		return -1;
	}
		

	int mid = (min + max) / 2;
	if (searchedVal == dataset[mid])
	{
		return mid;
	}
	else if (searchedVal > dataset[mid])
	{
		return binarySearch(dataset, searchedVal, max, mid+1);
	}
	else
	{
		return binarySearch(dataset, searchedVal, mid - 1, min);
	}

		

}

int main()
{

	int inputs[] = { 1,2,3,4,5,6,7,3,9 };
	cout << binarySearch(inputs, 5, 8,0);

}