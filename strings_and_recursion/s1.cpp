// 
#include <bits/stdc++.h>

using namespace std;


int cnt_of_small_letter(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' and s[i] <= 'z'){
            cnt = cnt + 1;
        } // 1 3   3 - 1 + 1
    }
    return cnt;
}

int cnt_of_capital_letter(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
            cnt = cnt + 1;
        } // 1 3   3 - 1 + 1
    }
    return cnt;
}

int main(){
    
    string s;
    cin >> s;

    cout << cnt_of_small_letter(s) << " " << cnt_of_capital_letter(s) << endl;

}