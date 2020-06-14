#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,m;
		long long int ans =0;
		scanf("%lld",&n);
		m = n/2 + 1;
		long long int i,j,round;
		i =0;
		j=0;
		round = 1;
		while(round <= m)
		{
			ans = ans + i*j;
			i =i+8;
			j++;
			round++;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
