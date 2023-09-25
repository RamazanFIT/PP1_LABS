#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int n;
   cin >> n;
   int x_0;
   int x_1;
   int x_2;
   int x_3;
   x_0 = n % 2;
   n = n / 2;
   x_1 = n % 2;
   n = n / 2;
   x_2 = n % 2;
   n /= 2;
   x_3 = n % 2;
   cout << x_0 * 2 * 2 * 2 + x_1 * 2 * 2 + x_2 * 2 + x_3;

}