#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y;
    cin>>n >>x>>y;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    reverse(v.begin()+x - 1, v.begin()+y);
    for(int i=0; i<n; i++){
        cout<<v[i] << " ";
    }

}