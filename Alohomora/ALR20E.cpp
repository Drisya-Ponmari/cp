#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int T;
	cin>>T;
	while(T--)
	{
		long int N,i;
		cin>>N;
		long int X[N-1];
		for(i=0;i<N-1;i++)
			cin>>X[i];
		long int Y[N-1];
		long int S =0;
		for(i=1;i<=N;i++)
			S = (S ^ i);
		//cout<<S<<endl;
		Y[N-2] = X[N-2];
		//cout<<Y[N-2]<<" ";
		for(i=N-3;i>=0;i--)
		{
			Y[i] = Y[i+1] ^ X[i];
		//	cout<<Y[i]<<" ";
		}
		long int XOR_y = 0;
		for(i=0;i<N-1;i++)
			XOR_y = (XOR_y ^ Y[i]);
		//cout<<endl;
		//cout<<XOR_y<<endl;
		long int A[N];
		A[N-1] = XOR_y ^ S;
		for(i=0;i<N-1;i++)
		{
			A[i]= Y[i] ^ A[N-1];
			cout<<A[i]<<" ";
		}
		cout<<A[N-1]<<endl;
	}
	return 0;
}
