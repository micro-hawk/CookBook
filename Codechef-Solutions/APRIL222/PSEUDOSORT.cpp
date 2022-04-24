#include<iostream>
#include<vector>
#define ll long long 
using namespace std;
int main() {
    ll t; cin >> t;  while (t--){
        int n; cin >> n; 
        vector<int> v; v.reserve(n);
        for (int i = 0; i < n; i++){
            int input; cin >> input;
            v.push_back(input);
        }
        // for(const auto e:v) cout << e << " ";
        ll count=0;
        for (int i = 0; i < n-1; i++)
        {
            if (v[i] > v[i+1]) count++;
            if(i<n-2 && v[i]>v[i+2]) count++;
            if(count > 1) break;
        }
        if(count > 1) cout << "NO\n";
        else cout << "YES\n";
        
    }
}