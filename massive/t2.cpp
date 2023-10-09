#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 5
    // 11 45 67 32 45
    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        // int element;
        // cin >> element;
        // massive[i] = element;
        cin >> massive[i];
    }
    for(int i = 0; i < n; i++){
        if(massive[i] % 2 == 1){
            cout << massive[i] << " ";
        }
    }

   

}