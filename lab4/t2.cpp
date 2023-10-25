#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;
    int massive[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> massive[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((i + j) % 2 == 0){
                massive[i][j] = massive[i][j] + 1;
            } else{
                massive[i][j] = massive[i][j] - 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }

}