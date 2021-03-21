#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int i, k = 0, l = 0;
    int m = nRows;
    int n = nCols;

    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while (k < m && l < n)
    {
    	/* Print the first row from
           the remaining rows */
        for (i = l; i < n; ++i)
        {
            cout << input[k][i] << " ";
        }

        k++;

        /* Print the last column
         from the remaining columns */
        for (i = k; i < m; ++i)
        {
            cout << input[i][n - 1] << " ";
        }
        n--;

        /* Print the last row from
                the remaining rows */
        if (k < m)
        {
            for (i = n - 1; i >= l; --i)
            {
                cout << input[m - 1][i] << " ";
            }
            m--;
        }

        /* Print the first column from
                   the remaining columns */
        if (l < n)
        {
            for (i = m - 1; i >= k; --i)
            {
                cout << input[i][l] << " ";
            }
            l++;
        }
    }

}

int main()
{


	int row, col;
	cin >> row >> col;
	int **matrix = new int *[row];

	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			cin >> matrix[i][j];
		}
	}
	spiralPrint(matrix, row, col);

	for (int i = 0; i < row; ++i)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	cout << endl;

}