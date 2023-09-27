#include <bits/stdc++.h>
// Проверка четности числа:
using namespace std;

int main() {

    // int number;
    // cin >> number;

    // 12 / 2 "even"
    // 11 / 2 "odd "

    // if(number % 2 == 0){
    //     cout << "EVEN";
    // } else if(number % 2 != 0){
    //     cout << "ODD";
    // }

    // if(number % 2 == 0){
    //     cout << "EVEN";
    // } else if(number % 2 == 1){
    //     cout << "ODD";
    // }

    // if(number % 2 == 0){
    //     cout << "EVEN";
    // } else{
    //     cout << "ODD";
    // }
    
    // n 
    // n == 15
    // n += 1
    // 16 -> 17

    // 16 -> +1 == 17
    // n 17
    // // 18 + 1 = 19
    // 1 3 5 7 9 11 13 15 17
    // либо сумму либо цифры
    // int n;
    // cin >> n;
    
    // return 0;

    int n;
    cin >> n;
    // 1 3 5 7 9
    if(n % 2 == 0){
        n = n + 1;
    }

    // for(int i = 1; i <= n; i++){
    //     if(i % 2 != 0){
    //         cout << i << " ";
    //     }
    // }
    // 1 3 5 7 .....

    int sum = 0;

    // for(int i = 1; i <= n; i += 2){
    //     // sum += i;
    //     sum = sum + i;
    // }
    
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            // sum += i;
            sum = sum + i;
        }
    }
    cout << sum;

}
