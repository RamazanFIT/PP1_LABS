#include <bits/stdc++.h>

using namespace std;

int main(){
    // input
    // 5
    // -1 2 3 78 105
    // output 
    // 105
    int n;
    cin >> n;
    int massive[n];
    int maximum = INT_MIN;
    int minimum = INT_MAX; 
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }

    for(int i = 0; i < n; i++){
        // maximum = max(maximum, massive[i]);
        if(maximum > massive[i]){
            maximum = massive[i];
        }
    }

    
}