#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
    //Write your code here
    int i, j;
    // direction 1 is up (-1) is down
	int dir = -1;

    for(j=0; j<mCols; j++)
    {
        if(dir == -1)
        {
            for(i=0; i<nRows; i++)
            {
                cout << input[i][j] <<" ";
            }
        }

        else
        {
            for(i=nRows - 1; i>=0; i--)
            {
                cout << input[i][j] <<" ";
            }
        }

        dir *= -1;
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
	wavePrint(input, row, col);
	cout << endl;

}