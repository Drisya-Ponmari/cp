#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		long int a[n],b[n];
		
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];

		sort(a,a+n);
		sort(b,b+n);
		
		long long int dia=0;
		for(i=0;i<n;i++)
			dia = dia + min(a[i],b[i]);
		cout<<dia<<endl;
	
	
	}
	return 0;
}
