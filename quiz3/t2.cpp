#include <bits/stdc++.h>

using namespace std;


bool not_contain_number(string d){
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8','9'}; 

    for(int i = 0; i < d.size(); i++){
        string flag = "red";
        for(int j = 0; j < 10; j++){
            if(d[i] == numbers[j]){
                flag = "blue";
            }
        }
        if(flag == "blue"){
            return false;
        }
    }
    return true;
}

int main(){
    
    string s;

    while(cin >> s){
        if(not_contain_number(s)){
            cout << s << endl;
        }
    }

}