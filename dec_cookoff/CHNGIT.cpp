#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i,j;
		cin>>n;
		int a[n];
		int flag =0;
		for(i=0;i<n;i++)
		{	cin>>a[i];
			if(i!=0)
			{
				if(a[i] != a[i-1])
					flag =1;
			}
		}
		
		if(flag ==0)
			cout<<0<<endl;
		else
		{
			int count[101] = {0};
			for(i=0;i<n;i++)
			{	count[a[i]]++;
				//cout<<count[a[i]]<<endl;
				
			}
			sort(count,count+101);
			cout<<n-count[100]<<endl;
		}
	}
	return 0;
}
