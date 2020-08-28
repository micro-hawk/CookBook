// There are two kangaroos on an x-axis ready to jump in the positive direction (i.e, toward positive infinity). The first kangaroo starts at location  and moves at a rate of  meters per jump. The second kangaroo starts at location  and moves at a rate of  meters per jump. Given the starting locations and movement rates for each kangaroo, can you determine if they'll ever land at the same location at the same time?

// Explanation 0

// The two kangaroos jump through the following sequence of locations:

//     0−>3−>6−>9−>120->3->6->9->120−>3−>6−>9−>12
//     4−>6−>8−>10−>124->6->8->10->124−>6−>8−>10−>12

// Thus, the kangaroos meet after jumps and we print YES.

// Sample Input 1

// 0 2 5 3

// Sample Output 1

// NO

// Explanation 1

// The second kangaroo has a starting location that is ahead (further to the right) of the first kangaroo's starting location (i.e., x2>x1x_2 > x_1x​2​​>x​1​​). Because the second kangaroo moves at a faster rate (meaning v2>v1v_2>v_1v​2​​>v​1​​) and is already ahead of the first kangaroo, the first kangaroo will never be able to catch up. Thus, we print NO.

#include<iostream>
using namespace std;

string same()
{
    int x1,v1,x2,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(x1+v1 == x2+v2)
    { 
        return "YES";
    }
    else
    {
        return "NO";
    }
    
}
int main()
{
    string result = same();
    cout << result << endl;
    return 0;
}