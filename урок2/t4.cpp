#include <bits/stdc++.h>
// Ввод чисел с клавиатуры до ввода нуля:
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Введите числа. Введите 0, чтобы завершить ввод." << endl;

    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        sum += num;
    }

    cout << "Сумма введенных чисел равна " << sum << endl;
    return 0;
}
