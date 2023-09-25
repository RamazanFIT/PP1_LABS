#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int a;
   int b;
   cin >> a;
   cin >> b;
   a = a + b % 10;
   a = a + b / 100;
   cout << a;

}