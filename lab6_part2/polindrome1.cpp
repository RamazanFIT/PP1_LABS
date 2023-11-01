#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    if(s == reversed_s){
        cout << "YES";
    } else{
        cout << "NO";
    }
   

}