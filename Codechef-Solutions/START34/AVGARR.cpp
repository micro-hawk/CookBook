#include<iostream>
#define ll long long 
using namespace std;
int main() {
    ll t; cin>>t; while (t--)
    {
        ll n, mean; cin >> n >> mean;  
        ll kl = n/2;
        if(n&1) {
            for(int i=mean-1; i< mean+kl+1; i++) cout << i << " ";
        } else {
            for (int i = mean - 1; i < mean+kl+1; i++)
            {
                if( i!= mean) cout << i << " ";
            }
            
        } cout << "\n";
    }   
    
}