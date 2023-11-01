#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;

    for(int i = s.size() - 1;i  > s.size() / 2; i--){
        if(s[i] != s[s.size() - i - 1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

}