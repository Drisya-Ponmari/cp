#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i =0 ; i<n ; i++)
		cin>>a[i];
	
	int first = INT_MAX,second = INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(a[i] <= first)
		{
			second = first;
			first = a[i];
		}
		else if(a[i] <= second)
			second = a[i];
	}

	cout<<second<<endl;
	
	return 0;

}

//time complexity o(n)

