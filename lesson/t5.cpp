#include <iostream>

using namespace std;

int main(){
    
    int people;
    cin >> people;

    int stops = 0;

    while(people > 0){
        if(stops % 7 == 0){
            stops++;
            continue;
        }
        if(stops % 2 == 0){
            people  = people - 4;
        } else if(stops % 2 != 0){
            people  = people + 3;
        }
        stops++;
    }
    cout << stops;


}