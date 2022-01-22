#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;  while (t--)
    {
        int n; cin >> n;
        vector<int> sr; 
        for(; n; n/=10) 
            sr.push_back(n%10);
            
        int count = 0;
        for (int i = 0; i < sr.size(); i++)
        {
             if(sr[i] == 4)
                count++;
        }

        cout << count << "\n";
        
    }
    
}