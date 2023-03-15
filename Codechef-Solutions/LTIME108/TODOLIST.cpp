#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while(t--) { 
        //Write code below: 
        int n; cin >> n;
        ll ar[n]; for (int i = 0; i < n; i++)   cin >> ar[i];
        ll count=0;
        for (int i = 0; i < n; i++)
            if (ar[i] >= 1000)   count++;
        cout << count << '\n';
    }
}