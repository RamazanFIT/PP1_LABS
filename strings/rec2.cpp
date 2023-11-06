#include <bits/stdc++.h>

using namespace std;

int aa = 12;
int bb = 1;

void rec(int a, int b){
    cout << aa << " " << bb << endl;

    if(a > 100){
        return; // stop просто остановка
    }
    int c = a + b;
    cout << c << " ";
    rec(b, c);
}

int main(){
    // 0 1 1 2 3 5 8 13 21 34 55
    //     1 2 3 5 8 13 21 34 55 89 144 233
    // a1 = 0
    // a2 = 1
    // a3 = a1 + a2 
    // a(n) = a(n - 1) + a(n - 2)
    // cout << 0 << " " << 1;
    // rec(0, 1);
   
    // cout << a << " " << b;
}