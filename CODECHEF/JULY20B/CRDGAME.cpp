#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int Sum(long long int a)
{
	long long int s =0;
	while(a!=0)
	{
		s = s + a%10;
		a = a/10;
	}
	return s;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int pointc = 0,pointm=0,pc,pm;
		long long int c,m;
		while(n--)
		{
			cin>>c>>m;
			pc = Sum(c);
			pm= Sum(m);
			if(pc == pm)
			{
				pointc++;
				pointm++;
			}
			else if(pc > pm)
				pointc++;
			else
				pointm++;
		
		}
		
		if(pointc == pointm)
			cout<<2<<" "<<pointc<< endl;
		else if(pointc > pointm)
			cout<<0<<" "<<pointc<<endl;
		else
			cout<<1<<" "<<pointm<<endl;
	}
	return 0;
}
