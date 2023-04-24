/** \file Matrix.h
* \brief Header file for the matrix library 
* @todo
*/
#pragma once

const int MAX_COL = 4;

double sumOfRow(const float mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const float mat[][MAX_COL], const int column, const int maxRow);
void fillWithRandomNum(float mat[][MAX_COL], const int maxRow);
void printMatrix(const float mat[][MAX_COL], const int maxRow);