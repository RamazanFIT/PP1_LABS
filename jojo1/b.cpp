#include <bits/stdc++.h>

using namespace std;

int main(){
    

    int n; cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++)
        cin >> massive[i];
    sort(massive, massive + n);
    for(int i = n - 1; i >= 0; i--){
        if(massive[i] % 2 == 0){
            cout << massive[i] << " ";
        }
    }
    for(int i = 0; i < n; i++){
        if(massive[i] % 2 == 1){
            cout << massive[i] << " ";
        }
    }
}