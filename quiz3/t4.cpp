#include <bits/stdc++.h>

using namespace std;

int gcdd(int a, int b){
    if(a == 0){
        return b;
    } else{
        return gcdd(b % a, a);
    }
}

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    for(int i = 0;i < n; i++){
        cin >> massive[i];
    }

    int maximum = INT_MIN; // INT_MIN = -2147483647

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int gcd_own = gcdd(massive[i], massive[j]);
            if(gcd_own > maximum){
                maximum = gcd_own;
            }
        }
    }
    cout << maximum;
}