#include <bits/stdc++.h>

using namespace std;

int main(){
    
    unsigned long long n;
    cin >> n;
    for(unsigned long long i = 0; i <= n; i++){
        cout << setprecision(18) << pow(i, i) << " ";
    }

}