#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 1
    int n, m;
    cin >> n >> m;
    int size = n * m;
    int cnt = 0;
    for(int i = 0; i < size; i++){
        int element;
        cin >> element;
        if(element < 0) cnt++;

    }
    cout << cnt;

}