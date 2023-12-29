#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m;
    cin >> n;
    vector<int> a, b;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        a.push_back(el);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        int el;
        cin >> el;
        b.push_back(el);
    }
    for(int k = 0; k < m; k++){

        string flag = "roma";
        for(int i = 0; i < n; i++){
            if(flag != "roma") break;
            for(int j = i + 1; j < n; j++){
                if(b[k] == a[i] + a[j]){
                    flag = "dilnaz";
                    cout << "YES" << endl;
                    break;
                }
            }
        }
        if(flag == "roma"){
            cout << "NO" << endl;
        }
    }

}