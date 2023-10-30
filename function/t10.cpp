#include <bits/stdc++.h>

using namespace std;


float f1(float a, float b){
    return sqrt(a * a + b * b);
}
int main(){
    
    float a, b;
    cin >> a >> b;
    float c = f1(a, b);
    cout << setprecision(4) << c << endl;

}