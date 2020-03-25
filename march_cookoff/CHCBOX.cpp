#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int N,i;
		cin>>N;
		long int a[N],s=INT_MIN;
		for(i=0;i<N;i++)
		{
			cin>>a[i];
			if(s < a[i])
				s = a[i];
		}
		long int start,end=-1;
		int flag = 0;
		for(i=0;i<N;i++)
		{
			if(a[i] == s && flag == 0)
			{
				start = i;
				flag = 1;
			}
			else if (a[i] == s)
				end = i;


		}
		long int shift;
		if(end == -1)
				shift = N/2;
		else
		{
			if(start >= N/2)
			{
				shift = N - end + (start - N/2);
			}
			else
			{
				long int gap = end - start  -1 ;
				if(gap > N/2 - 2)
					shift = 0;
				else
					shift = (N/2 - (gap + 2) ) + 1;
				
			}
		}
		cout<<shift<<endl;
	}
	return 0;
}
