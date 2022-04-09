#include<iostream>
#define ll long long int
using namespace std;
int main() {
    ll t; cin >> t; while (t--)
    {
        ll x,y; cin >> x >> y;
        if (y%x == 0) cout << y/x-1 << '\n';
        else cout << y/x << '\n';
    }
}