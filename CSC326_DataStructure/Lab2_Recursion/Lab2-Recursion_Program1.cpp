/*******************************************************************
//Alberto Bolanos
//Lab 02/24/2016
//Program 1
********************************************************************/

#include <iostream>
using namespace std;

int multAns(double, int);

int mult = 0;

int main()
{
	double x;
	int n;
	int answer;

	cout << "Please enter the value of x: ";
	cin >> x;

	cout << "Please enter the value of n: ";
	cin >> n;

	answer = multAns(x, n);

	cout << "The answer is: " << answer << " TIME " << mult << endl;

	system("pause");
	return 0;
}

int multAns(double base, int exp)
{
	//base cases
	if (exp == 0 || base == 1) return 1; 
	if (exp == 1)return base;
	if (exp < 0) return -1;
	
	//How many multiplication 
	mult++;

	//Recursion case
	return base*multAns(base, exp - 1);
}
