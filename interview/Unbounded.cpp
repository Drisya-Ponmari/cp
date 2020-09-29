#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Unbounded ( int n, int w, int* val, int* wt)
{
	//int dp[w + 1] =i {0};
	vector <int> dp (w+1, INT_MAX);

	dp[0] = 0;

	for ( int i = 0; i <= w; i++)
	{
		for( int j = 0; j < n; j++)
		{
			if ( wt[j] <= i)
				dp[i]  = min( dp[i], val[j] + dp[ i - wt[j]] );  
		}
	}

	return dp[w];

}

int main()
{

	int n, w;
	cin >> n >> w;

	int a[n], wt[n];

	for( int i = 0; i < n; i++)
		cin >> a[i] >> wt[i];

		
	cout << Unbounded( n, w, a, wt);
	return 0;
}
