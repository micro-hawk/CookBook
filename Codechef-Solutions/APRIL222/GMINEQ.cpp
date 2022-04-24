#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while(t--) {
        vector<ll> varr; ll n; cin >> n;
        varr.reserve(n);
        for (ll i = 0; i < n; i++)
        {
            ll inpt; cin >> inpt;
            varr.push_back(inpt);
        }
        ll count_positive=0, count_negative=0;
        for (ll i = 0; i < n; i++)
        {
            if (varr[i] == 1)   count_positive++;
            else count_negative++;
        }
        ll diff= abs(count_positive - count_negative);
        if(diff == 0) cout << "YES\n";
        else if(diff == 1) cout << "YES\n";
        else if(diff==2) {
            if ((count_positive%2==0) && (count_negative%2==0))    cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
        
    }
}