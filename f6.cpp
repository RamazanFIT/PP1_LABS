#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    
    // @ . 
    if(s.find('@') > s.find('.')){
        cout << "NO";
        return 0;
    }

    int cnt_of_dog = 0;
    int cnt_of_point = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.'){
            cnt_of_point++;
        }
        if(s[i] == '@'){
            cnt_of_dog++;
        }
    }
    if(cnt_of_point != 1 or cnt_of_dog != 1){
         cout << "NO";
        return 0;
    }
    
    int posDog = s.find('@'); 
    int posPoint = s.find('.');
    if(abs(posDog - posPoint) == 1){
        cout << "NO";
        return 0;
    }

    if(posDog == 0 or posPoint == 0){
         cout << "NO";
        return 0;
    }
    if((posDog == s.size() - 1) or (posPoint == s.size() - 1)){
         cout << "NO";
        return 0;
    }

    cout <<"YES";

}