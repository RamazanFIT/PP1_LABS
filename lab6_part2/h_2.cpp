#include <bits/stdc++.h>

using namespace std;


void f(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if((int(s[i]) - int('0')) % 2 != 0){
            cout << "Not valid";
            return;
        }
    }

    cout << "Valid";
}

int main(){
    
    f();
    // '0' -> 48
    // '1' -> 49
    // (s[i] - '0')
    // (49 - 48) % 2
    // ('1' - '0') = 1
    // ('0' - '0') = 0
    // ('2' - '0') = 2
    // ('3' - '0') = 3
    // ('4' - '0') = 4
}