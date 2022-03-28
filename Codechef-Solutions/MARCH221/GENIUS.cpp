#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while(t--) {
        ll n,x; cin >> n >> x;
        ll a=0, b=0, c=0;
        if (x%3==0)
        {
            a += (x/3);
        }
        else if (x%3 == 1)
        {
            a+=(x/3)+1;
            b += 2;
        } 
        else if (x%3 == 2)
        {
            a+=(x/3)+1;
            b++;
        }
        if (a+b <= n)
        {
            cout << "YES\n";
            cout <<a<<" "<<b<<" "<<n-a-b<<endl;
        } else {
            cout << "NO\n";
        }
            
    }
}