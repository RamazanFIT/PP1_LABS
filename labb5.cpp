#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int dilnaz = 0;

    for(int i = 1; i <= n; i++){
        dilnaz += i;
        // dilnaz = dilnaz + 1;
    }
    cout << dilnaz;
    
}