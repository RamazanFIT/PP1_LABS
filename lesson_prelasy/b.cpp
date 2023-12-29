#include <bits/stdc++.h>
#define goodluck ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); // boost 
    goodluck
    int n;
    cin >> n;
    set<string> check;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(check.find(s) == check.end()){
            cout << "new user added" << endl;
            
        } else{
            cout << "user already exists" << endl;
        }
        check.insert(s);
    }

}