#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int i;
		long int sum =0;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum = sum + a[i];
		}
		
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);	
			
		sort(a,a+n);
		sort(b,b+n);
		int A=0;
		int B= n-1;
		for(i=0;i<k;i++)
		{
			if(b[B] < a[A])
				break;
			else
			{
				sum = sum - a[A] + b[B];
				B--;
				A++;
				
			}			
		}
		
		printf("%ld\n",sum);
	}
	return 0;
}
