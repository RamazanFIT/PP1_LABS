#include <bits/stdc++.h>

using namespace std;

string rec(string s, int i, int sum_odd, int sum_even){
    if(i == s.size()){
        //stop пж остановись пж брат 
        if(sum_even == sum_odd){
            return "YES";
        } else{
            return "NO";
        }
    } else{
        if(i % 2 == 0){
            //  '0'
            
            sum_even += (s[i] - '0');
            // sum_even += stoi(s[i] + ""); // stoi - string to integer
            i++;
        }  else{
            sum_odd += (s[i] - '0');
            i++;
        }
        return rec(s, i, sum_odd, sum_even);
    }
}


int main(){
    
    string s;
    cin >> s;
    int sum_even = 0;
    int sum_odd = 0;
    //     // 12345 0 1 2 3 4 5 6 7 8
    //     // 1 2 3 4 5 
    for(int i = 0; i <= s.size(); i++){
        if(i >= s.size()){
        if(sum_even == sum_odd){
            cout << "YES";
        } else{
            cout << "NO";
        }
        } else{
            if(i % 2 == 0){
                sum_even += (s[i] - '0');

            }  else{
                sum_odd += (s[i] - '0');

            }

        }
    }
   

}