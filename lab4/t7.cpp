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

    int maximum = INT_MIN;
    int x, y;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                if(maximum < massive[i][j]){
                    maximum = massive[i][j];
                    x = j;
                    y = i;
                }
            }
        }
    }  

    cout << "Maximum element is:" << " " << maximum <<  " with coordinates: " << y + 1 << ";" << x + 1;
}