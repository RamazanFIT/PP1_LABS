#include <bits/stdc++.h>

using namespace std;


bool comp( pair < pair < int, int >, int >  a,  pair < pair < int, int >, int > b){
    if((a.first.first + a.first.second) < (b.first.first + b.first.second)){
        return true;
    } else if((a.first.first + a.first.second) > (b.first.first + b.first.second)){
        return false;
    }
    if(a.second < b.second) return true;
    else return false;
}

int main(){
    
    // int n;
    // cin >> n;
    // vector<pair<int, int>> massive;
    // for(int i = 0; i < n; i++){
    //     int a, b;
    //     cin >> a >> b;
    //     massive.push_back(make_pair(a + b, i + 1));
    // }
    // sort(massive.begin(), massive.end());
    // for(int i = 0; i < n; i++){
    //     cout << massive[i].second << " ";
    // }
    int n;
    cin >> n;
    vector< pair < pair < int, int >, int > > massive;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        massive.push_back(make_pair(make_pair(a, b), i + 1));
    }
    sort(massive.begin(), massive.end(), comp);
    for(int i = 0; i < n; i++){
        cout << massive[i].second << " ";
    }
}