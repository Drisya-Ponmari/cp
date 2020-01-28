#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int T,round;
	cin>>T;
	round = 1;
	while(round <= T)
	{
		long long int D,j,N,k;
		cin>>D>>k>>N;
		long long int A[D];
		for(j=1;j<=D;j++)
		{
			if(j%2 != 0)
				A[(j+N)%D] = j;
			else
				A[((j-N)%D + D)%D] = j;
				
		}

		cout<<"Case #"<<round<<": ";
		for(j=0;j<D;j++)
		{
			if(A[j] == k)
			{
				cout<<A[(j+1)%D] <<" "<<A[((j-1)%D + D)%D]<<endl;
				break;
			}
		}

		round++;
	}
  	return 0;
}
