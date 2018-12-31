#include <iostream>
#include <fstream>
#include "ContestHeader.h" //structure header file

using namespace std;

/*********Functions**********/
void readData(ifstream &data);
void printProgress(Contest programmers[],int size);


int main()
{

	ifstream readInfo("program11.txt");

	readData(readInfo);
	printProgress(programmersContets, 10);

	system("pause");
	return 0;
}


void readData(ifstream &data)
{
	int i = 0;
	while (!data.eof())
	{
		data >> programmersContets[i].ID >> programmersContets[i].linesCode >> programmersContets[i].linesComments;
		i++;
	}
}

void printProgress(Contest programmers[], int size)
{
	cout << "PROGRAMMER PROGRESS\n";
	cout << "Programmer\tLines of Code\tLines of Comments\n";

	for (int i = 0;i < size;i++)
	{
		cout << programmers[i].ID << "\t\t " << programmers[i].linesCode << "\t\t  " << programmers[i].linesComments<<endl;
	}
	cout << endl;
}