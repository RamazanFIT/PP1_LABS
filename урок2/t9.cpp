#include <bits/stdc++.h>
// Подсчет количества цифр в числе:
using namespace std;

int main() {
    int num, count = 0;

    cout << "Введите число: ";
    cin >> num;

    while (num != 0) {
        num /= 10;
        ++count;
    }

    cout << "Количество цифр в числе: " << count << endl;

    return 0;
}
