#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int maximum = -99999999;
    for(int i = 1; i <= n; i++){
        int element;
        cin >> element;
        if(element > maximum){
            maximum = element;
        }
    }
    cout << maximum;
}