#include<iostream>
#define ll long long
using namespace std;
int main() {
ll t; cin >> t; while(t--) {
        //Write your logic below: 
        ll n; cin >> n;
        if(n==1) cout << "1\n";
        else if(n>=2 && n<4)   cout << n-1 << "\n";
        else cout << n << "\n";
    }
}