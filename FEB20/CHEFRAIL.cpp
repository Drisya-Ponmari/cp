#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,m;
		cin>>n;
		cin>>m;
		long int x[n],y[m],i,j;
		for(i=0;i<n;i++)
			cin>>x[i];
		for(i=0;i<m;i++)
			cin>>y[i];
		long int k,total=0,temp=0;
		
		int flag = 0;
		for(i=0;i<n;i++)
		{
			if(x[i]==0)
			{
				flag =1;
				temp = temp + ((n-1 )* m);
				continue;
			}
			for(j=0;j<m;j++)
			{
				
				long int l = (x[i]*x[i]) + (y[j]*y[j]);
				for(k=0;k<m;k++)
				{
					
					if(k!=j)
					{
						long int r = (x[i]*x[i]) + (y[k]*y[k]);
						long int hy = ((y[k]-y[j]) * (y[k]-y[j]) );
						if(l+r == hy)
							{
							//cout<<i<<" "<<j<<" "<<k<<" "<<endl;
							total++;
							}
					}
				}
			}
		}
		for(i=0;i<m;i++)
		{
			
				if(y[i] ==0)
				{
					if(flag == 0)
						temp = temp + ((m-1)*n);
					continue;
				}
			for(j=0;j<n;j++)
			{
				long int l = (y[i]*y[i]) + (x[j]*x[j]);
				for(k=0;k<n;k++)
				{
					if(k!=j)
					{
						long int r = (y[i]*y[i]) + (x[k]*x[k]);
						long int hy = ((x[k]-x[j]) * (x[k]-x[j]) );
						if(l+r == hy)
							{
							//cout<<i<<" "<<j<<" "<<k<<" "<<endl;
							total++;
							}
					}
				}
			}
		}
		total = total/2;
		cout<<total+temp<<endl;
	
	}
	return 0;
}
