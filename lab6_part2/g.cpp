#include <bits/stdc++.h>

using namespace std;

void f(){
    string s;
    getline(cin, s);
    char vowels[10] = {'e', 'o', 'a', 'i', 'u', 'E', 'O', 'A', 'I', 'U'};
    for(int i = 0; i < s.size(); i++){
        string flag = "red";
        for(int j = 0; j < 10; j++){
            if(vowels[j] == s[i]){
                flag = "blue";
            }
        }
        if(flag == "red"){
            cout << s[i];
        }
    }
}


int main(){
    
    f();

}