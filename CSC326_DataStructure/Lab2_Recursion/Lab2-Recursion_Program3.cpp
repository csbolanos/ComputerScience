/*******************************************************************
//Alberto Bolanos
//Dr. Yumei Huo
//Lab 02/24/2016
//Program 3
********************************************************************/

#include <iostream>

using namespace std;

void TowerHanoi(int n,char source, char desti, char spare );


int main()
{
	int disks;


	cout << "Please enter the number of disks: ";
	cin >> disks;
	cout << "The sequence of moves involved in the tower of Honoi are: \n\n";

	TowerHanoi( disks,'A',  'C' , 'B'  );
	
	system("pause");
	return 0;
}

void TowerHanoi(int n, char source, char spare, char dest)
{
	if (n>0)
	{
		TowerHanoi(n - 1, source, dest, spare);
		cout << "Move disc " << n << " from " << source << " to " << dest << endl;
		TowerHanoi(n - 1, spare, source, dest);
	}
}

