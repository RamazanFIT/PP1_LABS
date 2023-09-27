#include <bits/stdc++.h>
// Определение наибольшего из трех чисел:
using namespace std;

int main() {
    int a, b, c;

    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Наибольшее число: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Наибольшее число: " << b << endl;
    } else {
        cout << "Наибольшее число: " << c << endl;
    }

    return 0;
}
