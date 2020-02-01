#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int fact(int n)
{
    long long int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
} 

long long int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
      
int main()
{	long long int M = 1000000007;
	int T;
	cin>>T;
	int j = 1;
	while(j<=T)
	{
	int c,v,l;
	cin>>c>>v>>l;
	long long int total = 0;
	int i=0;
	cout<<"Case #"<<j<<": "; 
	while(1)
	{
		int s_t = c*v;
		long long int f_t = nCr(l-i,i);
		long long int temp = (  (f_t) * pow(s_t,i) * pow(v,l-(2*i)) );
		total = total + temp;
//		cout<<i<<"::"<<temp<<endl;
		i++;
		if(l-2*i<0)
                        break;

	}
	cout<<total<<endl;
	j++;
	}
	return 0;
}
