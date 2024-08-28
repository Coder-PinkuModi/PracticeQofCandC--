// Print the wave form of matrix

#include <iostream>
#include <vector>
using namespace std;

void printWaveForm(vector<vector<int> >matrix)
{
    int r1= matrix.size();
    int c1=matrix[0].size();

    for (int i = 0; i < c1; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < r1; j++)
                cout << matrix[j][i] << " ";
        }
        else
        {
            for (int j = r1 - 1; j >= 0; j--)
                cout << matrix[j][i] << " ";
        }
    }
}


int main()
{
    int r1, c1;

    cout << "Enter the rows and columns of the matrix1 respectively: ";
    cin >> r1;
    cin >> c1;
    cout << "Enter the rows and columns of the matrix2 respectively: ";

    vector<vector<int>> matrix1(r1, vector<int>(c1));
    cout << "Enter the data in the matrix row major order: ";
    for (int i = 0; i < r1; i++)
    { // taking the data of the matrix
        for (int j = 0; j < c1; j++)
            cin >> matrix1[i][j];
    }

    // printing in wave form
    printWaveForm(matrix1);

    return 0;
}
