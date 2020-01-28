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
		long long int L = ((k - 2 + 2 * N) % D) + 1;
		long long int R = ((k + 2 * N) % D) + 1;
		cout<<"Case #"<<round<<" :"<<R<<" "<<L<<endl;
		round++;
	}
  	return 0;
}
