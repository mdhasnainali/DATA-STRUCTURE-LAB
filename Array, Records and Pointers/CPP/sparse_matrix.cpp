#include <iostream>
using namespace std;

int *storing_sparse_matrix(int arr[4][4], int new_arr[], int row, int column)
{

    int k = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] != 0)
            {
                new_arr[k] = arr[i][j];
                k++;
            }
        }
    }
    return &new_arr[0];
}

int finding(int *arr, int row, int column)
{
    int index = (row * (row - 1)) / 2 + column;
    return *(arr + index);
}

int main()
{
    int A[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 6, 0},
        {1, 1, 1, 1}};

    int row = 4;
    int column = 4;
    int size = (row * (row + 1)) / 2;
    int B[size];
    storing_sparse_matrix(A, B, 4, 4);

    // Printing A32:

    cout << finding(B, 3, 2) << endl;
}