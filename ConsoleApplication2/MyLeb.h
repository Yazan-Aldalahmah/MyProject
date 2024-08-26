#pragma once
#include <iostream>
using namespace std;
 
 namespace MyLeb
{

	void test()
	{
		cout << "Hi :-) "<<endl;
	}

	int ReadNumber()
	{
		int Number = 0;
		cout << "please enter Number : ";
		cin >> Number;
		return Number;
	}


}
