#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    int abstr[1000000 + 10];
    for(int i = 0; i < 1000000 + 10; i++){
        abstr[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cin >> massive[i];
        abstr[massive[i]]++;
    }
    int x;
    cin >> x;
    if(abstr[x] >= 1){
        cout << "YES";
    } else{
        cout << "NO";
    }
   

}