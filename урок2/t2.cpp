#include <bits/stdc++.h>
// Вывод таблицы умножения:
using namespace std;

int main() {
    int N;
    cout << "Введите число N: ";
    cin >> N;
    
    for(int index = 1; index <= N; index++){
        cout << endl;
     
        for (int i = 1; i <= 10; i++) {
            
            cout << index << " x " << i << " = " << index * i << endl;
        } 
        
    }


    

    return 0;
}
