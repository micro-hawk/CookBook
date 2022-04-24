#include<iostream>
#define ll long long 
using namespace std;
int main() {
    ll t; cin >> t;  while (t--)
    {
       ll  x,y; cin >> x >> y;
       if (x*3 <= y*2)  cout << x*3 << "\n";
       else cout << y*2 << "\n";
    }
    
}