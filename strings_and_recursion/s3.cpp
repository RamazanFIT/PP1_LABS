// 
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    
    while(cin >> s){
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'z'){
                cout << 'a';
            } else{
                cout << char(s[i] + 1);
            }
        }
        cout << " ";
    }

}