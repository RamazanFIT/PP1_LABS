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
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        // max1 > max2 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(massive[i][j] > max1){
                    max1 = massive[i][j];
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(massive[i][j] != max1 and massive[i][j] > max2){
                    max2 = massive[i][j];
                }
            }
        }
        if(max2 == INT_MIN){
            cout << 0;
        } else{
            cout << max2;
        }
        

}