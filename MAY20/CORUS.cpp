#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int t,n,q;
	long long int c,ans;
	long long int ZERO =0;
	scanf("%ld",&t);
	while(t--)
	{
	
		scanf("%ld %ld",&n,&q);
		string s;
		long int i;
		long int count[26] = {0};
		cin>>s;
		for(i=0;i<n;i++)
		{
			//nf("%c",&s[i]);
//			printf("%c\n",s[i]);
			int j = s[i] - 'a';
			count[j]++;
		}
		while(q--)
		{
			ans=0;
			scanf("%lld",&c);
			for(i=0;i<26;i++)
				ans = ans + max(count[i]-c,ZERO);
			printf("%lld\n",ans);
		}
	}
	return 0;
}
