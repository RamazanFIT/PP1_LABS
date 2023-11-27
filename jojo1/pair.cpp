#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // pair<int, string>
    // pair<string, string>
    // pair<double, string>
    // pair<int, string>
    // pair<int, string>
    // pair<int, int> p1;
    // // p1.first = 1;
    // // p1.second = 2;
    // cin >> p1.first;
    // cin >> p1.second;
    // // int a, b;
    // cout << p1.first << " " << p1.second << endl;
    // 5
    // 1 2 
    // 2 3 
    // 4 5
    // 5 6
    // 7 8
    // pair<int, int> massive[5];
    vector<pair<int, int>> massive(5);
    for(int i = 0; i < 5; i++){
        cin >> massive[i].first >> massive[i].second;
    }
}