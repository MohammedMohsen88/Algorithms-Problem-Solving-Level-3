#pragma once
#include <iostream>

using namespace std;

namespace OutPutFormat

{
	void reset_Screen()
	{
		system("cls");
		system("color 0F");
	}

	string Tabs(short No_Of_Tabs)
	{
		string t = "";
		for (int i = 0; i <= No_Of_Tabs; i++)
		{
			t = t + "\t";
			
		}
		return t;
	}

	void Show_Game_Over_Screen()
	{
		cout << Tabs(1) << "---------------------------------------------------------\n\n";
		cout << Tabs(1) << "                   +++ Game Over +++                 \n";
		cout << Tabs(1) << "---------------------------------------------------------\n\n";

	}

}
