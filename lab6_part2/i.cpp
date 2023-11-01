#include <bits/stdc++.h>

using namespace std;


void f(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i+=2){
        if(s[i] >= 'a' and s[i] <= 'z'){

            s[i] = s[i] + ('A' - 'a');
        }
    }
    cout << s;
}

int main(){
    
    //  'H'

    //  104 - 72
    f();

}