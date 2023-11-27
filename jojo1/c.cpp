#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map<int, int> mapa;
    int n;
    cin >> n;
    int k;
    cin >> k;
    int ans = 0;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        // mapa[a]++;
        if(a == k){
            ans++;
        }
    }
    cout << ans; 


    // // for(auto it : mapa){
    // //     cout << it.first << " " << it.second << endl;
    // // }
    
    // cout << mapa[k];
}