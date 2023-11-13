#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 10 -> 16 

    char massive[] = {
                        '0', '1', '2', '3', '4', '5', 
                        '6', '7', '8', '9', 'A', 
                        'B', 'C', 'D', 'E', 'F'
                    };

    int n;
    cin >> n;
    string answer = "";
    while(n > 0){
        answer += massive[(n % 16)];
        n /= 16;
    }
    reverse(answer.begin(), answer.end());
    // string a = "";
    // for(int i = answer.size() - 1; i >= 0; i-=1){
    //     a += answer[i];
    // }
    cout << answer;
}