#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define l long int
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		l n,i;
		cin>>n;
		l s[n];
		for(i=0;i<n;i++)
			cin>>s[i];
			
		l total =0;
		l value = INT_MAX;
		for(i=0;i<n;i++)
		{
			total = total + min(value,s[i]);
			if(s[i] < value)
				value = s[i];
		
		}
		
		cout<<total<<endl;
		
	}
	return 0;
}
