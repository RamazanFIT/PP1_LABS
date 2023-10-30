#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    int abstr[100000] = {0};

    for(int i = 0; i < s.size(); i++){
        abstr[s[i] - '0']++;
    }
    int cnt = 0;
    for(int i = 0; i <= 9; i++){
        cnt = cnt + abstr[i];
    }
    int x;
    cin >> x;
    if(cnt < x){
        cout << "NO";
    } else{
        cout << "YES";
    }


}