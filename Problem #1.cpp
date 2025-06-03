#include <iostream>
#include <iomanip>

using namespace std;

int Random_Number(int From, int To)
{
	int Rand_Number = rand() % (To - From + 1) + From;
	return  Rand_Number;
}

void Fill_Matrix_With_Random_Numbers(int Arr[3][3], short row, short col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Arr[i][j] = Random_Number(1, 100);
		}
	}
}

void Print_Matrix(int Arr[3][3], short row, short col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(3)<< Arr[i][j]<< " ";
		}
		cout << endl;
	}
}


int main() 
{
	srand((unsigned)time(NULL));
	int Matrix[3][3]; 

	Fill_Matrix_With_Random_Numbers(Matrix, 3, 3);

	cout << "The following is a 3x3 random matrix:\n\n";

	Print_Matrix(Matrix, 3, 3);

	system("pause>0");

	return 0;
}