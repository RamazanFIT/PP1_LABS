#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x1, y1, x2, y2, a, b;
    cin >> x1 >> y1 >> x2 >> y2 >> a >> b;
    if(a >= x1 and a <= x2 and y2 <= b and b <= y1){
        cout << "yes";
    } else{
        cout << "no";
    }
    
}