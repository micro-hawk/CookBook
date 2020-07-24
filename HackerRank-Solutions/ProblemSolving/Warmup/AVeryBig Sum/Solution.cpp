#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long number, sum=0;

    for(int i=0; i<n; i++)
    {
        cin >> number;
        sum += number;
    }
    cout << sum << " ";
    return 0;
}