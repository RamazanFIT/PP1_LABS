#include <bits/stdc++.h>
// Сумма элементов массива
using namespace std;

int main() {

    int numbers[] = {1, 2, 3, 4, 5};


    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }


    cout << "Сумма элементов массива: " << sum << endl;

    return 0;
}
