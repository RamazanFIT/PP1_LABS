#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int n, m;
   cin >> n >> m;
   int answer;
   answer = m % n;
   cout << answer;
    // int answer = m - (m / n) * n;
    // cout << answer;
    // 500 11
    // 5
    // 500 / 11 = 45
    // 45 * 11 = 495
    // 500 - 495 = 5
}