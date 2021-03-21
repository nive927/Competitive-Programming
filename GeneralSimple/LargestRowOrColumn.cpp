#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    int row_index = 0;
    int col_index = -1;
    int i, j;

    int sum = 0, msum = -2147483648;

    // row sum
    for(i=0; i<nRows; i++)
    {
        sum = 0;

        for(j=0; j<mCols; j++)
        {
            sum += input[i][j];
        }

        if(sum > msum)
        {
            msum = sum;
            row_index = i;
        }
    }

    // col sum
    for(i=0; i<mCols; i++)
    {
        sum = 0;

        for(j=0; j<nRows; j++)
        {
            sum += input[j][i];
        }

        if(sum > msum)
        {
            msum = sum;
            col_index = i;
        }
    }

    if(col_index != -1)
    {
        cout << "column " << col_index << " " << msum;
    }

    else
    {
        cout << "row " << row_index << " " << msum;
    }
}

int main()
{

	int row, col;
	cin >> row >> col;

	int **input = new int *[row];
	for (int i = 0; i < row; i++)
	{
		input[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			cin >> input[i][j];
		}
	}

	findLargest(input, row, col);
	cout << endl;

}