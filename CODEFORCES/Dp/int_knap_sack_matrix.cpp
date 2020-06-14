#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int KnapSack(int C,int n,int* w,int* val)
{
	int dp[n+1][C+1];

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=C;j++)
		{
			if(i==0 || j==0)
				dp[i][j] = 0;
			else if(w[i-1] <= C)
				dp[i][j] = max(val[i-1]+dp[i-1][j - w[i-1]] , dp[i-1][j]);
			else
				dp[i][j] = dp[i-1][j];
		//	cout<<dp[i][j]<<endl;
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=C;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[n][C];
}
int main()
{

	int Capacity ,n;
	cin>> Capacity>>n;
	int v[n],w[n];
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n;i++)
		cin>>w[i];
	
	cout<<"Ans "<<KnapSack(Capacity,n,w,v)<<endl; 
	return 0;
}
