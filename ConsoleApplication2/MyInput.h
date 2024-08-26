#pragma once
#include <iostream>
using namespace std;

namespace MyInput
{

	int PosetiveNumber()
	{
		int Number = 0;
		do
		{
			cout << "Plaese Enter Posetive Number : ";
			cin >> Number;

		} while (Number < 0);
		return Number;
	}


}

