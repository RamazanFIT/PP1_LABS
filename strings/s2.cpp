#include <bits/stdc++.h>

using namespace std;


string string_to_upper(string s){
    for(int i = 0; i < s.size(); i++){
        s[i] = char(toupper(s[i]));
    }
    return s;
}

string string_to_lower(string s){
    for(int i = 0; i < s.size(); i++){
        s[i] = char(tolower(s[i]));
    }
    return s;
}

string rec(string s, int i){
    if(i >= s.size()){
        return s;
    } else{
        s[i] = char(toupper(s[i]));
        // return rec(s, i + 1);
        i++;
        return rec(s, i);

    }
}

string rec2(string s, int i){
    if(i >= s.size()){
        return s;
    } else{
        s[i] = char(tolower(s[i]));
        return rec(s, i + 1);
    }
}
int main(){
    
   
    // cout << char(tolower('J'));
    // char a = 'B';
    // cout << char(tolower(a)) << endl;
    // char b = 'l';
    // cout << char(toupper(b));
    // cout << string_to_upper("ramazanFOFO");
    // string s;
    // cin >> s;
    // cout << string_to_upper(s);
    cout << rec("ramazan", 0);
}