#include <bits/stdc++.h>

using namespace std;

int main(){
    // input
    // 6
    // 1 1 2 2 3 3 INT_MAX
    // output
    // 1 2 3
    int n;
    cin >> n;
    int massive[n + 1];
    massive[n] = INT_MAX;
    int x = massive[0];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
     
    for(int i = 0; i < n; i++){
        if(x != massive[i]){
            cout << x << " ";
            x = massive[i];
        }
    } 

 

    
    
}