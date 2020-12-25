#include<bits/stdc++.h>
using namespace std; 
int main() {
	// INPUT AND OUTPUT files
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int arr[6][6]; 
	int hourglass_Sum=0;
	int max = -64;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			hourglass_Sum = arr[i+1][j+1];
			for(int k=0;k<3;k++)
			{
				hourglass_Sum = hourglass_Sum + arr[i][j+k] + arr[i+2][j+k];
			}
			if (hourglass_Sum >  max)		
			{
				max  = hourglass_Sum;
			}
		}
	}
	cout << max;

	return 0;
	}