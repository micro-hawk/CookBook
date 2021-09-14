#include<iostream>
using namespace std;
int main() {
    float withdraw, currentBalance, tax = 0.50;
    cin >> withdraw >> currentBalance;
    float amount=0, result=0;
    bool okay = false;
    if (!okay)
    {
        
    }
    
    
    if (withdraw <= 2000 && currentBalance <= 2000 && withdraw > 0 && currentBalance > 0)
    {   
        if (withdraw <= currentBalance)
        {
            amount = currentBalance - (withdraw+tax);
            cout << amount;
        }
        
    } else {
        cout << ":bsdk";
    }
    
    return 0;
}