// 
#include <bits/stdc++.h>

using namespace std;

int sum_of_massive(int massive[], int n, int i, int sum){
    if(i >= n){
        return sum;
    } else{
        return sum_of_massive(massive, n, i + 1, sum + massive[i]);
    }
}

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    // 5
    // 1 2 3 4 5

    // 15 
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans + massive[i];
    }
    cout << ans << endl;

    cout << sum_of_massive(massive, n, 0, 0);
}