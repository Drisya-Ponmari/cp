#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,i;
		cin>>n>>m;
		int f[n],p[n];
		for(i=0;i<n;i++)
			cin>>f[i];
	
		for(i=0;i<n;i++)
			cin>>p[i];
		

		int tot[m];
		for(i=0;i<m;i++)
			tot[i] = -1;

		for(i=0;i<n;i++)
		{
			if(tot[f[i] - 1] == -1)
				tot[f[i]-1] = 0;
			tot[f[i]-1] = tot[f[i]-1]+p[i];
		}
		int min = INT_MAX;
		for(i=0;i<m;i++)
		{
		if(tot[i] != -1 && tot[i]<min)
			min = tot[i];
		}
		cout<<min<<endl;
	}
	return 0;
}
