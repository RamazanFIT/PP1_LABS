#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    // int massive[n];
    vector<int> massive(n);
    map<int, int> mapa;
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        mapa[massive[i]]++;

    }
    // sort(massive, massive + n);
    // sort(massive.begin(), massive.end());
    // cout << massive[n - 1 - 1];
    string flag = "blue";
    map<int, int> :: reverse_iterator it;
    for(it = mapa.rbegin(); it != mapa.rend(); it++){
        if(flag == "blue"){
            flag = "red";
            continue;
        } else{
            cout << it->first;
            return 0;
        }
    }

}