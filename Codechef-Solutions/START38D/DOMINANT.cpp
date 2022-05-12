#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while(t--) { 
        //Write code below: 
    vector<ll> v; v.reserve(3);
    for (int i = 0; i < 3; i++)
    {
        int input; cin >> input; 
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    
    //printing 
    // for(const auto e : v) cout << e << " ";

    if (v[2] > v[0]+v[1])   cout << "YES\n";
    else cout << "NO\n";
    
    }
}