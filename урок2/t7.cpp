#include <bits/stdc++.h>
// Сумма всех чисел от 1 до N:
using namespace std;

int main() {
    // 1
    int a, b, c;
    cin >> a >> b >> c;
    int maximum = max(a, max(b, c));
    int minimum = min(a, min(b, c));
    cout << maximum - minimum;

    // 2
    int minimum = 9999999999;
    int maximum = -9999999999;
    for(int i = 0; i < 3; i++){
        int element;
        cin >> element;
        if(minimum > element){
            minimum = element;

        } 
        if(maximum < element){
            maximum = element;
        }
        
    }
    cout << maximum - minimum << endl;
    // 3
    // int massive[3];
    // for(int i = 0; i < 3; i++){
    //     cin >> massive[i];
    // }
    // sort(massive, massive + 3);
    // cout << massive[2] - massive[0];

    return 0;
}
