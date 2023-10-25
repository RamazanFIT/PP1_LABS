#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int position = n - 1;
   
    for(int i = 0; i < 2 * n - 1; i += 2){
        for(int j = 0; j < 2 * n - 1; j++){
            if(j >= position and j <= position + i){
                cout << '*';
            } else{
                cout << '.';
            }
        }
        position--;
        cout << endl;
    }

}