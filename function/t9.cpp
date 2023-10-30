#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i]; // 1
    }

    int x;
    cin >> x;
    for(int i = 0; i < n; i++){
        if(x == massive[i]){
            cout << "YES"; // 2
            return 0;
        }
    }
    cout << "NO";

}