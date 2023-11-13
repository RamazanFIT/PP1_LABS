#include <bits/stdc++.h>

using namespace std;

int main(){
    
    char a;
    cin >> a;
    string s;
    cin >> s;
    string tmp = "";
    for(int i = 0; i < s.size(); i++){
        if(a != s[i]){
            // cout << s[i];
            tmp += s[i];
        }
    }
    cout << tmp;

}