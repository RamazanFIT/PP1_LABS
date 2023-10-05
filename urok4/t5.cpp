#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int n;
   cin >> n;
   int vverx;
   cin >> vverx;
   int vniz;
   cin >> vniz;
   if(vverx >= n){
        cout << 1;
        
   } else{
        int h = 0;
        int cnt = 0;
        if(vverx - vniz <= 0){
            cout << "NO";
            return 0;
        }
        while(h < n){
            
            cout << h << " ";
            h = h + vverx; //day
            if(h >= n){
                cnt = cnt + 1;
                cout << cnt;
                return 0;
            } 
            h = h - vniz; //night
            cnt = cnt + 1;

        }
        return 0;
   }

}