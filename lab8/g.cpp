#include <bits/stdc++.h>

using namespace std;


bool isPrime(int number){
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    
    int n;
    cin >> n;
    vector<int> massive(n);
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    int x;
    cin >> x;
    int cnt = 0;
    for(int i = 0; i < massive.size(); i++){
        if(massive[i] > x and isPrime(massive[i])){
            cnt++;
        }
    }
    cout << cnt << endl;
}