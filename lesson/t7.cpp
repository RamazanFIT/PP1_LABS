#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, a, d;
    cin >> n >> a >> d;
        
    int sum = 0;
    for(int i = 0; i < n; i++){
        cout << a << " ";
        sum = sum + a;
        a = a + d;
    }
    // cout << endl;
    cout << "sum: " << sum;
    // 4 5 6 7 8 9 10 
    // sum: 49
}