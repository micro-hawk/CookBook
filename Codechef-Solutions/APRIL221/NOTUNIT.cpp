#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t;  while (t--)
    {
        ll a,b; cin >> a >> b; 
        if (a%2==0){
            if (a+2 <= b) cout << a << " " <<  a+2 << '\n';
            else cout << -1 << '\n';
        }
        else {
            if(a%3==0) {
                if(a+3 <= b) cout << a << " " << a+3 << '\n';
                else cout << a+1 << " " << a+1+2 << '\n';
            } else cout << -1 << '\n';
        }
        
    }
    
}