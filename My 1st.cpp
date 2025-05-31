#include <iostream>   							

using namespace std;

int Random_Number(int From, int To)
{
	int Rand_Number = rand() % (To - From + 1) + From;
	return  Rand_Number;
}

void Fill_Array(int arr[3][3])
{
	for (int i = 0; i< 3; i++)
	{
		for (int j = 0;j < 3; j++)
		{
			arr[i][j] = Random_Number(0, 100); 
		}
	}
}

void Print_Array(int arr[3][3])
{
	{
		for (int i = 0; i< 3; i++)
		{
			for (int j = 0;j < 3; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}

}


int main()

{
	srand((unsigned)time(NULL));

	int arr[3][3]; 
	
	 Fill_Array( arr); 
	 cout << "The following is a 3x3 random matrix:\n\n";
	 Print_Array(arr); 

	 system("pause>0");
	return 0;
}

