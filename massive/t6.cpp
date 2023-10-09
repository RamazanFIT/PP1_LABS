#include <bits/stdc++.h>

using namespace std;

int main(){
//     INPUT
//    5
//    1 2 42 -2 3
//     OUTPUT
//    46

    int n;
    cin >> n;
    int massive[n];
    int sum = 0;
    // for(int i = 0; i < n; i++){
    //     cin >> massive[i];
    // }
    // for(int i = 0; i < n; i++){
    //     sum = sum + massive[i];
    // }
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        sum += massive[i];
    }
    cout << sum;

}