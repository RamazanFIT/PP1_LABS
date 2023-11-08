#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 4 
    // 6 2 3 8
    // 2 3 6 8

    // 4 5 7 -> 3

    // 2 
    // 0 3

    // 1 2 -> 2
    // 4 
    // 6 2 3 8
    // 2 3 6 8
    // 4 5 7 -> 3 
    int n;
    cin >> n;
    int massive[1000];
    for(int i = 0 ; i < 1000; i++){
        massive[i] = 0;
    }
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        minimum = min(minimum, a);
        maximum = max(maximum, a);
        massive[a]++;
    }
    int answer = 0;
    for(int i = minimum; i <= maximum; i++){
        if(massive[i] <= 0){
            answer++;
        }
    }
    cout << answer;
    // int cnt = 0;
    // for(int i = minimum; i <= maximum; i++){
    //     string flag = "red";
    //     for(int j = 0; j < n; j++){
    //         if(massive[j] == i){
    //             flag = "blue";
    //         }
    //     }
    //     if(flag == "red"){
    //         cnt++;
    //     }
    // }
    // cout << cnt;

}