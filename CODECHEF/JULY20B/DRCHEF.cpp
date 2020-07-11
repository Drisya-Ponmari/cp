#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define l long int
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		l n,i;
		ll x,temp;
		scanf("%ld %lld",&n,&x);
		ll a[n];
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		ll ans = n-1;
		temp= a[0];

		while(1)
		{
			ans++;
			if( temp <= x)
				break;
			else
			{
				temp = min(a[0],2*(temp -x));
				x= 2*x;
			}
				
		}
		printf("%lld\n",ans);
	
	}
	return 0;
}
