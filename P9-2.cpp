/*
* File: P9-1.cpp
* Author : Braylon Rieman
* Date : 10 / 31 / 2024
*
* Description : Lab 9 Arrays and Functions
*
*/

#include <iostream>
#include <string>

//function prototypes
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

using namespace std;

int main(void)
{
	const int valuesSize = 6;
	int values[valuesSize] = { 1, 2, 3, 4, 5, 6};

	//checks if the data is increasing
	if (isSortedIncreasing(values, valuesSize))
		cout << "\nThe data is increasing.";
	else
		cout << "\nThe data is not increasing.";

	//checks if the data is decreasing
	if (isSortedDecreasing(values, valuesSize))
		cout << "\nThe data is decreasing.";
	else
		cout << "\nThe data is not decreasing.";

	//checks if the data has adjacent duplicates
	if (hasAdjacentDuplicates(values, valuesSize))
		cout << "\nThe data has adjacent duplicates.";
	else
		cout << "\nThe data does not have adjacent duplicates.";
}

bool isSortedIncreasing(int values[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] > values[i + 1])
			return(false);
	}
	return(true);
}

bool isSortedDecreasing(int values[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] < values[i + 1])
			return(false);
	}
	return(true);
}

bool hasAdjacentDuplicates(int values[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] == values[i + 1])
			return true;
	}
	return false;
}

bool hasDuplicates(int values[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int temp = values[i];
		for (int i = 0; i < size - 1; i++)
		{
			if(temp == values[i])
				return true;
		}
	}
	return false;
}//


