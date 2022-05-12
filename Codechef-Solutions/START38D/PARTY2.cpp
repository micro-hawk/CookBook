#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while(t--) { 
        //Write code below: 
        ll n,x,k; cin >> n >>x>>k;
        if(n*x <= k)    cout << "YES\n";
        else cout << "no\n";
    }
}