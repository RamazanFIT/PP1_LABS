#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int n;
   cin >> n;
   int maximum = -99999999999;
   int minimum = 99999999999;

    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        // maximum = max(maximum, element);
        // minimum = min(minimum, element);
        // max(1, 2) - > 2
        // min(1, 2) -> 1
        if(element > maximum){
            maximum = element;
        }  
        if(element < minimum){
            minimum = element;
        }
    }
    cout << (maximum & minimum);
    // 111101
    // 001101
    // 001101 -> 2 ** 3 + 2 ** 2 + 1 = 13  1 * 2 ** 0 + 0 * 2 ** 1 + 1 * 2 ** 2 + ....
    // 543210
    // 5 ** 2 -> 25

}