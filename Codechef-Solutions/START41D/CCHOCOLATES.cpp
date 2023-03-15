#include<iostream>
using namespace std;
int main() {
    int t; cin >> t; 
    while (t--){
        int x,y,z; cin >> x>>y>>z;
        int total = (x*5) + (y*10);
        cout << total/z << "\n";
    } 
    return 0;
}