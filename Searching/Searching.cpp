
#include "pch.h"
#include <iostream>
#include <array>
using namespace std;



int binarySearch(int dataset[], int searchedVal, int size)
{
	
	int min = 0;
	int max = size - 1;
	
	
		int mid = (min+max)/2;
		if (searchedVal == dataset[mid])
		{
			return mid;
		}
		else if (searchedVal > mid)
		{
			min = mid + 1;
		}
		else
		{
			max = mid - 1;
		}
		if(min<max)

	
	return -1;
	
}

int main()
{
	int inputs[] = {1,2,3,4,5,6,7,3,9};
	cout<<binarySearch(inputs, 3, 9);
	
}