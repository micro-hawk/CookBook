#include<iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n, result=1; cin >> n;
        while(n>0) {
            result = result * n;
            n--;
        }
        cout << result << endl;
        
    }
}