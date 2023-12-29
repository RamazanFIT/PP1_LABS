#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int x;
    cin >> x;
    int n;
    cin >> n;
    vector<int> massive(n);
    for(int i = 0; i < n; i++){
        cin >> massive[i];

    }
    // int i = 0;
    // int j = 1;
    int sum = 0;
    // for(int k = 0; k < n - 1; k++){
    //     sum += massive[j] - massive[i];
    //     j++;
    //     i++;
    // }
    for(int i = 1; i < n; i++){
        sum += massive[i] - massive[i - 1];
    }
    if(sum > x){
        cout << "No";
    } else{
        cout << "Yes";
    }
}