#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // queue -> очередь 
    // vector<int> v;
    queue<int> q;
    // 100
    // q.push(111);
    // q.push(222);
    // q.push(2322);
    // q.push(2);
    // q.push(1);
    // q.push(3);
    // // q.empty() -> True if empty  
    // while(!q.empty()){
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // 111 222 2322 2 1 3
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        q.push(el);
    }
    while(not q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

}