#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int N;
	cin>>N;
	int i;
	long int a[N],smallest;

	for(i = 0;i<N;i++)
	{
		cin>>a[i];
		if(i==0)
			smallest =a[i];
		else
			if(smallest > a[i])
				smallest = a[i];
	}
	cout<<smallest<<endl;
	}
	return 0;
}
