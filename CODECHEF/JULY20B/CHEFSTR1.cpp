#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		long long int a[n],ans=0;
		cin>>a[0];
		for(long int i=1;i<n;i++)
		{
			cin>>a[i];
			ans = ans + abs(a[i] - a[i-1])-1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
