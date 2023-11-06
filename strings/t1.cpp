#include <bits/stdc++.h>

using namespace std;


string rec(int a){
    if(a >= 10){
        return "The end";
    } 
    cout << a << " ";
    a++;
    rec(a);
    // cout << rec(a);
}

string f(string a){
    return a + " ROMA";
}

int main(){
    
    // for(int i = 0; i < 10; i++){
    //     cout << i << " ";
    // }
    // cout << rec(0);
    cout << f("koko");

}