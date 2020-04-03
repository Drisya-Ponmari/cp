#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,i,j;
		cin>>n;
		long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];

		long int m = INT_MAX;
		/*for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i!=j)
				{
					long int temp = (a[i] & a[j]) ^ (a[i] | a[j]);
					if(temp < m)
						m = temp;
				}
			}
		}*/
		
		sort(a,a+n);
		long int b,c;
		for(i=0;i<n-1;i++)
		{
			b=a[i];
			c=a[i+1];
			
			b = (b&c) ^ (b|c);
			if(b < m)
				m = b;
		}
		cout<<m<<endl;
	}
	return 0;
}
