#include <bits/stdc++.h>

using namespace std;

int malenkie(string s){
    int malenkie = 0; // small

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' and s[i] <= 'z'){
            malenkie = malenkie + 1;
        }

    }
    return malenkie;
}

int bolwie(string s){

    int bolwie = 0; // big
    for(int i = 0; i < s.size(); i++){

        if(s[i] >= 'A' and s[i] <= 'Z'){
            bolwie = bolwie + 1;
        }
    }
    return bolwie;
}

int main(){
    
   string s;
   cin >> s;
//    A  Z - > big  
//    a  z - > small 
    // s[i] >= 'a' and s[i] <= 'z'
    
    cout << malenkie(s) << " " << bolwie(s) << endl;
}