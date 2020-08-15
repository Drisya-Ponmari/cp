#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long int q;
		cin>>n;
		long int i,x,y,a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		
		
		cin>>q;
        sort(a,a+n);
		while(q--)
		{
			cin>>x>>y;
			long int ans =0;
			int wall = 0;
			long int index,A  = y+x;
		
				int l =0, r=n-1,m;
				ans =n;
				while(l<=r)
				{
					m = l+(r-1)/2;
					if(a[m] > A)
					{
						ans = m;
						r = m-1;
					}
					else if(a[m]<A)
						l = m+1;
					else
					{
						wall = 1;
						break;
					}
				}
			
			if(wall)
				cout<<-1<<endl;
			else
			    cout<<ans<<endl;
	}
	
	}
	return 0;
}
