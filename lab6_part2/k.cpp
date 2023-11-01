#include <bits/stdc++.h>

using namespace std;

int get_last_element(int n){
    return n % 10;
}

int main(){
    
    int n;
    cin >> n;
    int sum = 0;
    while(n > 0){
        sum = sum + get_last_element(n);
        n = n / 10;
    }
    cout << sum;

}