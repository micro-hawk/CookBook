#include<iostream>
#include<vector>
using namespace std;
int main()
{
	// #ifndef  ONLINE_JUDGE
	// freopen("input.txt", "r",stdin );
	// freopen("output.txt", "w", stdout);
	// #endif

	int s_count; cin >> s_count;
	std::vector<int> s;
	s.reserve(s_count);
	for (int i = 0; i < s_count; ++i)
	{
		int input; cin >> input;
		s.push_back(input);
	}
	int d,m; cin >> d >> m;

	int cnt=0;
	for(int i=0; i<=s_count-m;i++){
		int sum=0;
		for(int j=i; j<i+m;j++){
			sum = sum + s[j];
		}
		if (sum == d)
		{
			cnt++ ;
		}
	}
	cout << cnt << endl;
	return 0;
}