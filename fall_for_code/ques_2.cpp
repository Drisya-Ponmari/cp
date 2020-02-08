#include <iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

int YES(long long int n)
{

	double re = (double)sqrt(n);
	long long int r = sqrt(n);
	//cout<<re << ":"<<r<<endl;
	if(re - r ==0)
		return 0;
	else
		return 1;
}
int main()

{
	int t;
	cin>>t;
	while(t--)
	{
	long long int l,r,x,y;
	cin>>l>>r;
	//cout<<l;
	if(l<r)
	{
		x = l;
		y = r;
	}
	else
	{
		x= r;
		y = l;
	}
	//cout<<x << ":"<<y<<endl;
	long long int count = 0;
	for(long long int i = x;i<=y;i++)
		if(YES(i))
			count++;
	cout<<count<<endl;
	}	
	return 0;
}
