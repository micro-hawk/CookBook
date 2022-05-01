#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main() {
ll t; cin >> t; while(t--) {
        //Write your logic below: 
        ll size; cin >> size;
        int * parr = new int[size];
        for(ll _=0; _<size; _++) cin >> parr[_];
        
        //printing array.
        // for(ll _=0; _<size; _++) cout << parr[_] << " ";
        sort(parr, parr+size);
        bool fal = true;
        for (ll k = 1; k < size-1; k++)
        {
            ll d1=parr[k] - parr[k-1];
            ll d2=parr[k+1] - parr[k]; 
            if(d1 != 2*d2 && 2*d1 != d2) {
                fal = false;
                break;
            }
        }
        if (fal) cout << "Yes\n";
        else cout << "NO\n";
        delete [] parr;
    }
}