#include<iostream>
#define ll long long
using namespace std;
int main() {
ll t; cin >> t; while(t--) {
        //Write your logic below: 
        ll d_mask, c_mask; cin >> d_mask >> c_mask;
        if (d_mask * 100 < c_mask*10)   cout << "Disposable\n";
        else if(c_mask*10 < d_mask*100) cout << "CLOTH\n";
        else if(d_mask*100 == c_mask*10) cout << "CLOTH\n";
        
    }
}