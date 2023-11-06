#include <bits/stdc++.h>

using namespace std;


string yes_or_no(string s, string pattern){
    int positon = s.find(pattern); // 2

    if(positon != -1){
        return "YES";

    } else{
        return "NO";
    }
}
int main(){
    

    string s;
    cin >> s;

    string pattern;
    cin >> pattern;

    cout << yes_or_no(s, pattern);

    
    


}