#include <bits/stdc++.h>
// счет суммы чисел от 1 до N:
using namespace std;

int main() {
    int N;
    cout << "Введите число N: ";
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    cout << "Сумма чисел от 1 до " << N << " равна " << sum << endl;
    return 0;
}
