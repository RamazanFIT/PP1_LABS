#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    // stack<char> st;
    vector<char> st;
    st.push_back(s[0]);
    for(int i = 1; i < s.size(); i++){
        if(!st.empty() and st.back() == '1' and s[i] == '1'){
            if(!st.empty())
            st.pop_back();
        } else{
            st.push_back(s[i]);
        }
    }
    for(int i = 0; i < st.size(); i++){
        cout << st[i];
    }
    // (()()) 
    // ( ( 
    // ( 
    // ( (
    // ( ( )
    // ( ) 
    // empty 
}