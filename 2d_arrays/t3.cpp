#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int n;
   cin >> n;
   n = n * n;
   int max1 = INT_MIN;
   int max2 = INT_MIN;
   for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        if(element > max1){
            max2 = max1;
            max1 = element;
        } else if(element > max2 and element != max1){
            max2 = element;
        }
   }
//    cout << max2 << endl;
    if(max2 == INT_MIN){
        cout << 0;
    } else{
        cout << max2;
    }
    

}