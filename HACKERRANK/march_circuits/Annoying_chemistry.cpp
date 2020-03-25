#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	else
		gcd(b,a%b);
}
long long int lcm(long long int a,long long int b)
{
	
	return (a*b)/gcd(a,b);
}
int main()
{	
	long long int x,y,p,q,g1,g2,l1;
	cin>>x>>y>>p>>q;
	g1 = gcd(max(p,x),min(p,x));
	g2 = gcd(max(q,y),min(q,y));

	p=p/g1;
	x=x/g1;
	q=q/g2;
	y=y/g2;

	l1 = lcm(max(x,y),min(x,y));

	long long int b1,b2,b3;
	b3 = l1;
	b1 = p * (l1/x);
	b2 = q * (l1/y);
	cout<<b1<<" "<<b2<<" "<<b3<<endl;
	return 0;
}
