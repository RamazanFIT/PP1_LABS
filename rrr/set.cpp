#include <bits/stdc++.h>

using namespace std;

int main(){
    
    set<int> dilnaz;
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        dilnaz.insert(a);
    }
    cout << dilnaz.size() << endl;
    cout << dilnaz.empty() << endl; // 1 - empty  0 - not empty
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(set<int> :: iterator it = dilnaz.begin(); it != dilnaz.end(); it++){
        if(*it > maximum){
            maximum = *it;
        }
        if(*it < minimum){
            minimum = *it;
        }
    }
    dilnaz.erase(minimum);
    dilnaz.erase(maximum);
    for(set<int> :: iterator it = dilnaz.begin(); it != dilnaz.end(); it++){
        cout << *it << " ";
    }
    

}