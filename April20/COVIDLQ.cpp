#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		int j,flag=1;
		for(i=0;i<n;i++)
		{
			int wrong = 1;
			for(j=i+1;j<n;j++)
			{
				if(a[j] == 1 && a[i] == 1 && j-i<6)
				{
						wrong = 0;
						break;
					
				}
			}
			if(wrong == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		
	}
	return 0;
}
