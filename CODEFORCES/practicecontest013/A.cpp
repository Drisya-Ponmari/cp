#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
	
	int t = INT_MAX;
	int cost = INT_MAX;
	for(i=0;i<n;i++)
	{
		int f=0,s=0,temp=a[i];
		for(int j=0;j<n;j++)
		{
			if(abs(a[i] - a[j]) >1)
			{
				f = f+abs(a[i] - a[j]);
			}
			if(abs(a[i]-1 - a[j]) >1)
				s = s + abs(a[i]-1-a[j]);
		
		}
		if(s<f)
		{
			f = s;
			temp = a[i]-1;
		}

		if(cost > f)
		{
			t = temp;
			cost = f;
		}
			
	}
	cout<<t<<" "<<cost<<endl;
	
