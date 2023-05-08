/** \file Matrix.cpp
* \brief Implementation file for the matrix library
* @todo
*/

#include <iostream>
#include "Matrix.h"
#include <cassert>

using namespace std;

/**
* @todo
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow)
{
	cout << "Content of Matrix is:" << endl;
	for (int i = 0; i < maxRow; i++)
	{
		cout << "R" << i + 1 << ": ";
		for (int j = 0; j < MAX_COL; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

/**
* @todo
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow)
{
	assert((column - 1) >= 0 && (column - 1) < MAX_COL);
	assert(maxRow > 0);

	double sum = 0;

	for (int i = 0; i < maxRow; i++)
	{
		sum += mat[i][column - 1];
	}

	return sum;
}

/**
* @todo
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow)
{
	assert((row - 1) >= 0 && (row - 1) < maxRow);
	assert(MAX_COL > 0);
	double sum = 0;

	for (int i = 0; i < MAX_COL; i++)
	{
		sum += mat[row - 1][i];
	}

	return sum;
}

/**
* @todo
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow)
{
	for (int i = 0; i < maxRow; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			mat[i][j] = rand() % 100;
		}
	}
}