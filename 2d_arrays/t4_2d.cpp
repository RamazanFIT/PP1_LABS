#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;
    int massive[n][m];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> massive[i][j];
            if(massive[i][j] < 0){
                cnt = cnt + 1;
            }
        }
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(massive[i][j] < 0){
    //             cnt = cnt + 1;
    //         }
    //     }
    // }
    cout << cnt;
   

}