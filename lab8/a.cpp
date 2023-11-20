// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    // sort()
    int n;
    cin >> n;
    vector<int> massive(n);
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    int x, y;
    cin >> x >> y;
    reverse(massive.begin() + x, massive.begin() + y + 1);
   
    for(int i = 0; i < n; i++){
        cout << massive[i] << " ";
    }

}