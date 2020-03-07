#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int** v;
int** a;
int** dp;
int n,m;
int min_path(int i,int j)
{
	if(i == n-1 && j == m-1)
		return a[i][j];
	if(v[i][j])
		return dp[i][j];
	v[i][j] = 1;
	int &ans = dp[i][j];
	if(j == m-1)
		ans = a[i][j] + min_path(i+1,j);
	else if(i == n-1)
		ans = a[i][j] + min_path(i,j+1);
	else
		ans = a[i][j] + min(min_path(i+1,j),min_path(i,j+1));
	
	return ans;
}
int main()
{
	cin>>n>>m;
	
	int i,j;
	a = (int **)malloc(n * sizeof(int *)); 
	v = (int **)malloc(n * sizeof(int *)); 
	dp = (int **)malloc(n * sizeof(int *)); 
	for (i=0; i<n; i++) 
	{
		a[i] = (int *)malloc(m * sizeof(int)); 
		v[i] = (int *)malloc(m * sizeof(int)); 
		dp[i] = (int *)malloc(m * sizeof(int)); 
	}
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	 
	cout<<min_path(0,0)<<endl;
	return 0;
}
