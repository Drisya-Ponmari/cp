#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long long int N,K,i,j;	
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		int flag = 0;
		long long int a[N];
		for(i=0;i<N;i++)
		{
			cin>>a[i];
			if(a[i]%K !=0)
				flag=1;
		}
		if(flag == 0)
		{
			cout<<0<<endl;
			continue;
		}

		long long int min,rem,total;
		min= INT_MAX;
		rem = 0;
		for(i=0;i<N;i++)
		{
		
			rem = rem + a[i]%K;
			total =0;
			flag=0;
			for(j=i+1;j<N;j++)
			{ 
			        if(a[j]%K != 0)
					total = total + (K - (a[j]%K));
			//	cout<<total<<endl;
				if(total>rem)
				{
					flag=1;
					break;
				}
				
			}
			if(flag ==0)
			{
				total = rem-total;
				if(min > total)
					min = total;
			}
			//cout<<a[i]<<" "<<rem<<" "<<total<<" " <<min<<endl;
		}

		if(min>rem)
			min = rem;
		cout<<min<<endl;
	}
	return 0;
}
