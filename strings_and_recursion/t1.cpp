// 
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // int massive[10] = {35, 24, 23, 24, 24, 42, 42, 42, 42, 42};
    // for(int i = 0; i < 10; i++){
    //     cout << massive[i] << " ";
    // }
    // cout << endl;
    // // sort()   
    // sort(massive, massive + 10);
    // for(int i = 0; i < 10; i++){
    //     cout << massive[i] << " ";
    // }
    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    for(int i = 0; i < n; i++){
        cout << massive[i] << " ";
    }
    cout << endl;
    sort(massive, massive + n);
    for(int i = n - 1; i >= 0; i--){
        cout << massive[i] << " ";
    }
}