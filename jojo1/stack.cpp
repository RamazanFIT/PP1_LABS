#include <bits/stdc++.h>

using namespace std;

int main(){
    
   
    stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        st.push(el);
    }
    // 1 2 10 4 5
    // 5 4 10 2 1
    while(not st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}