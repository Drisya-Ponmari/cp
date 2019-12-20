#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int getPos(double* c,long long int start,long long int end,long long int key,long long int n)
{
	long long int middle = (start+end)/2;
	if(middle == n-1 && c[middle]<=key)
		return middle+1;
	if(middle ==0 && c[middle] >key)
		return 0;
	else if(c[middle] <= key && c[middle+1] >key)
	{
		return middle+1;
	}
	else if(c[middle] > key)
		getPos(c,start,middle-1,key,n);
	else if(c[middle] <=key)
		getPos(c,middle+1,end,key,n);
}


int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j;
		cin>>n;
	
		long long int a[n];
		double c[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			c[i] = double (a[i]) /2;
			//cout<<c[i]<<" ";
		}
		//cout<<endl;
		
		long long int pos,count = 0;
		sort(c,c+n);
		for(i=0;i<n;i++)
		{
			pos = getPos(c,0,n-1,a[i],n);
			//cout<<"Pos of "<<a[i]<< "is "<<pos<<endl;
			count  = count + pos -i-1;
		}
		cout<<count<<endl;
		
	}
	return 0;
}
