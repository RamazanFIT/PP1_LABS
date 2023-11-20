#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    set<char> st;
    for(int i = 0; i < s.size(); i++){
        // cout << s[i] << " ";
        st.insert(_tolower(s[i]));
    }
    cout << st.size() << endl;
    for(auto it : st){
        cout << it << " ";
    }

}