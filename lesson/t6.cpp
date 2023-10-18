#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int n;
   cin >> n;
   int sum = 0;
   int month = 0;
   while(sum < 500000){
        sum += n * 0.3;
        n = n * 1.1;
        month++;
   }
   cout << month;

}