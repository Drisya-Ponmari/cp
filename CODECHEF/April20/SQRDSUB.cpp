#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int good(long long int x)
{
	x = abs(x);
	if(x%2 == 1)
		return 1;
	else if(x%4 == 0)
		return 1;
	else if(x%8 == 0)
		return 1;
	else if(x%4 == 1)
		return 1;
	else if(x%4 == 3)
		return 1;
	else
		return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int N,i;
		cin>>N;
		long long int a[N];

		for(i=0;i<N;i++)
			cin>>a[i];
	
		long int j,count=0;
		long long int product;
		for(i=0;i<N;i++)
		{
			product = a[i];
			if(good(product))
				count++;
			for(j=i+1;j<N;j++)
			{
				product  = product* a[j];
				if(good(product))
					{
						cout<<i<<"::"<<j<<endl;
						count++;
					}
			}
		}
		cout<<count<<endl;

	}
	return 0;
}
