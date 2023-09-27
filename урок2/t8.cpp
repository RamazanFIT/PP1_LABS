#include <bits/stdc++.h>
// Вывод чисел в обратном порядке от N до 1:
using namespace std;

int main() {
    int N;

    cout << "Введите число N: ";
    cin >> N;

    for (int i = N; i >= 1; --i) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
