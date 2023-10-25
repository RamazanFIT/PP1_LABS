#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n + 1][n + 1];
    int maximum = INT_MIN;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> massive[i][j];
            // maximum = max(maximum, massive[i][j]);
            if(massive[i][j] > maximum){
                maximum = massive[i][j];
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(massive[i][j] == maximum){
                cout << i << " " << j;
                return 0;
            }
        }
    }


}