#include <bits/stdc++.h>

using namespace std;

int main(){
    // // input 
    // 5
    // 1 2 12 32 4
    // // output 
    // 4 32 12 2 1
    
    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    //1
    for(int i = n - 1; i >= 0; i--){
        cout << massive[i] << " ";
    }
    //2
    // int i = n - 1;
    // while(i >= 0){
    //     cout << massive[i] << " ";
    //     i--;
    // }


}