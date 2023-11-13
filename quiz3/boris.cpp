#include <bits/stdc++.h>

using namespace std;






int main(){ 

    string alp = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string s;
    cin >> s;
    
    //    for(int i = 0; i < s.size(); i++){
    //         if(s[i] < '0' and s[i] > '9' and s[i] >= 'a' and s[i] <= 'z'){
    //             cout << s[i];
    //         }
    //    }
    for(int i = 0; i < s.size(); i++){
        string flag = "red";
        for(int j = 0; j < alp.size(); j++){
            if(s[i] == alp[j]){
                flag = "ramazan";
            }
        }
        if(flag == "ramazan"){
            continue;
        }
        cout << s[i];
    }

}