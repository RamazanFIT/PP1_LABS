#include <bits/stdc++.h>

using namespace std;


void f1(int abstr[]){
    for(int i = 0; i < 1000000 + 10; i++){
        abstr[i] = 0; // 1
    }
}

void f2(int massive[], int abstr[], int n){
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        abstr[massive[i]] = abstr[massive[i]] + 1; // 2
    }
}

string f3(int abstr[]){
    int x;
    cin >> x;
    if(abstr[x] >= 1){
        return "YES"; // 3
    } else{
        return "NO";
    }
}

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    int abstr[1000000 + 10];
    f1(abstr);
    f2(massive, abstr, n);
    string answer = f3(abstr);
    cout << answer;
    
    
   

}