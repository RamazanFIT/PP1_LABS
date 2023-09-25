#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        massive[i] = element;

    }
    int maximum = -999999999;
    int minimum = 99999999;

    for(int i = 0; i < n; i++){
        if(massive[i] > maximum){
            maximum = massive[i]; // 22
        }
        if(massive[i] < minimum){
            minimum = massive[i];
        }
    }
    // 22 20 7
    cout << maximum - minimum;

   

}