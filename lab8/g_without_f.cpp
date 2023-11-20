#include <bits/stdc++.h>

using namespace std;



int main(){
    
    int n;
    cin >> n;
    vector<int> massive(n);
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    int x;
    cin >> x;
    int cnt = 0;
    for(int i = 0; i < massive.size(); i++){
        string flag = "red";
        for(int i = 2; i < massive[i]; i++){
            if(massive[i] % i == 0){
                flag = "blue";
            }
        }
        if(massive[i] > x and flag == "red"){
            cnt++;
        }
    }
    cout << cnt << endl;
}