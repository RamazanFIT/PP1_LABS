#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum = sum + (s[i] - '0');
        // cout << int(s[i]) << " " << int('0') << endl; 
    }
    // '1' -> 49

    // '0' -> 48
    cout << sum;

}