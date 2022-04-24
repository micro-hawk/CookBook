#include<iostream>
#define ll long long 
using namespace std;
int main() {
    ll t; cin >> t;  while (t--)
    {
        ll offer1, offer2; cin >> offer1 >> offer2 ;
        if(offer1*10 > offer2*5) cout << "FIRST\n";
        else if(offer1*10 < offer2*5) cout << "SECOND\n";
        else cout << "ANY\n";
    }
}