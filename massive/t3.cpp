#include <bits/stdc++.h>

using namespace std;

int main(){
    // input 
    // 6 
    // 12 -13 32 -43 -4324 -242
    // output 
    // 2

    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(massive[i] >= 0){
            cnt = cnt + 1;
        }
    }
    cout << cnt;
    
}