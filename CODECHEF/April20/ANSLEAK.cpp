#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int i,j;
		int a[n][k];
		for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
			{
				cin>>a[i][j];	
			}
		}
//		cout<<"hi"<<endl;
		int b[m]={0};
		int ma,max_rep;
		for(i=0;i<n;i++)
		{
			
			for(j=0;j<k;j++)
			{
				b[a[i][j]-1]++;
			}
			ma = b[0];
			max_rep = 1;
			for(j=0;j<m;j++)
			{
				if(ma < b[j])
				{
					ma = b[j];
					max_rep = j+1;
				}
				b[j]=0;
			}
			cout<<max_rep<<" ";
		}
	}
	return 0;
}		
