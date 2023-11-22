#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map<int, int> mapa;
    // 10 
    // 1 34 2 424 324 324 324 3 43 24 
    int n;
    cin >> n;
    vector<int> v(n); // abstract massive
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mapa[v[i]] = mapa[v[i]] + 1; 
        if(mapa[v[i]] > maximum){
            maximum = mapa[v[i]];
        }
        // mapa[v[i]]++;
        // {1, 1}
        // {34, 1}
        // {2, 1}
        // {424, 1}
        // {324, 3}
        // {3, 1}
        // {43, 1}
        // {24, 1}
    }
    // int x;
    // cin>>x;
    // mapa.erase(x);

    for(map<int, int> :: iterator it = mapa.begin(); it != mapa.end(); it++){
        // cout << (*it).first << " " << (*it).second << endl;
        if(maximum == (*it).second){
            cout << (*it).first << " ";
        }
    }

    // vector<int> v = {244,324 ,234,32, 4,23, 4};
    // // for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
    // //     cout << *it << " ";
    // // }  //244 324 234 32 4 23 4 
    // for(auto it : v){
    //     cout << it << " ";
    // }
}