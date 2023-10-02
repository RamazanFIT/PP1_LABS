#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 0;
    int b = 0;
    // for(int i = 0; i < 3; i++){
    //     int x, y;
    //     cin >> x >> y;
    //     // a += x;
    //     // b += y;
    //     a = a + x;
    //     b = b + y;
    // }

    // int x1, x2, x3;
    // int y1, y2, y3;

    // cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // a = x1 + x2 + x3;
    // b = y1 + y2 + y3;

    // 15 20 20 20 25 15
    // 0  1  2  3  4  5
   
    for(int i = 0; i < 6; i++){
        int element;
        cin >> element;
        if(i % 2 == 0){
            a += element;
        } else{
            b += element;
        }
    }
    if(a > b){
        cout << "Grats Yelnur";
    } else if(a == b){
        cout << "DRAW";
    } else{
        cout << "LOSER";
    }
}