#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // int n = 1;
    // cout << n;
    // int a = 2;
    // int c = 3;
    // int d = 4;
    // 12 13 14 15 16
    // int massive[10];
    // n == massive[0]
    // a = massive[1]
    // c = massive[2];
    // 0 1 2 3 4 5 6 7 8 9 10

    // massive[0] = 15;
    // massive[1] = 666;
    // massive[2] = 500;
    // massive[4] = -2000;
    // cout << massive[0] << endl;
    // cout << massive[1] << endl;
    // cout << massive[2] << endl;
    // cout << massive[3] << endl;
    // cout << massive[4] << endl;
    // cout << massive[9] << endl;
    // cout << massive[100] << endl;
    // int massive[11];
    // massive[0]
    // massive[0] = 6;
    // massive[10] = -100;
    // -2 ** 31  -  2 ** 31
    // massive[11] = -16;
    // massive[12] = 1;
    // cout << massive[10];
    // massive[0] = 10;
    // massive[1] = 20;
    // massive[2] = 40;
    // 11
    // 0 1 2 3 4 5 6 7 8 9 10
    // 100 -> 99
    // cout << 100 << endl;
    // cout << 200;
    // cout << 300 << endl;
    // cout << "Ramazan";

    // int massive[5];

    // for(int arbuz = 10000; arbuz < 5; arbuz = arbuz + 1){
    //     cout << arbuz << endl;
    // }
    
    // arbuz++ == arbuz += 1
    
    
    // roma++;
    // int roma = 0;
    // roma++; // roma = 1
    // roma = roma + 10;
    // roma += 10;

    // roma++; // roma = 2
    // roma++; // roma = 3
    // roma++; // roma = 3 + 1 = 4
    // roma++; // roma = 4 + 1 = 5
    // cout << roma ;

    // for(int i = 0; i < 5; i++){
    //     int a;
    //     cin >> a;
    //     cout << a - 1 << " ";
    // }
    // massive[2]

    // int massive[5];
    // 11 22 33 44 55  11 - 0   22 - 1   33 - 2
    // for(int i = 0; i < 5; i++){
    //     int element;
    //     cin >> element;
    //     massive[i] = element; // 0 1 2 3 4
    // }
    // cout << massive[2];
    // cout << massive[0] << " " << massive[1] << " " <<  massive[2] << " " << massive[3] << " " << massive[4]; 

    // cout << massive;
    // cout << elel
    // for(int i = 0; i < 5; i++){
    //     cout << massive[i] << endl;
    // }

    //ejffnjewnfewmfpewnfijbewfkew[fewipuhfewujfepwjfewijbfeuwhbfewmfnewojnfbewifne
    // fewpojfewjfewjfwwpef]
    // 5
    // 1 -1 2 3 10
    int n;
    cin >> n; // 5
    int massive[n];
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        massive[i] = element;
    }

    int sum_of_roma = 1;

    for(int i = 0; i < n; i++){
        sum_of_roma = sum_of_roma + massive[i];
    }
    cout << sum_of_roma;
    
}