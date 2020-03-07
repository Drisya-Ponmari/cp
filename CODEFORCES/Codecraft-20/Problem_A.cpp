#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,i;
		long int m;
		cin>>n>>m;
		long int a[n];
		long int s = 0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			s = s+a[i];
		}

		long int need = m - a[0];
		long int have = s - a[0];
		if(have < need)
			cout<<a[0]+have<<endl;
		else
			cout<<m<<endl;

		
	}
	return 0;
}
