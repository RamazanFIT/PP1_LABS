#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first - a.second < (b.first - b.second)){
        return true;
    } else{
        return false;
    }
}

int main(){

    // recap 
    // map 
    // vector 
    // set 
    // pair 
    // stack 
    // queue 
    // deque 
    // priority_queue 
    // map<string, int> mapa;
    // mapa["roma"] = 1;
    // mapa["nazerke"] = 2;
    // mapa["roma"]++;
    // int n;
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     string a;
    //     cin >> a;
    //     mapa[a]++;
    // }
    // // cout << mapa["roma"] << "  " << mapa["nazerke"];
    // map<string, int> :: reverse_iterator it;
    // for(it = mapa.rbegin(); it != mapa.rend(); it++){
    //     // cout << it->first << " " << it->second << endl;
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    // int n;
    // cin >> n;
    // // vector<int> massive(n);
    // // for(int i = 0; i < n; i++){
    // //     cin >> massive[i];
    // // }

    // vector<int> massive;
    // for(int i = 0; i < n; i++){
    //     int a;
    //     cin >> a;
    //     massive.push_back(a);
    // }
    
    // // reverse(massive.begin(), massive.end()); // 12345 54321

    // // sort(massive.begin(), massive.end()); // ascending
    // // reverse(massive.begin(), massive.end()); // decending 
    // for(int i = 0; i < massive.size(); i++){
    //     cout << massive[i] << " ";
    // }
    // cout << endl;
    // int pos;
    // cin >> pos;
    // // massive.erase(massive.begin() + pos);
    // // massive.pop_back();
    // // massive.erase(massive.begin() + massive.size() - 2); // prev last
    // // massive.insert(massive.begin() + pos, 100);
    // massive.emplace(massive.begin() + pos, 100); // insert emplace
    // for(int i = 0; i < massive.size(); i++){
    //     cout << massive[i] << " ";
    // }
    
    // set<int> some_set;
    // // unique elements no dulicates 
    // // some_set.insert(2);
    // // some_set.insert(0);
    // // some_set.insert(1);
    
    // // some_set.insert(3);
    // int n;
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     int element;
    //     cin >> element;
    //     some_set.insert(element);
    // }
    // set<int> :: iterator it;
    // for(it = some_set.begin(); it != some_set.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;
    // int element;
    // cin >> element;
    // some_set.erase(element);
    // // some_set.clear();
    // for(it = some_set.begin(); it != some_set.end(); it++){
    //     cout << *it << " ";
    // }

    // multiset<int> multiset_set;
    // int n;
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     int a;
    //     cin >> a;
    //     multiset_set.insert(a);
    // }

    // multiset<int> :: iterator it;
    // for(it = multiset_set.begin(); it != multiset_set.end(); it++){
    //     cout << *it << " ";
    // }
    // int element;
    // cin >> element;
    // // multiset_set.erase(element);
    // // multiset_set.erase(multiset_set.find(element)); 
    if(multiset_set.find(element) == multiset_set.end()){
        cout << "not found" << endl;
    } else{
        cout << "found";
    }
    // cout << endl;   
    // for(it = multiset_set.begin(); it != multiset_set.end(); it++){
    //     cout << *it << " ";
    // }
    // int x = 0;
    // pair<int, int> roma = make_pair(1, 2);
    // // cout << roma.first << " " << roma.second;
    // cin >> roma.first >> roma.second;
    // cout << roma.first << " " << roma.second << endl; 
    // vector<pair<int, int> > massive;
    // int n;
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     int a, b;
    //     cin >> a >> b;
    //     // a + b 
    //     massive.push_back(make_pair(a, b));
    // }
    // for(int i = 0; i < n; i++){
    //     cout << massive[i].first << " " << massive[i].second << endl;
    // }
    // // a + b

    // sort(massive.begin(), massive.end(), comp);
    // for(int i = 0; i < n; i++){
    //     cout << massive[i].first << " " << massive[i].second << endl;
    // }
    // deque<int> q;
    // int n;
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     int a;
    //     cin >> a;
    //     q.push_back(a);
    //     q.push_front(a);
    // }
    // int m;
    // cin >> m;
    // for(int i = 0; i < m; ++i){
    //     int a;
    //     cin >> a;
    //     q.push_front(a);
    // }

    // while(not q.empty()){
    //     cout << q.back() << " ";
    //     q.pop_back();
    // }
    // int n;
    // cin >> n;
    // priority_queue<int> pq;
    // for(int i = 0; i < n; ++i){
    //     int a;
    //     cin >> a;
    //     pq.push(a);
    // }
    // while(not pq.empty()){
    //     cout << pq.top() << " ";
    //     pq.pop(); // del top
    // }
}