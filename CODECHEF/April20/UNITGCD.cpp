#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n;
		scanf("%ld",&n);
		long int ans = n/2;
		if(n!=1)
			printf("%ld\n",ans);
		else
			printf("1\n");
		long int i;
		if(n%2 !=0)
		{
		    if(n==1)
		        printf("1 1\n");
		    else
			    printf("3 1 2 3\n");
			i = 4;
		    while(i<=n)
			{
				printf("2 %ld %ld\n",i,i+1);
				i = i+2;
			}
		}
		else
		{
			i=1;
			while(i<=n)
			{
				printf("2 %ld %ld\n",i,i+1);
				i=i+2;
			}
		}
	}
	return 0;
}




