/*Calculating Average: Write a program that reads a sequence of positive doubles into 
an array (-1 to finish) and outputs the array that was read along with the average*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX = 100;
	double Array[MAX];
	double sum = 0.0;
	double Average;
	int counter = 0;
	cout << "Enter a number(-1 to end):";
	do
	{
		cin >> Array[counter];
		if (Array[counter] < -1)
		{
			cout << "Invalid number. Enter a POSITIVE number:";
			cin >> Array[counter];
		}
		else if (Array[counter] == -1)
		{
			break;
		}
		sum += Array[counter];
	} while (Array[counter] != -1 && Array[counter] > -1);
	Average = sum / counter;
	cout << "The average of the numbers you entered is:" << Average;
	return 0;
}