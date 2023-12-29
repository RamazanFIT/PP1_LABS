#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;
    vector<int> massive1, massive2, massive3, massive4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int a;
            cin >> a;
            if(i == 0){
                massive1.push_back(a);
            } else if(i == n - 1){
                massive2.push_back(a);
            }
        }
    }
    massive3 = massive1;
    massive4 = massive2;
    reverse(massive1.begin(), massive1.end());
    reverse(massive2.begin(), massive2.end());
    if(massive1 == massive3 and massive4 == massive2){
        cout << "YES";
    } else{
        cout << "NO";
    }

}