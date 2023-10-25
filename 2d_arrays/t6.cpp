#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            massive[i][j] = i * j;
        }
    }
    for(int j = 0; j < n; j++){
        massive[0][j] = j;
        massive[j][0] = j;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << massive[i][j] << " ";
        } cout << endl;
    }

}