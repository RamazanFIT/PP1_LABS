#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int min = 9999999999;
    int max = -9999999999;
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        if(min > element){
            min = element;
        }
        if(max < element){
            max = element;
        }
    }
    cout << (max & min);
   

}