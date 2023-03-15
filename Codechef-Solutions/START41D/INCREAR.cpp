#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while(t--) { 
        int x,y; cin >> x>>y;
        int count = 0;
        if (x<y)
        {
            for (int i = 0; i < 2; i++)
            {
                x+=1;
                count++; 
                if (x==y)
                {
                    break;
                }
                
            }
            
        }
        
    }
}