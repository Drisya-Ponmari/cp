#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int M = 1000000007;
long long int nCr(int n,int r)
{
	long long int temp=1;
	long long int d = 1;
	while(r>0)
	{
	
		temp = (temp*n)%M;
		d = d*r;
		if(temp%d == 0)
		{
			temp = temp/d;
			d = 1;
		
		}
		n--;
		r--;
	
	}
	
	return temp%M;
	

} 
int main()
{	
	long long int r,f_t,temp,total,s_t,t_t;
	int T;
	cin>>T;
	int j = 1;
	while(j<=T)
	{
	int c,v,l;
	cin>>c>>v>>l;
    total = 0;
	int i=0;
	cout<<"Case #"<<j<<": "; 
	while(1)
	{
		 s_t = c*v;
		 f_t = nCr(l-i,i);
		 s_t =  pow(s_t,i);
		 t_t = pow(v,l-(2*i)) ;
		temp = (  f_t * s_t%M * t_t%M)%M;
		//cout<<temp<<endl;
		total = total + temp;
		//cout<<i<<"::"<<temp<<endl;
		i++;
		if(l-2*i<0)
                        break;

	}
	cout<<total<<endl;
	j++;
	}
	return 0;
}
