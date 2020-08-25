#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, w;
	long long int n, k, al, bl, cl, ah, bh, ch, i, j;
	long long int dl, dh;
	long long int m = 1000000007;
	j=1;
	scanf("%d",&t);
	while(j<=t)
	{
		scanf("%lld %lld %d",&n, &k, &w);

		long long int l[n], h[n];
		
		for(i=0 ;i<k ;i++)
			scanf("%lld", &l[i]);
			
		scanf("%lld %lld %lld %lld",&al, &bl, &cl, &dl);
	
		
		for(i=0 ;i<k ;i++)
			scanf("%lld", &h[i]);
			
		scanf("%lld %lld %lld %lld",&ah, &bh, &ch, &dh);

		long long int curr = 0, prev = 0;
		long long int xhigh, yhigh, xlow;
		long long int p[n];
		
		//Initialization
		curr = 2 * (w + h[0]) ;
		p[0] = curr;
		
		xhigh = l[0] + w;
		yhigh = h[0];
		xlow = l[0];
		for(i=1 ;i<n; i++)
		{
			if( i>=k)
			{
				l[i] = (( (al%dl * l[i-2] %dl)%dl + (bl%dl * l[i-1]%dl)%dl + cl%dl) %dl) + 1;
				h[i] = (( (ah%dh * h[i-2]%dh)%dh + (bh%dh * h[i-1]%dh)%dh + ch%dh) %dh) + 1;				
			}
			//cout<<l[i]<<" "<<l[i]+w<<" "<<h[i]<<endl;
			if(h[i] < )
			if( l[i] > xhigh )
			{
				curr =  2* (w + h[i]);
				xhigh = l[i] + w;
				xlow  = l[i];
				yhigh = h[i];
				prev = p[i-1];
				p[i] = prev + curr;
			}
			else
			{
				yhigh = max( yhigh, h[i] );
				xhigh = max( xhigh, l[i]+w);
				
				curr = 2 * ( ( xhigh - xlow) + yhigh);
				p[i] = curr + prev;
			}
			//cout<<xlow<<" "<<xhigh<<" "<<yhigh<<" "<<curr <<" "<<prev<<endl;
			//cout<<l[i]<<" "<<l[i]+w<<" "<<h[i]<<" "<<p[i] <<" "<<prev<<endl;
		}	
		long long int ans = 1;
		for(i=0 ; i<n ;i++)
		{
			//cout<<p[i]<<endl;
			ans = ((ans%m) * (p[i] %m))%m;
			//cout<<p[i]<<endl;
		}
			//ans = (ans * p[i] );
		//cout<<ans%m<<endl;
		cout<<"Case #"<<j<<": "<<ans<<endl;
		
		j++;
	}
	
	
	return 0;
}
