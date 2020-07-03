#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		int Max = INT_MIN;
		int Min = INT_MAX;
		int prev =0;
		int f=1;
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1] - a[i] > 2)
			{
				Max = max(Max, i-prev+1);
				Min = min(Min,i-prev+1 );
				prev = i+1;
//				cout<<Max<<" "<<Min<<" "<<prev<<endl;
				f=0;
			}
		}
/*		if(f== 1)
		{
			Max = n;
			Min = n;
		}*/
		Max = max(Max,n-prev);
		Min = min(Min,n-prev);
		cout<<Min<<" "<<Max<<endl;

	}
	return 0;
}
