#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--)
    {
        int a,b,c; cin >> a >> b >> c;
        if(a>=b && b>=c || a<=b && b<=c) cout << b << "\n";
        else if (a>=c && c>=b || a<=c && b>=c) cout << c << "\n";
        else cout << a << "\n";
    }
}