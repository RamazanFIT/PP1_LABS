#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    string a = s;
    reverse(a.begin(), a.end());
    // for(int i = s.size() - 1; i >= 0; i--){
    //     a += s[i];
    // }
    // 1 - palindrome
    // 0 - not pol
    if(a == s){
        return true;
    } else{
        return false;
    }
}


int main(){
    
    string s;
    cin >> s;
    // for(int i = 0; i < s.size(); i++){ // ramazan
    //     string a;
    //     for(int j = i; j < s.size(); j++){
    //         a += s[j];
    //         cout << a << endl;
    //     }
    // }
    int ans = 0; // -> 0
    for(int i = 0; i < s.size(); i++){
        for(int j = i; j < s.size(); j++){
            string tmp = "";
            for(int k = i; k <= j; k++){
                tmp += s[k];
            }
            // tmp - substring 
            if(not check(tmp)){
                // --| negation
                if(ans < tmp.size()){
                    ans = tmp.size();
                }
            }
        }
    }
    cout << ans;
}