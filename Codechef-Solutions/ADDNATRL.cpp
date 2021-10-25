#include<iostream>
using namespace std;
int main() {
    int n; cin >> n;
    if (n >= 1)
    {
        int sum=0; 
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        cout << sum;
        
    }
    
}