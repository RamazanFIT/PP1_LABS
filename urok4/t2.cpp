#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, n, b, k;
    cin >> a >> n >> b >> k;

    for(int i = 0; i < n; i++){
        // a /= 2;
        a = a / 2;
    }
    
    for(int i = 0; i < k; i++){
        // b /= 2;
        b = b / 2;
    }
    int some1 = a % 2;
    int some2 = b % 2;
    if(some1 == some2){
        cout << "Money was found";
    } else{
        cout << "Where is the money Lebowski?";
    }
    // // 101 - 1
    // 5 / 2 = 2
    // 2 / 2 = 1
    // 1 % 2 = 1

  




}