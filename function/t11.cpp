#include <bits/stdc++.h>

using namespace std;

void f(string s){
    int cnt = 0;
    int x;
    cin >> x;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' and s[i] <= '9'){
            cnt++;
        }
    }
    if(cnt < x){
        cout << "NO";
    } else{
        cout << "YES";
    }
}
int main(){
    
    string s;
    cin >> s;
    f(s);

}