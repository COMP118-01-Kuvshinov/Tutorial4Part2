/** Tutorial4Part2.cpp
* @todo
*/

#include <iostream>
#include "Matrix.h"

using namespace std;

/**
* @todo
*/
int main()
{
    const int MAX_ROW = 4;

    float mat[MAX_ROW][MAX_COL] = { 1, 2, 3, 4, 5 };

    printMatrix(mat, MAX_ROW);

    cout << "Have a nice day!" << endl;
}