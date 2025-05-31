#pragma once
#include <iostream>

using namespace std;

namespace MyInPutLib

{
	int Read_Positive_Number_In_Range(string Message, int From, int To)
	{
		int N = 0;
		do
		{
			cout << Message << endl;
			cin >> N;

			while (cin.fail())
			{
				// user didn't input a number
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Invalid Number, Enter a valid one:" << endl;
				cin >> N;
			}

		} while (N <= From || N > To);

		return N;
	}

	int Random_Number(int From, int To)
	{
		int Rand_Number = rand() % (To - From + 1) + From;
		return  Rand_Number;
	}


}