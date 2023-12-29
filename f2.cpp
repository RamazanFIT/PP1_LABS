#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // vector<int> massive(10);
    // while(true){
    //     int a;
    //     cin >> a;
    //     if(a == 0) break;

    //     massive[a]++;
    // }
    // for(int i = 1; i <= 9; i++){
    //     cout << massive[i] << " ";
    // }

    // while(true){
    //     cout << "Dilnaz ";
    // }
    
    // int massive[10] = {0};
    // while(true){
    //     int x; 
    //     cin >> x; 
    //     if(x == 0) 
    //     break; 
    //     massive[x]++;
    // }
    // for(int i = 1; i <= 9; i++) cout << massive[i] << " ";

    map<int, int> mapa;
    for(int i = 1; i <= 9; i++){
        mapa[i] = 0;
    }
    for(map<int, int> :: iterator it = mapa.begin(); it != mapa.end(); it++){
        cout << it->second << " ";
    }
    cout << endl;
    while(true){
        int a;
        cin >> a;
        if(a == 0) 
        break; 
        mapa[a]++;
    }
    for(map<int, int> :: iterator it = mapa.begin(); it != mapa.end(); it++){
        cout << it->second << " ";
    }
}