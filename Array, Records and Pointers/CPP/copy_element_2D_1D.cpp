#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int array[n][m];
    int group[n];
    int numb[n];
    // int free[n];
    int newArray[1000];
    int newIndex = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        group[i] = newIndex;
        for (int j = 0; j < m; j++) {
            if (array[i][j] != 0) {
                newArray[newIndex] = array[i][j];
                newIndex++;
            }
        }
        numb[i] = newIndex - group[i];
    }

    for (int i = 0; i < newIndex; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << group[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << numb[i] << " ";
    }
    cout << endl;
}