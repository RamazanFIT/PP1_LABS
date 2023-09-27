#include <bits/stdc++.h>
// Проверка на простое число:
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Введите число: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << num << " - простое число." << endl;
    } else {
        cout << num << " - не простое число." << endl;
    }

    return 0;
}
