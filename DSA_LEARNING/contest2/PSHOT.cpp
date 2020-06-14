#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int N,s,i;
		cin>>N;
		int a,b,A=0,B=0,f=0;
		long int S = 2*N;

		long int round = 2*N;
		string h;
		cin>>h;
		for(i=1;i<=round;i++)
		{
		
			if(h[i-1] == '1')
				 a= 1;
			else
				a =0;
			//cout<<a<<endl;	 
			if(f==0)
			{
				A=A+a;
				f=1;
			}
			else
			{
				B  = B+a;
				f=0;
			}
			
			if( A-B>N-(i/2) || (B-A) > N - ((i+1)/2) )
				break;
		}
		if(i==round+1)
			i = i-1;
		cout<<i<<endl;
	
	}
	return 0;
}
