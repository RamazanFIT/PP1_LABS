#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int n;
   cin >> n;
//    1
   n = n * n;
   int maximum = INT_MIN;
   for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        // maximum = max(maximum, element);
        if(element > maximum){
            maximum = element;
        }
   }
   cout << maximum;
//    2
    int massive[n][n];
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> massive[i][j];
            if(massive[i][j] > maximum){
                maximum = massive[i][j];
            }
        }
    }
    cout << maximum;

}