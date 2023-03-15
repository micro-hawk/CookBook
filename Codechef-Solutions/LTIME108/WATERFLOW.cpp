#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while(t--) { 
        //Write code below: 
        int w,x,y,z; cin>>w>>x>>y>>z;
        int ans = w+(y*z);
        if (ans > x) cout << "overflow\n";
        else if(ans == x) cout << "filled\n";
        else cout << "unfilled\n";
        
    }
}