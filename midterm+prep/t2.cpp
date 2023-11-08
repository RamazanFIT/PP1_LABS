#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[1001] = {0};
    int jojo = 0;
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        massive[element] = massive[element] + 1;
        if(jojo < massive[element]){
            jojo = massive[element];
        }
        if(maximum < element){
            maximum = element;
        }
        if(minimum > element){
            minimum = element;
        }
    }

    for(int i = maximum; i >= minimum; i--){
        if(jojo == massive[i]){
            cout << i << " ";
        }
    }
    // for(int i = 1000; i >= 0; i--){
    //     if(jojo == massive[i]){
    //         cout << i << " ";
    //     }
    // }

    
}