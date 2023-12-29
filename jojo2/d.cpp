#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, k;
    cin >> n >> k;
    // cout << n * pow(2, k);
    int c = 1;
    for(int i = 0; i < k; i++){
        c *= 2;
    }
    cout << n * c;

}