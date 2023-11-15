#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    char words[n];
    int ramazan[1000] = {0};
    for(int i = 0; i < n; i++){
        cin >> words[i];
        ramazan[words[i]]++;
    }

    int abstr[1000];
    for(int i = 0;i < 1000; i++){
        abstr[i] = 0;
    }
    for(int i = 0; i < s.size(); i++){
        abstr[s[i]]++;
    }

    for(int i = 0;i < 1000; i++){
        if(ramazan[i]){
            cout << char(i) << ":" << abstr[i] << endl;
        }
    }

}