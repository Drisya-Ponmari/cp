#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,k;
	cin>>t;
	k=1;
	while(k<=t)
	{
		cin>>n;
		char in[n],out[n];
		for(i=0;i<n;i++)
			cin>>in[i];

		for(i=0;i<n;i++)
			cin>>out[i];

		char a[n][n];

		//Diagonal

		int j;
		for(i=0;i<n;i++)
			a[i][i] = 'Y';

		//Upper triangle
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i][j-1] == 'Y' && out[j-1]=='Y'&&in[j] =='Y')
					a[i][j] = 'Y';
	
				else
					a[i][j]='N';
			}
		}

		//Lower triangle
		for(i=n-1;i>=0;i--)
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[i][j+1] == 'Y'&& out[j+1] == 'Y' && in[j] == 'Y')
					a[i][j] = 'Y';
				else
					a[i][j] = 'N';
			}
		}

		//Print 

		cout<<"Case #"<<k<<":"<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}
		k++;
	}
	return 0;
}
