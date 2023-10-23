#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int massive[n][n];
    int maxi = -1e9; // 1 * 10 ^ 9 INTMIN -> 4 * 10 ^ 9
    int maxi2 = -1e9;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> massive[i][j];
        maxi = max(maxi,massive[i][j]);
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (massive[i][j] > maxi2 && massive[i][j] != maxi) {
          maxi2 = massive[i][j];
        }
      }
    }
    if (maxi2 == -1e9) {
      cout << 0;
    }
    else {
      cout << maxi2;
    }
    return 0;
  
   
 
}