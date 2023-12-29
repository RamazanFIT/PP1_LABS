#include <bits/stdc++.h>

using namespace std;

bool comp(pair<string, int> a, pair<string, int> b){
    if(a.second > b.second){
        return true;
    } else if(a.second < b.second){
        return false;
    }
    // return a.first.compare(a.first);
    for(int i = 0; i < a.first.size(); i++){
        if(a.first[i] > b.first[i]){
            return false;
        } else if(a.first[i] < b.first[i]){
            return true;
        }
    }
    return false;
}

int main(){
    
    string s;
    getline(cin, s);
    
    s += " $";

    string tmp = "";

    map<string, int> mapa;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            mapa[tmp]++;
            tmp = "";

        } else{
            tmp += s[i];
        }
        
    }
    map<string, int> :: iterator it;
    vector<pair<string, int>> massive;
    for(it = mapa.begin(); it != mapa.end(); it++){
        massive.push_back( make_pair(it->first, it->second));
    }
    sort(massive.begin(), massive.end(), comp);
    for(int i = 0; i < massive.size(); i++){
        cout << massive[i].first << " " << massive[i].second << endl;   
    }
    

}