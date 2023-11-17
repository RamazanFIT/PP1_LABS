// 
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    string pattern = "@gmail.com";
    string massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    for(int i = 0; i < n; i++){
        if(massive[i].find(pattern) != -1){
            cout << massive[i] << endl;
        }
    }
    // string s = "ramazan";
    // int x = s.find("symbat");
    // cout << x;
}