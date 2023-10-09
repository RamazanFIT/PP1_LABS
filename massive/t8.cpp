#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // input 
    // 5
    // 124 12 12 134 6
    // output
    // 124 12 12 6 6
    
    int n;
    cin >> n;
    int massive[n];
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        maximum = max(maximum, massive[i]);
        minimum = min(minimum, massive[i]);
    }
    for(int i = 0; i < n; i++){
        if(maximum == massive[i]){
            massive[i] = minimum;
        }
    }
    for(int i = 0; i < n; i++){
        cout << massive[i] << " ";
    }

    


}