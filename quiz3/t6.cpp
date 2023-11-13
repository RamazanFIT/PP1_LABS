#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '1' and s[i] <= '9'){
            sum = sum + s[i] - '0';
        }
    }
    cout << sum;
// a 97
// b 98
// c 99
// d 100
// e 101
// f 102
// g 103
// h 104
// i 105
// j 106

// '0' - 48
// '1' - 49
// '2' - 50
// '3' - 51
// '3' - '0' = 51 - 48 = 3
}   