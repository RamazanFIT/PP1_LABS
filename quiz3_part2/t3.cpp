#include <bits/stdc++.h> 
 
using namespace std; 
 
int main(){ 
    int n; 
    cin >> n; 
    string name[n]; 
    double price[n]; 
    double cnt[n]; 
 
    for (int i=0; i<n; i++){ 
        cin >> name[i] >> price[i] >> cnt[i]; 
    } 
 
    double minimum=INT_MAX; 
 
    for (int i=0; i<n; i++){ 
        double result = price[i] / cnt[i]; 
        if (result < minimum){ 
            minimum=result; 
        } 
    }
    for (int i=0; i<n; i++){ 
        double result = price[i] / cnt[i]; 
        if (minimum == result){ 
 
            cout << name[i]; 
            return 0; 
        } 
    }     

}