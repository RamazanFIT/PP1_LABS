#include <iostream> 
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
// rama232zan is t323he best dilnaz
int main(){ 
    string s; 
    getline(cin, s); 
    s += " dilnaz";

    string tmp = "";
    for(int i = 0; i < s.size(); i++){ 
        if(s[i] == ' '){
            if(not_contain_number(tmp)){
                cout << tmp << endl;
            }
            tmp = "";
        }
        else{

            tmp += s[i];
        }
    } 
 
}
