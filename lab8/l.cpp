#include <bits/stdc++.h>

using namespace std;

int main(){
    
    set<int> roma;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        roma.insert(a);
    }

    // cout << roma.size();
    set<int> :: iterator it; // iterator
    int sum = 0;
    // for(it = roma.begin(); it != roma.end(); it++){
    //     sum += *it; // Расшифр
    // }
    for(auto it : roma){
        sum += it;
    }
    cout << sum;

}