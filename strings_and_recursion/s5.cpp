// 
#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;
    
    // hellocoaaaaeee
    char a;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        int cnt = 0;
        for(int j = i; j < s.size(); j++){
            if(s[i] == s[j]){
                cnt++;
            } else{
                break;
            }
        }
        if(cnt > ans){
            ans = cnt;
            a = s[i];
        }
    }
    cout << a << " " << ans;
}