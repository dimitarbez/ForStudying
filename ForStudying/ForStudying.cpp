// ForStudying

#include "pch.h"
#include <iostream>

using namespace std;
char x;
int y;
int j;
int i;
void calculate(char x, int y)
{	
	int xboi = (int)x - 96;
	cout << xboi << y << endl;
	for (i = xboi ,j = y; i <=8 && i>=1 && j>=1 && j<=8; i++, j++)
	{
		char place = (char)i + 96;
		cout << place << j << endl;
	}
	for (i = xboi, j = y; i <= 8 && i >= 1 && j >= 1 && j <= 8; i++, j--)
	{
		char place = (char)i + 96;
		cout << place << j << endl;
	}
	for (i = xboi ,j = y; i <=8 && i>=1 && j>=1 && j<=8; i--, j++)
	{
		char place = (char)i + 96;
		cout << place << j << endl;
	}
	for (i = xboi, j = y; i <= 8 && i >= 1 && j >= 1 && j <= 8; i--, j--)
	{
		char place = (char)i + 96;
		cout << place << j << endl;
	}
	for (i = xboi, j = y; i <= 8 && i >= 1 && j >= 1 && j <= 8; i++)
	{
		char place = (char)i + 96;
		cout << place << j << endl;
	}
	for (i = xboi, j = y; i <= 8 && i >= 1 && j >= 1 && j <= 8; i--)
	{
		char place = (char)i + 96;
		cout << place << j << endl;
	}
	for (i = xboi, j = y; i <= 8 && i >= 1 && j >= 1 && j <= 8; j--)
	{
		char place = (char)i + 96;
		cout << place << j << endl;
	}
	for (i = xboi, j = y; i <= 8 && i >= 1 && j >= 1 && j <= 8; j++)
	{
		char place = (char)i + 96;
		cout << place << j << endl;
	}

}

int main()
{
	cin >> x >> y;
	calculate(x,y);
}

