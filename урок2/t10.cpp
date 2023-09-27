#include <bits/stdc++.h>
// Ввод чисел с клавиатуры до ввода определенного значения:
using namespace std;

int main() {
    int num, target = 42;

    cout << "Введите числа. Введите " << target << " для завершения: " << endl;

    while (true) {
        cin >> num;
        if (num == target) {
            cout << "Вы ввели " << target << ". Программа завершена." << endl;
            break;
        }
    }

    return 0;
}
