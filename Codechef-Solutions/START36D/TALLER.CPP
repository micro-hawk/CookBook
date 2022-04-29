#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while (t--)
    {
        ll x,y; cin >> x >> y;
        if(x > y) cout << "A\n";
        else cout << "B\n";
    }
}