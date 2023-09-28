#include <bits/stdc++.h>
#define ENDL "\n"
#define endd return 0;
using namespace std;

signed main(){
    
   
    int n;
    cin >> n;
    int x;
    cin >> x;

    int w[n];
    for(int i = 0; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++){
        if(x == w[i]){
            cout << i;
            return 0;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        if(x > w[i]){
            cout << i + 1;
            return 0;
        }
    }
    
    
    


    endd
}
