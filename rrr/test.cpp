#include <iostream> 
#include <map>
#include <vector> 
#include <set> 

using namespace std; 
 
int main(){ 
    // map set vector 
    // map<int, int> mapa;
    // mapa[1] = 2;
    // mapa[2] = 3;
    // vector<>
    // map<> 
    // set<>
    int n;
    cin >> n;
    vector<int> v(n); // int massive[]
    // 1 2 3 4 5 6
    // 1 2 4 5 6
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3); // 
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    
    for(int i = 0; i < n; i++){
        // int a;
        // cin >> a;
        // v.push_back(a);
        cin >> v[i];
    }
    int k;
    cin >> k;
    v.erase(v.begin() + k);
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    
    map<int, int> mapa;
    set<int> set_;

    
}