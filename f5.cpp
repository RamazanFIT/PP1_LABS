#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    int massive[n][n];
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            massive[i][j] = -777;
        }
    }
    int cnt = 1;
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n - 1){
                massive[i][j] = cnt++;
            }
        }
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            if(massive[i][j] != -777){
                cout << massive[i][j];
            } else{
                cout << ".";
            }
        }
    }
    

}