// palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome;

void palindromeTester(string s)
{
	int n = s.length();
	for (int i = 0; i < n/2; i++)
	{
		if (s[i] != s[(n - 1) - i])
		{
			isPalindrome = false;
			break;
		}
		else
		{
			isPalindrome = true;
		}
	}
	if (isPalindrome)
	{
		cout << "ya boy e palndrom\n";
	}
	else
	{
		cout << "ya boy ne e palndrom\n";
	}
}

int main()
{
	string s;
	cin >> s;
	palindromeTester(s);
}

