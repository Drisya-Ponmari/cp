#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
		long long int n,m,ans;
		scanf("%lld %lld",&n,&m);
		if(n==1)
			ans =0;
		else if(n==2)
			ans = m;
		else
			ans = 2*m;
		printf("%lld\n",ans);
	}
	return 0;
}
