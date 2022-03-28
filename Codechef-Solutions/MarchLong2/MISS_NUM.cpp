#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll t; cin >> t; while (t--)
    {        
        // vector<ll>v; v.reserve(4);
        ll v[4];
        for (int i = 0; i < 4; i++)
            cin >> v[i] ;
        sort(v, v+4);
        ll x1 = (v[2] + v[0])/2;
        ll y1 = (v[2] - x1);
        ll x2 = (v[2] + v[1])/2;
        ll y2 = v[2] - x2;
        ll x3 = (v[3] + v[0])/2;
        ll y3 = v[3] - x3;
        ll x4 = (v[3] + v[1])/2;
        ll y4 = v[3] - x4;

        if(x1%1==0 && x1%1!=0 && y1%1==0 && y1%1!=0)
        if((x1/y1 == v[1]) && (x1*y1 == v[3]) && (x1>=1) && (y1>=1) && (x1<=10000) && (y1<=10000)){
            cout << x1 << " " << y1 << "\n";
            continue;
        }

        if(x2%1==0 && x2%1!=0 && y2%1==0 && y2%1!=0)
        if((x2/y2 == v[0]) && (x2*y2 == v[3]) && (x2>=1) && (y2>=1) && (x2<=10000) && (y2<=10000)){
            cout << x2 << " " << y2 << "\n";
            continue;
        } 
        
        if(x3%1==0 && x3%1!=0 && y3%1==0 && y3%1!=0)
        if((x3/y3 == v[1]) && (x3*y3 == v[2]) && (x3>=1) && (y3>=1) && (x3<=10000) && (y3<=10000)){
            cout << x3 << " " << y3 << "\n";
            continue;
        }         
        if(x4%1==0 && x4%1!=0 && y4%1==0 && y4%1!=0)
        if((x4/y4 == v[0]) && (x4*y4 == v[2]) && (x4>=1) && (y4>=1) && (x4<=10000) && (y4<=10000)){
            cout << x4 << " " << y4 << "\n";
            continue;
        }
        cout << -1 << " " << -1 << "\n";
    }
    
}