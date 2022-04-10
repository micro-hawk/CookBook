#include<iostream>
#define ll long long
using namespace std;

int gcd(ll a, ll b) {
    while (a != b)
    {
        if (a>b) a-=b;
        else b-=a;   
    }
    return a;
}
int main() {
    ll t; cin >> t; while(t--) {
        ll a,b; cin >> a >> b;
        if (a==1 || b==1)   cout << -1 << "\n";
        else if(gcd(a,b) == 1) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}