#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int adjMatrix[n][n];

    for(int i =0; i< n; i++){
        for(int j= 0; j< n; j++){
            cin>>adjMatrix[i][j];
        }
    }

    for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            for(int k =0; k<n; k++){
                if(adjMatrix[j][k]!=1){
                    adjMatrix[j][k] = adjMatrix[j][i] && adjMatrix[i][k];
                }
            }
        }
    }

    for(int i =0; i< n; i++){
        for(int j= 0; j< n; j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}