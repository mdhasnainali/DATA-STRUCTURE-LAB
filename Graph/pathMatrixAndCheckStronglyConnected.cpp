#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int adjMatrix[n][n];
    int multipliedMatrix[n][n];
    int tempMatrix[n][n];
    int sumMatrix[n][n];
    int pathMatrix[n][n];
    int numberOfZero = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adjMatrix[i][j];
        }
    }

    // Part A
    for (int i = 0; i < n; i++) {
        cout << "Adjacent of " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            if (adjMatrix[i][j] != 0) cout << j + 1 << " ";
        }
        cout << endl;
    }

    // Part B - D
    mempcpy(multipliedMatrix, adjMatrix, n * n * sizeof(int));
    mempcpy(sumMatrix, adjMatrix, n * n * sizeof(int));

    for (int i = 0; i < n - 1; i++) {  // n-1 because doesn't need length 1

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                int temp = 0;
                for (int l = 0; l < n; l++) {
                    temp += adjMatrix[j][l] * multipliedMatrix[l][k];
                }
                tempMatrix[j][k] = temp;
                sumMatrix[j][k] += temp;
            }
        }
        mempcpy(multipliedMatrix, tempMatrix, n * n * sizeof(int));
    }

    // Sum Matrix to Path Matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (sumMatrix[i][j] == 0) {
                pathMatrix[i][j] = 0;
                numberOfZero++;
            } else
                pathMatrix[i][j] = 1;
        }
    }

    // Printing Matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << pathMatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    if (numberOfZero == 0)
        cout << "Strongly Connected Graph" << endl;
    else
        cout << "Not Strongly Connected Graph" << endl;
}
