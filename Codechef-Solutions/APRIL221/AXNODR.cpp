#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while (t--)
    {
        ll n,b=1; cin >>n;
        if(n%4==3 || n%4==2) cout << 3 << "\n";
        else if (n%4==0) cout << n+3 << "\n";
        else if (n%4==1)    cout << n << "\n";
    }
    
}