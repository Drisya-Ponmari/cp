#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin >>T;
	while(T--)
	{
		long long int N,i,f=0;
		cin>>N;
		long long int A[N];
		int flag = 0;
		for(i=0;i<N;i++)
		{
			cin>>A[i];
			if(A[i] !=0 && flag ==0)
			{	
				flag = 1;
				f = i;
			}
		}
		if(flag ==0)
		{
			cout<<1<<endl;
			continue;
		}
		long long int l=0;
		for(i=N-1;i>=0;i--)
		{
			if(A[i] !=0)
			{
				l = i;
				break;
			}
		}
//		cout<<l<<" "<<f<<endl;
		cout<<(l-f)+1<<endl;
	
	}
	return 0;
}
