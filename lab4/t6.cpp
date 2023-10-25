#include <bits/stdc++.h>

using namespace std;

int main(){
    // 1 2 3 5 7 11 13 17 19 23 29
   int n;
   cin >> n;
   for(int i = 2; i <= n; i++){
        string flag = "blue";
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                flag = "red";
            }
        }
        if(flag == "blue"){
            cout << i << " is prime" << endl;
        }
   }

}