/** \file Matrix.cpp
* \brief Implementation file for the matrix library
* \author    Igor Kuvshinov
* \version   0.1
* \date      30/05/2023
* \bug       None
* \copyright University of Nicosia.
*/

#include <iostream>
#include "Matrix.h"
#include <cassert>

using namespace std;

/**
* <code>printMatrix</code> displays the matrix.
* <BR>
* @param mat[][MAT_COL] The array of numbers.
* @param maxRow The number of rows in the array.
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
}

/**
* <code>sumOfCol</code> calculates sum of numbers on a column
* specified by user.
* <BR>
* @param mat[][MAT_COL] The array of numbers.
* @param column Column specified by user.
* @param maxRow The number of rows in the array.
* @return Returns the sum of numbers on the column specified by user.
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
* <code>sumOfCols<code> Calculates the sum of numbers of all columns.
* WARNING: Caller must use delete[] on the return array.
* <BR>
* @param mat[][MAT_COL] The array of numbers.
* @param maxRow The number of rows in the array.
* @return Returns the sum of all columns as a dynamically
* created array. Remember to delete[]
*/
double* sumOfCols(const double mat[][MAX_COL], const int maxRow)
{
	double* sums = new double[MAX_COL] {0};

	for (int i = 0; i < maxRow; i++)
	{
		sums[i] = sumOfCol(mat, i + 1, maxRow);
	}

	return sums;
}

/**
* <code>sumOfRow</code> calculates sum of numbers on a row
* specified by user.
* <BR>
* @param mat[][MAT_COL] The array of numbers.
* @param row Row specified by user.
* @param maxRow The number of rows in the array.
* @return Returns the sum of numbers on the column specified by user.
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
* <code>sumOfRows<code> Calculates the sum of numbers of all rows.
* WARNING: Caller must use delete[] on the return array.
* <BR>
* @param mat[][MAT_COL] The array of numbers.
* @param maxRow The number of rows in the array.
* @return Returns the sum of all rows as a dynamically
* created array. Remember to delete[]
*/
double* sumOfRows(const double mat[][MAX_COL], const int maxRow)
{
	double* sums = new double[maxRow] {0};

	for (int i = 0; i < maxRow; i++)
	{
		sums[i] = sumOfRow(mat, i + 1, maxRow);
	}

	return sums;
}

/**
* <code>fillWithRandomNum</code> Fills the array with random numbers.
* <BR>
* @param mat[][MAT_COL] The array of numbers.
* @param maxRow The number of rows in the array.
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

/**
* <code>isRowOdd</code> If all numbers on the row are odd returns true.
* <BR>
* @param mat[][MAT_COL] The array of numbers.
* @param row Row specified by user.
* @param maxRow The number of rows in the array.
* @return Returns <code>false</code> with even numbers.
*/
bool isRowOdd(const double mat[][MAX_COL], const int row, const int maxRow)
{
	assert((row - 1) >= 0 && (row - 1) < maxRow);
	assert(MAX_COL > 0);

	for (int i = 0; i < MAX_COL; i++)
	{
		if ((int)mat[row - 1][i] % 2 == 0)
		{
			return false;
		}
	}

	return true;
}

/**
* <code>isColEven</code> If all numbers on the column are even returns true.
* <BR>
* @param mat[][MAT_COL] The array of numbers.
* @param column Column specified by user.
* @param maxRow The number of rows in the array.
* @return Returns <code>false</code> with odd numbers.
*/
bool isColEven(const double mat[][MAX_COL], const int column, const int maxRow)
{
	assert((column - 1) >= 0 && (column - 1) < MAX_COL);
	assert(maxRow > 0);

	for (int i = 0; i < maxRow; i++)
	{
		if ((int)mat[i][column - 1] % 2 != 0)
		{
			return false;
		}
	}

	return true;
}

void fillWOnes(double mat[][MAX_COL], const int maxRow)
{
	for (int i = 0; i < maxRow; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			mat[i][j] = 1;
		}
	}
}