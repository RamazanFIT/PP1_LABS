#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> massive(n);
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    sort(massive.begin(), massive.end());
    int k;cin>>k;
    reverse(massive.begin(), massive.end());
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += massive[i];
    }
    cout << sum;
}   