#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    while(n > 0){
        if((n % 10) % 2 != 0){
            cout << "Not valid";
            return 0;
        }
        n = n / 10;
    }

    // for(int i = 0; i < 1e8 + 10; i++){
    //     if((n % 10) % 2 != 0){
    //         cout << "Not valid";
    //         return 0;
    //     }
    //     n = n / 10;
    // }

    cout << "Valid";

}

