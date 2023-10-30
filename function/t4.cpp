#include <bits/stdc++.h>

using namespace std;

int f(int a[], int b[], int d[], int n){
    for(int i = 0; i < n; i++){
        d[i] = abs(b[i] - a[i]);
    }
    
}


int main(){
    
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int d[n];

    for(int i = 0; i < n; i++){
            cin >> a[i];
    }
    for(int i = 0; i < n; i++){
            cin >> b[i];
    }
    f(a, b, d, n);
    for(int i = 0; i < n; i++){
            cout << d[i] << " ";
    }

    // abs(x) -> | x |

}