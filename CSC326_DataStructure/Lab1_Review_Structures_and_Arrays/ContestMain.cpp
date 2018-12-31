#include <iostream>
#include <fstream>
#include "ContestHeader.h" //structure header file

using namespace std;

/*********FP Start**********/
void readData(ifstream &data);
void printProgress(Contest programmers[],int size);
/*********FP End**********/

int main()
{
	//if you want to use the file program12.txt, just change the parameter
	//or uncomment the folloging line and comment the line 17:
	//ifstream readInfo("program12.txt");
	ifstream readInfo("program11.txt");

	readData(readInfo);
	printProgress(programmersContets, 10);

	system("pause");
	return 0;
}

/*********FD Start**********/

void readData(ifstream &data)
{//reading data from the text file
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

/*********FD End**********/
