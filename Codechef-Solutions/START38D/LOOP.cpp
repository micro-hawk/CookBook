#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while(t--) { 
        //Write code below: 
        ll a,b,m; cin >>a>>b>>m;
        int d1=0,d2=0, minimum=0;
        d1 = abs(b-a); d2 = m - abs(b-a);
        cout << min(d1,d2)<<'\n';
    }
}