#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while(t--) { 
        //Write code below: 
        int PA,PB, QB,QA; cin >> PA >> PB >> QA >> QB;
        int timeP, timeQ ;
        if (PA > PB) timeP = PA;
        else timeP = PB;

        if (QA > QB)
        {
            timeQ = QA;
        } else timeQ = QB;
        
        if (timeP < timeQ)
        {
            cout << "P\n";
        } else if (timeQ < timeP )cout << "Q\n";
        else cout << "TIE\n";
    }
}