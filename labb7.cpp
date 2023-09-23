#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int cnt_of_odd = 0;
    int cnt_of_even = 0;
    for(int i = 0; i < n; i++){ 
        int element;
        cin >> element;
        if(element % 2 == 0){
            cnt_of_even++; 
        } else{
            cnt_of_odd++;
        }
    }
    cout << cnt_of_even << " " << cnt_of_odd;
}