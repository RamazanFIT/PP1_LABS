#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    set<string> check;
    // vector<pair<string, int>> ans;
    for(int i = 0; i  <n ; i++){
        string a;
        cin >> a;
        if(check.find(a) == check.end()){
            // ans.push_back({a, i + 1});
            // ans.push_back(make_pair(a, i + 1));
            // pair<string, int> p;
            // p.first = a;
            // p.second = i + 1;
            // ans.push_back(p);
            // cout << a << " " << i + 1 << endl;
            cout <<"new user added" << endl;
        } else{
            cout << "user already exists" << endl;
        }
        check.insert(a);
    }
    // sort(ans.begin(), ans.end());
    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i].first << " " << ans[i].second << endl;
    // }

}