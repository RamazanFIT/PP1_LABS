#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int a, b, c, cost_a, cost_b, cost_c, money;
   cin >> a >> b >> c >> cost_a >> cost_b >> cost_c >> money;
   if(a * cost_a + b * cost_b + c * cost_c <= money){
        cout << "Yes";
   } else{
        cout << "No";
   }

}