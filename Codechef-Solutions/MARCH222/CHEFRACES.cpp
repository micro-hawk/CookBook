#include<iostream>
using namespace std;
int main() {
    int t; cin >> t; while (t--)
    {
        int x,y,a,b; cin >> x >> y >> a >> b;
        bool win = false; int count = 0;
        if (x==a || x ==b)
        {
            count++;
        } 
        if (y==a || y==b)
        {
            count++;
        }
        cout <<  abs(count-2) << "\n";
        
    }
    
}