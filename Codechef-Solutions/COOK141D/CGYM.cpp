#include<iostream>
#define ll long long
using namespace std;
int main() {
ll t; cin >> t; while(t--) {
        //Write your logic below: 
        ll gym_cost, pt_cost, budget; cin >> gym_cost >> pt_cost >> budget;
        if (budget >= gym_cost)
        {
            if (budget >= gym_cost+pt_cost) cout << "2\n";
            else cout << "1\n";
        } else cout << "0\n";
    }
}