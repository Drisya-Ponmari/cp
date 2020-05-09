#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()

{
	long int t;
	long long int x,y,l,r,i,j,maxi_val,u;
	cin>>t;
	while(t--)
	{
		scanf("%lld %lld %lld %lld",&x,&y,&l,&r);

		if(x == 0 || y == 0)
			maxi_val = 0;

		else
			maxi_val = x|y;
			
		printf("%lld\n",maxi_val);
		
	}
	return 0;
}
