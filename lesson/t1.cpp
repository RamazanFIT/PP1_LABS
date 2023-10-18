#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    // 1
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    int sum = 0;
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += massive[i];
        maximum = max(maximum, massive[i]);
    }
    cout << sum << " " << maximum;
    
    // 2
    int sum = 0;
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        sum = sum + element;
        // maximum = max(maximum, element);
        if(element > maximum) maximum = element;
    }
    cout << sum << " " << maximum;
}