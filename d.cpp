#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<pair<int, pair<int, int>>> v;
    // year month day 

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        // DD-MM-YYYY  
        char d1, d2, m1, m2, y1, y2, y3, y4;
        char f;
        cin >> d1 >> d2;
        cin >> f;
        cin >> m1 >> m2;
        cin>>f;
        cin >> y1 >> y2 >> y3 >> y4;
        int day;
        int month;
        int year;
        day = (d1 - '0') * 10 + (d2 - '0'); 
        month = (m1 - '0') * 10 + (m2 - '0');
        year = (y1 - '0') * 1000 + (y2 - '0') * 100 + (y3 - '0') * 10 + (y4 - '0');
        v.push_back(make_pair(year, make_pair(month, day)));
        // v.push_back(make_pair(day, make_pair(month, year)));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        // cout << v[i].second.second << "-" << v[i].second.first << "-" << v[i].first << endl;
        if(v[i].second.second < 10){
            cout << "0" << v[i].second.second << "-";
        } else{
            cout << v[i].second.second << "-";
        }
        if(v[i].second.first < 10){
            cout << "0" << v[i].second.first << "-";
        } else{
            cout << v[i].second.first << "-";
        }
      
        cout << v[i].first << endl;
        
    }


}