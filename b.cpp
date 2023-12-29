// #include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){

    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        int x = i;
        set<int> set_;
        int size = 0;
        while(x > 0){
            set_.insert(x % 10);
            x /= 10; 
            size++;
        }
        if(set_.size() == size){
            cout << s;
            return 0;
        }
    }
    cout << "Understandable, have a great day";
}