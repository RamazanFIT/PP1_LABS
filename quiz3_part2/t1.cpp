#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int ramazan[n];
    for(int i = 0;i < n; i++){
        cin >> ramazan[i];
    }
    // int m[1000];
    // for(int i = 0; i < 1000; i++){
    //     m[i] = 0;
    // }
    int m[1000] = {0};
    int maximum = INT_MIN;

    for(int i = 0; i < n; i++){
        // m[ramazan[i]]++;
        m[ramazan[i]] = m[ramazan[i]] + 1;
        if(maximum < m[ramazan[i]]){
            maximum = m[ramazan[i]];
        }

    }

    // for(int i = 0; i < 1000; i++){
    for(int i = 0; i < 1000; i++){
    if(maximum == m[i]){
        cout << i << " ";
    }
    }
    //     if(maximum < m[i]){
    //         maximum = m[i];
    //     }
    // }
    // abstract ramazan 

}