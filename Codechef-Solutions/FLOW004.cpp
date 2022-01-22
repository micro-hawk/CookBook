#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t; while (t--)
    {
        int n; cin >> n;
        vector<int> se; 
        for (; n; n/=10)
            se.push_back(n%10);
        
        // for( const auto e : se) 
        //     cout << e << " ";


        cout << se[se.size()-1] + se[0] << "\n";
    }
    
}