#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,tot;
		cin>>n;
		tot = 4*n -2;
		long long int x,y;
		cin>>x>>y;
		long long int ansx=x,ansy=y;
		while(tot--)
		{
			cin>>x>>y;
			ansx = x ^ ansx;
			ansy = y ^ ansy;
			
		}
		
			cout<<ansx<<" "<<ansy<<endl;
	}
	return 0;
}
