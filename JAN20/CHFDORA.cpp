#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,m,i,j,u,d,l,r;
		cin>>n>>m;
		
		long long int to = n*m;
		long int a[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
					cin>>a[i][j];
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
					u = i-1;
					d = i+1;
					l = j-1;
					r = j+1;
					while(u >=0 && l >=0 && d < n && r < m)
					{
							if(a[u][j] == a[d][j] && a[i][l] == a[i][r])
							{
								to++;
								u--;
								d++;
								l--;
								r++;
							}
							else
								break;
					}
			}
		}
		cout<<to<<endl;
	}
	return 0;
}
