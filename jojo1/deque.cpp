#include <bits/stdc++.h>

using namespace std;

int main(){
    
    deque<int> dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(10);
    while(not dq.empty()){
        cout << dq.front() << " ";
        dq.pop_front();
    }
    // 2 1 10 

}