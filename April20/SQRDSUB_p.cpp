#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		long int N,i;
		cin>>N;
		long long int a[N];
		long long int x,count=0;
		for(i=0;i<N;i++)
		{
			cin>>x;
			x = abs(x);
			if(x %4 == 0)
				a[i] = 4;
			else if ( x%4 == 2)
				a[i] = 2;
			else
				a[i] = 1;
				
		}
		long long int p =0;
		
/////////////////////////ODD/////////////////////////
		for(i=0;i<N;i++)
		{
			if(a[i] == 1)
				p++;
			else
			{
				count = count + (p * (p +1) )/2;
				p=0;
			}
		}
		if(p!=0)
			count = count + (p * (p +1) )/2;
		//cout<<"ODD"<<count<<endl;
////////////////////////////////////////////////////////////////
		long long int tot_subseq = (N * (N+1) )/2;
		if(count == tot_subseq)
		{
			//cout<<"ANS"<<count<<endl;
			cout<<count<<endl;
			continue;
		}	
/////////////////////NOT A M(4)/////////////////////////	
		int f =0;
		p =0;
		long int prev;
		long long int waste=0;
		for(i=0;i<N;i++)
		{
			//cout<<"a[i] "<<a[i]<<endl;
			if(a[i] == 1)
			{
				p++;
			}
			else if(f == 0 && a[i] == 2)
			{
					f = 1;
					prev = i;
					p++;
			}
			else if(f == 1 && a[i] == 2)
			{
				
				waste = waste + (p * (p+1))/2;
				p = i - prev;
				prev = i;
				//f = 0;
			}
			else if (a[i] == 4)
			{
				
				waste = waste + (p * (p+1))/2;
				p =0;
				f =0;
				
			}
		
		}
		if(f == 1 || p!= 0)
			waste = waste + (p * (p+1))/2;
		//cout<<"WASTE"<<waste<<endl;
////////////////////////////REPEATED////////////////////////////////
	f =0;
	p =0;
	long long int repeated=0;
	for(i=0;i<N;i++)
	{
		if(f == 0 && a[i] == 2)
		{
			f = 1;
			p =0;
		}
		else if(a[i] == 4)
		 	f =0;
		 else if (a[i] == 1)
		 	p++;	
		 else if(f==1 && a[i] == 2)
		 {
		 	repeated = repeated + (p *(p+1))/2;
		 	p = 0;		
		 }	 	
	}
	//cout<<"REPEATED"<<repeated<<endl;
/////////////////////////////////////////////////////////////////////////////

		//cout<<repeated<<endl;
		waste = waste - repeated;
		count = count + (tot_subseq - waste);
		cout<<count<<endl;
		//cout<<"ANS"<<count<<endl;
		
	}
	return 0;
}
