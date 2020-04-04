#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long int x,k;
	cin>>t;
	while(t--)
	{
		cin>>x>>k;
		//Fing Kfactors of x;
		vector<long int> p;
		while(x%2 == 0)
		{
			p.push_back(2);
			x = x/2;
		}

		for(long int i = 3;i*i<=x;i=i+2)
		{
			while(x%i == 0)
			{
				p.push_back(i);
				x = x/i;
			}
		}
		if(x>2)
			p.push_back(x);
		if(p.size() >= k)
			cout<<1<<endl;
		else
			cout<<0<<endl;
		


	}
	return 0;
}
