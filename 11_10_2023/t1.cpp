#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // input 
    // 5 
    // 1 3 3 4 5
    // output
    // 16
    int n;
    cin >> n;
    int massive[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        // sum = sum + massive[i];
    }
    for(int i = 0; i < n; i++){
        sum = sum + massive[i];
    }
    cout << sum;
    

}