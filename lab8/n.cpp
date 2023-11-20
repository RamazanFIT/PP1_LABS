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
    set<int> :: iterator it;
    for(auto it : roma){
        if(it % 2 != 0){
            cout << it << " ";
        }
    }
    

}