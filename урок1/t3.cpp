#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a = 0;
    int b = 0;   
//    a > b   Grats Yelnur
//    a == b Draw
//    a < b Hee Hee Losers
    for(int i = 0; i < 3; i++){
        int x;
        int y;
        cin >> x;
        cin >> y;
        a = a + x;
        b = b + y;
    }
    if(a > b){
        cout << "Grats Yelnur";
    } else if(a == b){
        cout << "Draw";
    } else if(a < b){
        cout << "Hee Hee Losers";
    }
    
}