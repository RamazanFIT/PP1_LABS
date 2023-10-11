#include <bits/stdc++.h>

using namespace std;

int main(){
    
//    input 
    // 7
    // 1 2 321 13 13 42 4

    // 1 3

    // // output 
    // 1 13 321 2 13 42 4

    // int n;
    // cin >> n;
    // int massive[n];
    // for(int i = 0; i < n; i++){
    //     cin >> massive[i];
    // }
    // reverse(massive + 1, massive + n);
    // for(int i = 0; i < n; i++){
    //     cout << massive[i] << " ";
    // }
    // 1 
    // int n;
    // cin >> n;
    // int massive[n];
    // for(int i = 0; i < n; i++){
    //     cin >> massive[i];
    //     // int element;
    //     // cin >> element;
    //     // massive[i] = element;
    // }
    // int l, r;
    // cin >> l >> r;
    // reverse(massive + l, massive + r + 1);
    // for(int i = 0; i < n; i++){
    //     cout << massive[i] << " ";
    // }

    // 2
    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    int l, r;
    cin >> l >> r;
    for(int i = 0; i < l; i++){
        cout << massive[i] << " ";
    }
    for(int i = r; i >= l; i--){
        cout << massive[i] << " ";
    }
    for(int i = r + 1; i < n; i++){
        cout << massive[i] << " ";
    }
}