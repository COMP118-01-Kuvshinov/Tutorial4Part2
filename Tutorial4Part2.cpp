/** \file Tutorial4Part2.cpp
 *  \brief     Matrix program
 *  \details   Small program that works with a matrix of numbers
 *  \author    Igor Kuvshinov
 *  \version   0.1
 *  \date      30/05/2023
 *  \bug       None
 *  \copyright University of Nicosia.
 */

#include <iostream>
#include "Matrix.h"

using namespace std;

/**
 * <code>main</code> is the main function of this program.
 * <BR>
 * @return Returns 0 if success, any other value otherwise.
 */
int main()
{
    srand(time(0));

    const int MAX_ROW = 4;

    double mat[MAX_ROW][MAX_COL] = { 1, 2, 3, 4, 5};
    int choice, column, row;

    do
    {
        cout << "1: Print Matrix" << endl
            << "2: Sum of the column" << endl
            << "3: Sum of the row" << endl
            << "4: Fill with random" << endl
            << "5: Sums of columns" << endl
            << "6: Sums of rows" << endl
            << "7: If all nums of the row are odd" << endl
            << "8: If all nums of the column are even" << endl
            << "9: Fill matrix only with 1" << endl
            << "10: Exit" << endl
            << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            printMatrix(mat, MAX_ROW);
            break;
        case 2:
            cout << "Enter a column(has to be less than 5): ";
            cin >> column;
            while (column < 1 || column > 4)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> column;
            }

            cout << "The sum is: " << sumOfCol(mat, column, MAX_ROW) << endl;
            break;
        case 3:
            cout << "Enter a row(has to be less than 5): ";
            cin >> row;
            while (row < 1 || row > 4)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> row;
            }

            cout << "The sum is: " << sumOfRow(mat, row, MAX_ROW) << endl;
            break;
        case 4:
            fillWithRandomNum(mat, MAX_ROW);
            cout << "The array was filled with random numbers" << endl;
            break;
        case 5:
            double* sums;

            sums = sumOfCols(mat, MAX_ROW);
            for (int i = 0; i < MAX_COL; i++)
            {
                cout << "Sum of " << i + 1 << ": " << sums[i] << endl;
            }

            delete[] sums;
            break;
        case 6:
            double* sums2;

            sums2 = sumOfRows(mat, MAX_ROW);
            for (int i = 0; i < MAX_ROW; i++)
            {
                cout << "Sum of " << i + 1 << ": " << sums2[i] << endl;
            }

            delete[] sums2;
            break;
        case 7:
            cout << "Enter a row(has to be less than 5): ";
            cin >> row;
            while (row < 1 || row > 4)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> row;
            }

            cout << "Row " << row << ": ";
            if (isRowOdd(mat, row, MAX_ROW))
            {
                cout << "all numbers are odd." << endl;
            }
            else
            {
                cout << "not all numbers are odd." << endl;
            }
            break;
        case 8:
            cout << "Enter a column(has to be less than 5): ";
            cin >> column;
            while (column < 1 || column > 4)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> column;
            }

            cout << "Column " << column << ": ";
            if (isColEven(mat, column, MAX_ROW))
            {
                cout << "all numbers are even." << endl;
            }
            else
            {
                cout << "not all numbers are even." << endl;
            }
            break;
        case 9:
            fillWOnes(mat, MAX_ROW);
        case 10:
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
        cout << endl;
    } while (choice != 10);

    cout << "Have a nice day!" << endl;

    return 0;
}