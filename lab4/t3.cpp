#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;
    int massive[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> massive[i][j];
        }
    }

    
    for(int i = 0; i < n; i++){

        int sum = 0;

        for(int j = 0; j < m; j++){
           sum = sum + massive[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << sum << endl; 
    }

    for(int j = 0; j < m; j++){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = sum + massive[i][j];
        }
        cout << "The sum of column number " << j + 1 << " is " << sum << endl; 
    }
}