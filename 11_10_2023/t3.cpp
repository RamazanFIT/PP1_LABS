#include <bits/stdc++.h>

using namespace std;

int main(){
    // input 
    // 6 -> size of the massive
    // 11 12 14 14 15 16 --> massive
    // 14
    // --> target
    // output 
    // 2 -> position of the first appearance of the target

    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    int target;
    cin >> target;
    bool dilnaz = true;
    for(int i = 0; i < n; i++){
        if(target == massive[i]){
            cout << i;
            dilnaz = false;
            break;
        }
    }
    if(dilnaz == true){
        cout << -1;
    }

}