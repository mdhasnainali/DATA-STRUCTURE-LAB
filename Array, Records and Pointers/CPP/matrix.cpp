#include <iostream>
using namespace std;

void print_array(int arr[4][4],int row, int column);
void add_two_matrixes(int matrix1[4][4], int matrix2[4][4]);
void subtract_two_matrixes(int matrix1[4][4], int matrix2[4][4]);
void multiply_two_matrixes(int matrix1[4][4], int matrix2[4][4]);

int main()
{
    int matrix1[4][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
    };
    int matrix2[4][4] = {
    {16,15,14,13},
    {12,11,10,9},
    {8,7,6,5},
    {4,3,2,1}
    };
    add_two_matrixes(matrix1,matrix2);
    subtract_two_matrixes(matrix1,matrix2);
    multiply_two_matrixes(matrix1,matrix2);
}

void add_two_matrixes(int matrix1[4][4], int matrix2[4][4]){

    int row = 4;
    int column = 4;

    int matrix[4][4];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            matrix[i][j] = matrix1[i][j]+matrix2[i][j];
        }
    }

    print_array(matrix,row,column);

}

void subtract_two_matrixes(int matrix1[4][4], int matrix2[4][4]){

    int row = 4;
    int column = 4;

    int matrix[4][4];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            matrix[i][j] = matrix1[i][j]-matrix2[i][j];
        }
    }

    print_array(matrix,row,column);

}

void multiply_two_matrixes(int matrix1[4][4], int matrix2[4][4]){

    int row = 4;
    int column = 4;

    int matrix[4][4];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            int sum=0;
            for(int k=0;k<row;k++){
                sum = sum + matrix1[i][j]*matrix2[k][j];
            }
            matrix[i][j] = sum;
        }
    }

    print_array(matrix,row,column);

}

void print_array(int arr[4][4],int row, int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}