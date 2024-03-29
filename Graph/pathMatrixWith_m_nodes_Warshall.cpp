#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int adjMatrix[n][n];
    int tempMatrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adjMatrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                tempMatrix[j][k] = adjMatrix[j][k] || (adjMatrix[j][i] && adjMatrix[i][k]);
            }
        }

        // Copy a 2d array: https://cplusplus.com/forum/general/263317/
        mempcpy(adjMatrix, tempMatrix, n * n * sizeof(int));  // memcpy(newArray, oldArray, totalSize)
        // copy(&tempMatrix[0][0], &tempMatrix[0][0]+n*n, &adjMatrix[0][0]);  // copy(old_starting_index, old_ending_index, new_starting_index)
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
