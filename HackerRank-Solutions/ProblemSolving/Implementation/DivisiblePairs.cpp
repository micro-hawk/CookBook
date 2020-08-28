#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE  
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w", stdout);
	// #endif
	int n; cin >> n;
	std::vector<int> v; v.reserve(n);

	int k; cin >> k;
	for (int i = 0; i < n; ++i)
	{
		int input; cin >> input;
		v.push_back(input);
	}
	int cnt=0;
	// for(const auto& e: v)
	// {
	// 	cout << e << " ";
	// } cout << endl;

	for (int i=0; i<n-1; i++)
	{
		
		int sum=0;
		for(int j=i+1; j<n; j++)
		{
			sum = v[i] + v[j];
			if (sum%k==0)
			{
				cnt++;
			}
		}

	}
	cout << cnt;
	return 0;
}