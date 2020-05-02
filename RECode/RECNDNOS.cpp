#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	
		int n;
		cin>>n;
		int a[n];
		int i,j,type;
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
			
		int count,max_count=-1;
		for(i=0;i<n;i++)
		{
			//cout<<a[i]<<endl;
			count=1;
			int 	prev=i;
			for(j=i+1;j<n;j++)
			{
				if(a[i] == a[j] && j != prev+1)
				{
					count++;
					prev = j;
				}
				
			}
			//cout<<a[i]<<endl;
			if(max_count <= count)
			{
				//cout<<"hi"<<" "<<a[i]<<endl;
				if(max_count == count)
				{
					if(a[i] < type)
						type = a[i];
				}
				else
				{
				type = a[i];
				max_count = count;
				}
			}
		}
		
		cout<<type<<endl;
	}
	return 0;
}
