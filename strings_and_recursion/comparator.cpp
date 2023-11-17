// 
#include <bits/stdc++.h>

using namespace std;

bool comp_descending(int a, int b){
    // a   b   c  d  e f
    if(a >= b){
        return true;
    } else{
        return false;
    }
}

bool comp_ascending(int a, int b){
    // a   b   c  d  e f
    if(a <= b){
        return true;
    } else{
        return false;
    }
}

int main(){
    
    int massive[10] = {35, 24, 23, 24, 24, 42, 42, 42, 42, 42};
    for(int i = 0; i < 10; i++){
        cout << massive[i] << " ";
    }
    cout << endl;
    // sort()   
    sort(massive, massive + 10, comp_ascending);
    for(int i = 0; i < 10; i++){
        cout << massive[i] << " ";
    }
    
    

}