#include<iostream> 
#include<string> 
#include<vector> 
#include <algorithm> 
#include<cmath> 
using namespace std; 
int main() { 
int n; 
cin>>n; 
vector <int>  massive(n); 
 for(int i=0; i<n; i++){ 
    cin>>massive[i]; 
 } 
sort(massive.rbegin(), massive.rend()); 
    for(int i=0; i<n; i++){ 
 cout<<massive[i] << " "; 
    } 
}