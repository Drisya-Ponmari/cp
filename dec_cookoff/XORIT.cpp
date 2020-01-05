#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int XOR(long long int n)
{
			long long int temp;
	for(long long int i=1;i<=n;i++)
	{
			temp = i^n;
		if(  temp <= n && temp >=1)
			return i;
	}
	
	return -1;
}
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long long int l,r,i;
		cin>>l;
		cin>>r;
		long long int sum = 0;
		for(i=l;i<=r;i++)
		{
			sum = sum + XOR(i);
			//cout<<i <<":"<<XOR(i)<<endl;
			cout<<sum<<endl;
		}
		
		cout<<sum<<endl;
	}
	return 0;
}
