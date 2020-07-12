#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define l long int

ll x;
ll GetDay(ll temp,ll capacity)
{
	ll ans=0;
	while(1)
	{
		ans++;
		if( temp <= x)
		{
			x = 2*temp;
			return ans;	
		}
		else
		{
			if(temp%2 ==0 && x>= temp/2)
			{
				temp = min(capacity,2*(temp - (temp/2)));
				x = temp;
			}
			else if(temp%2 == 1 && x >= (temp+1)/2)
			{
				temp = min(capacity,2*(temp - (temp+1)/2	));
				x = 2*(temp+1)/2;
			}
			else
			{
				temp = min(capacity,2*(temp -x));
				x= 2*x;
			}
		}
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		l n,i;
		scanf("%ld %lld",&n,&x);
		ll a[n];
		int dif =0;
		for(i=0;i<n;i++)
		{
				scanf("%lld",&a[i]);
				if(dif == 0 && i>0 && a[i] != a[i-1])
					dif=1;
		}
		ll ans;
		
		//If all the populations are same
		if(dif ==0)
		{
			ans = n-1+ GetDay(a[0],a[0]);
		}
		//populations were different
		else
		{
			sort(a,a+n);
			//If the x is greater than or equal to all  the population
			if(a[n-1] <=x)
			{
				ans = n;
			}
			//If the x is smaaller for some population
			else
			{
				ans=0;
				l index;
				for(i=n-1;i>=0;i--)
				{
					index = i;
					if(i==0)
						break;
					else if(a[i-1]*2 <x && a[i]*2 >= x )
						break;
				}
				//cout<<index<<endl;
				//ans = index;
				ll t =x;
				for(i=index;i<n;i++)
				{
					ll f = a[i];
					while(a[i] > x)
					{
						if(x >= (a[i]+1) /2)
						{
							ll gh = (a[i]+1)/2;
							ans++;
							a[i] = max(f,(a[i] - gh)*2);
							x = gh*2;
						}
						else
						{
							x = 2*x;
							ans++;
						}
					}
					
					x = a[i] *2;
					ans++;
				}
				
				for(i=index-1;i>-1;i--)
				{
					ll f = a[i];
					while(a[i] > x)
					{
						if(x >= (a[i]+1) /2)
						{
							ll gh = (a[i]+1)/2;
							ans++;
							a[i] = max(f,(a[i] - gh)*2);
							x = gh*2;
						}
						else
						{
							x = 2*x;
							ans++;
						}
					}
					
					x = a[i] *2;
					ans++;
				}
			
				
			}
		}
		
		printf("%lld\n",ans);
	
	}
	return 0;
}
