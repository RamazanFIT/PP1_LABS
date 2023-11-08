#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m, x;
    cin >> n >> m >> x;
    int massive[n][m];
    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
            cin >> massive[i][j];
        }

    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        string flag = "red";
        for(int j = 0; j < m; j++){
            if(massive[i][j] == x){
                flag = "Dilnaz";
            }
        }
        if(flag == "Dilnaz"){
            cnt = cnt + 1;
        }

    }
    cout << cnt;
}