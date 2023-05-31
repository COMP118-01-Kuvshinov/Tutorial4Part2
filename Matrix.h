/** \file Matrix.h
* \brief Header file for the matrix library 
* @todo
*/
#pragma once

const int MAX_COL = 4;

double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
double* sumOfCols(const double mat[][MAX_COL], const int maxRow);
double* sumOfRows(const double mat[][MAX_COL], const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);

bool isRowOdd(const double mat[][MAX_COL], const int row, const int maxRow);
bool isColEven(const double mat[][MAX_COL], const int column, const int maxRow);
void fillWOnes(double mat[][MAX_COL], const int maxRow);