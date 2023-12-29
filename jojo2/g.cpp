#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    vector<int> massive(n);
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    int ans = INT_MAX;
    // for(int i = 0; i < n - 2; i++){
    //     int sum = 0;
    //     for(int j = i; j< i + 3; j++){
    //         sum += massive[j];
    //     }
    //     if(sum < ans) ans = sum;
    // }
    // int i = 0;
    // int j = 2;
    // for(int k = 0; k < n - 2; k++){
    //     int sum = 0;
    //     for(int l = i; l <= j; l++){

    //         sum += massive[l];
    //     }
    //     if(sum < ans) ans = sum;
    // }
    int x = 0;
    for(int i = 0; i < 3; i++){
        x += massive[i];
    }
    if(x < ans) ans = x;
    for(int i = 3; i < n; i++){
        x = x - massive[i - 3] + massive[i];
        if(x < ans) ans = x;
    }
    cout << ans;

}