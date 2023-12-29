#include <bits/stdc++.h>

using namespace std;

int main(){
    
   
    int n;
    cin >> n;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int z = 0; z < 10; z++){
                for(int a = 0; a < 10; a++){
                    if( a + i + j + z == n){
                        cout << i << j << z << a << endl;
                    }
                }
            }
        }
    }
}