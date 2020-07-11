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
		scanf("%ld",&n);
		ll A[n],B[n];
		unordered_map <ll,ll> map,amap,bmap;
		
		ll min_val = INT_MAX;
	//Reading Input and finding min value and setting up hasmap
		for(i=0;i<n;i++)
		{
			scanf("%lld",&A[i]);
			min_val = min(A[i],min_val);
			map[A[i]]++;
		
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&B[i]);
			min_val = min(B[i],min_val);
			map[B[i]]++;
		
		}
		
		//making it half
		int f = 1;
		for(auto j : map)
		{
			if((j.second)%2 == 1)
			{
				f =0;	
				cout<<-1<<endl;
				break;
			}
			else
				amap[j.first] = (j.second) /2;
			
		}	
		vector<ll>av,bv;
		if(f)
		{
			bmap = amap;
			for(i=0;i<n;i++)
			{
				if(amap[A[i]] ==0)
						av.push_back(A[i]);
				else
					amap[A[i]]--;
			}
				
			for(i=0;i<n;i++)
			{
				if(bmap[B[i]] ==0)
					bv.push_back(B[i]);
				else
					bmap[B[i]]--;
			}
		
		l a,b;
		a = av.size();
		b = bv.size();
		if(a!=b)
			cout<<-1<<endl;
		else if(a == 0)
			cout<<0<<endl;
		else
		{
				sort(av.begin(),av.end());
				sort(bv.begin(),bv.end(),greater<ll>());
				ll cost =0;
				for(i=0;i<a;i++)
				{
					cost = cost + min (2*min_val, min(av[i],bv[i]));
				}
				cout<<cost<<endl;
		}	
			
		}
		}
	return 0;
}
