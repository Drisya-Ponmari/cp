#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int isPrime(long long int n)
{
	for(long long int i =2;i<n;i++)
	{
		if(n%i ==0)
			return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,i,count=0;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
			i=0;
		while(1)
		{
			if(a[i]!=0)
			{
				if(isPrime(a[i]))
				{	a[i] = 0;
					cout<<i+1<<" ";
					count++;
				}
				else
					a[i]++;
			}
			//cout<<count<<endl;
				if(count == n)
					break;
				if(i>=n)
					i=0;
				i++;		
		}
		cout<<endl;
	}
	return 0;
}
