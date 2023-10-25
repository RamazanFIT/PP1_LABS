#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int n;
   cin >> n;
   string s = "[*]";
   string massive[n][n];

   for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            massive[i][j] = s;
        }
   }
   for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << massive[i][j];
        }
        cout << endl;
   }
    // 3 2  ""   2 + 1 1 + 1 =  3 2
}