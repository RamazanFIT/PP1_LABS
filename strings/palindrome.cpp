#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    // reverse()

    cin >> s;
    string tmp;

    for(int i = s.size() - 1; i >= 0; i--){
        tmp = tmp + s[i]; // reverse
        // tmp += s[i];
    }
    // "ROMA" + "JOJO" = "ROMAJOJO"
    cout << tmp;

}