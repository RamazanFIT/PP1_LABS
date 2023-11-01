#include <bits/stdc++.h>

using namespace std;


void f3(){
    int a, b, c, d; 
    cin >> a >> b >> c >> d; 
    cout << max(max(a, b), max(c, d));
}

void f2(){
    int n = 4;
    int massive[n];
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        // maximum = max(maximum, massive[i]);
        if(massive[i] > maximum){
            maximum = massive[i];
        }
    }
    cout << maximum;
}

void f1(){
    int n = 4;
    int massive[n];
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        maximum = max(maximum, massive[i]);
    }
    cout << maximum;
}
int main(){
    
   
    f3();
}