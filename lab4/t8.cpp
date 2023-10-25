#include <bits/stdc++.h>

using namespace std;

int main(){
    
    

    int n;
    cin >> n;
    int massive[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> massive[i][j];
        }
    }  
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n - 1){
                sum = sum + massive[i][j];
            }
        }
    }  
    cout << sum;


}