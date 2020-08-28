#include<iostream>
using namespace std;

int main()
{
    int s,t,a,b,m,n;
    int apple,orrange, app_count=0, ora_count=0;
    
    cin >> s >> t >> a >> b >> m >> n;
    for(int i=0; i<m; i++)
    {
        cin >> apple;
        if ((a+apple) >= s && (a+apple) <= t )app_count++;
    }
    for(int i=0; i<n; i++)
    {
        cin >> orrange;
        if ((b+orrange) >= s && (b+orrange) <= t )ora_count++;
    }

    cout << app_count << endl;
    cout << ora_count << endl;

    return 0;
}