#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s; //999833;
    int abstr[10] = {0};
    // ('9' - '0')
    for(int i = 0; i < s.size(); i++){
        abstr[s[i] - '0']++;
    }

    for(int i = 0; i < 10; i++){
        if(abstr[i] != 0){
            cout << i << " : " << abstr[i] << endl;
        }
    }
    
}