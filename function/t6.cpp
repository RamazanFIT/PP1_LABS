#include <bits/stdc++.h>

using namespace std;


void f1(int massive3[], int n, int massive1[]){
    for(int i = 0; i < n; i++){
        cin >> massive1[i];
        massive3[massive1[i]]++; 
    }
}

void f2(int massive2[], int massive4[], int n){
    for(int i = 0; i < n; i++){
        cin >> massive2[i];
        massive4[massive2[i]]++; // 2
    }
}

int f3(int massive3[], int massive4[], int n){
    int cnt = 0; // 3
    for(int i = 0; i < 100000; i++){
        cnt = cnt + min(massive3[i], massive4[i]);
    }
    return cnt;
}

void f4(int massive3[], int massive4[], int n){
    for(int i = 0; i < 100000; i++){
        massive3[i] = 0;
        massive4[i] = 0; // 4
    }
}

int main(){
    
    int n;
    cin >> n;
    int massive1[n];
    int massive2[n];
    int massive3[100000];
    int massive4[100000];
    f4(massive3, massive4, n);
    f1(massive3, n, massive1);
    f2(massive2, massive4, n);
    int answer = f3(massive3, massive4, n);
    cout << answer;

}