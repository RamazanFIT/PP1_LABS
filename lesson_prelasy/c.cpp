#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 1 
    // int n;
    // cin >> n;
    // map<string, int> mapa;
    // for(int i = 0; i < n; i++){
    //     string a;
    //     cin >> a;
    //     int x;
    //     cin >> x;
    //     mapa[a] = mapa[a] + x;
    // }
    // map<string, int> :: iterator it;
    // for(it = mapa.begin(); it != mapa.end(); it++){
    //     cout << it->first << " " <<  mapa[it->first] << " " << endl;
    //     // cout << it->first << " " <<  it->second << " " << endl;
    // }

    vector< pair<string, int> > mapa;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        int x;
        cin >> x;
        string flag = "red";
        for(int j = 0; j < mapa.size(); j++){
            if(mapa[j].first == a){
                mapa[j].second += x;
                flag = "blue";
            }
        }
        if(flag == "red"){
            mapa.push_back(make_pair(a, x));
        }
    }
    sort(mapa.begin(), mapa.end());
    for(int i = 0; i < mapa.size(); i++){
        cout << mapa[i].first << " " << mapa[i].second << endl;
    }

}