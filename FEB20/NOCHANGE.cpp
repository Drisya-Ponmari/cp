#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define l long
int main()
{
	l t;
	cin>>t;
	while(t--)
	{
	
		int N,i;
		ll p,j,min=INT_MAX;
		cin>>N>>p;
		ll d[N],start,temp;
		
		for(i=0;i<N;i++)
			cin>>d[i];
		
		vector<int> c(N,0);
		int flag =0;
		for(i=0;i<N;i++)
		{
			
			if(p%d[i]  != 0)
			{
				start = p/d[i] + 1;
				temp = start * d[i];
				if(temp - d[i] < p)
					{
					flag = 1;
					c[i] = start;
					break;
					}
			
			}	
		}
		
		if(flag == 1)
		{
			cout<<"YES ";
			for(i=0;i<N;i++)
				cout<<c[i]<<" ";
			cout<<endl;
		}
		else
		{
			ll rest = p;
			flag =0;		
			for(i=N-1;i>=0;i--)
			{
				//cout<<rest<<" "<<d[i]<<endl;
				if(rest%d[i] !=0 && d[i]!=1)
				{
					//cout<<rest<<endl;
					c[i] = rest/d[i] + 1;
					flag = 1;
					break;
				
				}
				
				if(rest%d[i] == 0 && d[i]!=1)
				{
					c[i] = rest/d[i] -1;
					rest = rest - c[i]*d[i];
				}	
			
			}
			
			if(flag == 1)
			{
			cout<<"YES ";
			for(i=0;i<N;i++)
				cout<<c[i]<<" ";
			cout<<endl;
			}
			else
				cout<<"NO\n";	
		
		}
			
		
	}
	return 0;
}
