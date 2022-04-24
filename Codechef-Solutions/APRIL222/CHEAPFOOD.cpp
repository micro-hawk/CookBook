#include<iostream>
#define ll long long 
using namespace std;
int main() {
    ll t; cin >>t; while (t--)
    {
        ll bill_amount; cin >> bill_amount;
        // offers
            // 10% 
            // 100rs
        ll dis1, dis2=100;
        dis1 = bill_amount * 0.1;
        if (dis1 <= dis2)
        {
            cout << dis2 << "\n";
        } else {cout << dis1 << "\n";}
        
    }
 }