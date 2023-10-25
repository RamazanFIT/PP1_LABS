#include <bits/stdc++.h>

using namespace std;

int main(){

    int massive[5][10];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            massive[i][j] = 0;
        }
    }
    massive[0][0] = 1;
    massive[0][1] = 3;
    massive[0][2] = 5;

    massive[4][1] = 1;
    massive[4][4] = 2;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }


}