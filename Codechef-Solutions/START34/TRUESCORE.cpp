#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while (t--)
    {
        ll ts1,ts2; cin>> ts1 >> ts2;
        ll c,d; cin >> c >> d;
        if(c>=ts1 && d>= ts2) cout << "possible\n";
        else    cout << "impossible\n";
    }
}