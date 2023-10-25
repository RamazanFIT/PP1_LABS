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

    cout << "coordinates of min elements: " << endl;
    int sum = 0;
    for(int j = 0; j < m; j++){
        int minimum = INT_MAX;
        int x;
        int y;
        for(int i = 0; i < n; i++){
            if(minimum > massive[i][j]){
                minimum = massive[i][j];
                y = i;
                x = j;
            }
        }
        sum = sum + minimum;
        cout << y + 1 << ';' << x + 1 << endl;
    }
    cout << endl;
    cout << "Their sum:" << endl;
    cout << sum;



}