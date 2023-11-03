/*Name:Uche Hadassah
This program reads positive numbers into the array and outputs the average*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX = 100;
	double Array[MAX];
	double sum = 0.0;
	int counter = 0;
	cout << "Enter a number(-1 to end):";
	do
	{
		cin >> Array[counter];
		if (Array[counter] < -1)//Incase the user enters a negative number
		{
			cout << "Invalid number. Enter a POSITIVE number:";
			cin >> Array[counter];
		}
		else if (Array[counter] == -1)//When the sentinel is entered
		{
			break;
		}
		else
		{
			sum += Array[counter];
			counter++;//increment the counter
		}
	} while (Array[counter] != -1 && Array[counter] < MAX);
	double Average = sum / counter;
	cout << "The average of the numbers you entered is:" << Average;
	return 0;
}