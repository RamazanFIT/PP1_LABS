#include <bits/stdc++.h>
// vector
// algorithm 

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first > b.first) return false;
    if(a.first < b.first) return true;
    if(a.second > b.second) return false;
    if(a.second < b.second) return true;
    return false;
}

int main(){
    
    int n;
    cin >> n;
    vector<pair<int, int>> massive(n);
    for(int i = 0; i < n; i++){
        cin >> massive[i].first >> massive[i].second;
    }
    sort(massive.begin(), massive.end(), comp);
    for(int i = 0; i < n; i++){
        cout << massive[i].first << " " << massive[i].second << endl;
    }
}