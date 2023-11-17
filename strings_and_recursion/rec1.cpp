// 
#include <bits/stdc++.h>

using namespace std;

int rec(int x, int y, int cnt, int n){
    if(cnt == n){
        return x;
    } else{
        return rec(y, x + y, cnt + 1, n);
    }
}

int main(){
    
    // 0 1 1 2 3 5 8 13
    // 0 1 2 3 4 5 6 7

    int n;
    cin >> n;
    // 5 -> 5
    // 1 -> 1
    // 6 -> 8
    // 7 -> 13
    int massive[10000] = {0};
    massive[0] = 0;
    massive[1] = 1;
    // massive[2] = massive[1] + massive[0]
    for(int i = 2; i <= n; i++){
        massive[i] = massive[i - 1] + massive[i - 2];
    }
    cout << massive[n] << endl;
    cout << rec(0, 1, 0, n);
    
}