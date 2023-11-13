#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    char massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    int abstr[1000];
    for(int i = 0; i < s.size(); i++){
        abstr[s[i]]++;
    }
    for(int i = 0; i < 1000; i++){
        if(!massive[i]) continue;
        string flag = "red";
        for(int j = 0; j < n; j++){
            if(massive[j] == i){
                flag = "blue";
            }
        }
        if(flag == "blue"){
            cout << char(i) << " : " << massive[i] << endl;
        }
    }

}