#include <bits/stdc++.h>

using namespace std;

int main(){
//    input
//    5
//    21 -43 24 234 32
//    output
//    3

    int n;
    cin >> n;
    int massive[n];
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    for(int i = 0; i < n; i++){
        maximum = max(maximum, massive[i]);
    }

    for(int i = 0; i < n; i++){
        if(maximum == massive[i]){
            cout << i << " ";
            // return 0; //вся программа
            break; //цикл for или while
        }
    }

    // int n;
    // cin >> n;
    // int maximum = INT_MIN;
    // int ans;
    // int massive[n];
    // for(int i = 0; i < n; i++){
    //     cin >> massive[i];
    //     if(maximum < massive[i]){
    //         maximum = massive[i];
    //         ans = i;
    //     }
    // }
    // 4
    // 15 3 15 3
    // cout << ans;g
    

}