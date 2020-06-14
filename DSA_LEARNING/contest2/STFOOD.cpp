#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()

{
	int t,n,s,v,p;
	int maxi= INT_MIN;
	cin>>t;
	while(t--)
	{
		
		cin>>n;
		maxi = INT_MIN;
		while(n--)
		{

			cin>>s>>p>>v;
			int temp = ( (p/(s+1))) * v;
			maxi = max(temp,maxi);
		}
		cout<<maxi<<endl;
	
	}
//	cout<<maxi<<endl;
	return 0;
}
