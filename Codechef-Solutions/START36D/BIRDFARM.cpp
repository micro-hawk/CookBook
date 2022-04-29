#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while (t--)
    {
        ll x,y,z; cin >> x>>y>>z;
        if (z%x==0 && z%y!=0)
        {
            cout << "CHICKEN\n";
        } else if (z%x!=0 && z%y==0)
        {
            cout << "DUCK\n";
        } else if (z%x==0 && z%y==0)
        {
            cout << "ANY\n";
        } else if(z%x!=0 && z%y!=0)
	    {
	    cout<<"NONE\n"<<endl; } 
        
    }
}