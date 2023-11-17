// 
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n][n];
    int massive_1d[n * n];
    int z = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> massive[i][j];
            massive_1d[z++] = massive[i][j];
        }
    }
    // 3 
    // 1 2 3 
    // 4 5 6
    // 7 8 9
    sort(massive_1d, massive_1d + n * n);
    // red -> max 
    // blue -> min
    string flag = "red";
    int left = 0;
    int right = n * n - 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(flag == "red"){
                massive[i][j] = massive_1d[right];
                right--;
                flag = "blue";
            } else{
                massive[i][j] = massive_1d[left];
                left++;
                flag = "red";
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }
    
}