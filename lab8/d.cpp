#include <iostream> 
#include<algorithm> 
#include<vector> 
 
using namespace std; 
 
int main(){ 
 
    // sort() 
    int n; 
    cin >> n; 
    vector<int> massive(n); 
    for(int i = 0; i < n; i++){ 
        cin >> massive[i]; 
    } 
    int pos; 
    cin>>pos; 
    int element;
    cin >> element;
    massive.insert(massive.begin() + pos, element);
    for(int i = 0; i < massive.size(); i++){ 
        cout << massive[i] << " "; 
    } 
    
}