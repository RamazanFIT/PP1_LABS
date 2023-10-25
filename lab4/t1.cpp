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
            int tmp = massive[i][j]; // для удобства мы создали перпеменную
            int sqrtt = sqrt(tmp);
            if(sqrtt * sqrtt == tmp){
                massive[i][j] = sqrtt;
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