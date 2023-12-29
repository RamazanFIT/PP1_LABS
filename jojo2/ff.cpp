#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> massive;
    for(int i = 0; i < n; i++){
        vector<int> tmp;
        for(int j = 0; j < m; j++){
            int a;
            cin >> a;
            tmp.push_back(a);
            
        }
        massive.push_back(tmp);
    }
    vector<int> a, b;
    a = massive[0];
    b = massive[n - 1];
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if(a == massive[0] and b == massive[n - 1]){
        cout << "YES";
    } else{
        cout << "NO";
    }
}