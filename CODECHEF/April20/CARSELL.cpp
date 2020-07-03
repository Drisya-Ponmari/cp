#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int M = 1000000007;
	int t;
	cin>>t;

	while(t--)
	{
		long int N,i;
		cin>>N;
		long long int p[N];
		for(i=0;i<N;i++)
			cin>>p[i];
		sort(p,p+N);
		long int c;
		long long int s;
		s = p[N-1]%M;
		c = 1;
		for(i=N-2;i>=0;i--)
		{
			if(p[i]-c >=0)
				p[i] = p[i]-c;
			else
			    p[i] = 0;
			s = (s%M + p[i]%M )%M;
			c++;
		}
		cout<<s<<endl;
	}
	return 0;
}
