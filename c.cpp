#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    
    vector<int> v;
    vector<int> primes;
    for(int i = 2; i < int(1e4); i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
    for(int i = 0; i < primes.size(); i++){
        if(isPrime(i + 1)){
            v.push_back(primes[i]);
        }
    }
    int n;
    cin >> n;
    cout << v[n];

}