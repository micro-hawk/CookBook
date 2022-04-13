#include <iostream>
#include<vector>
#define ll long long 
using namespace std;

int main() {
	ll t; cin >> t; while(t--) {
	    vector<ll> v; int n; cin >>  n; 
	    v.reserve(n);
	    for (ll i = 0; i<n; i++) {
	        ll input; cin >> input;
            v.push_back(input);
	    }

        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        
	}
	return 0;
}
