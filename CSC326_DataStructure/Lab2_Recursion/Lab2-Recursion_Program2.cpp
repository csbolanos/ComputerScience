/*******************************************************************
//Alberto Bolanos
//Dr. Yumei Huo
//Lab 02/24/2016
//Program 2
********************************************************************/

#include <iostream>

using namespace std;

void insertionSort(int*, int);

int main()
{
	int numNumbers;
	int *arrayNumbers;

	cout << "Please enter how many number you will enter: ";
	cin >> numNumbers;

	arrayNumbers = new int[numNumbers];

	for (int i = 0; i < numNumbers; i++)
	{
		cout << "Please enter the number " << i + 1 << ": ";
		cin >> arrayNumbers[i];
	}


	insertionSort(arrayNumbers, numNumbers);
	for (int i = 1; i <= numNumbers; i++)
	{
		cout << "Number " << i << " is : " << arrayNumbers[i - 1] << endl;

	}


	system("pause");
	return 0;
}


void insertionSort(int *groupNumbers, int size)
{
	int temp, j;

	if (size > 1)
	{insertionSort(groupNumbers, size - 1);
	

	j = size-1;

		while (j > 0 && groupNumbers[j] < groupNumbers[j - 1])
		{
			temp = groupNumbers[j];
			groupNumbers[j] = groupNumbers[j - 1];
			groupNumbers[j - 1] = temp;
			j--;
		}
	}	
}
	