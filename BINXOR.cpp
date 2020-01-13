#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
long long int abs(long long int a,long long int b)
{
  if(a > b)
    return (a-b);
  else
    return (b-a);
}

long long int min(long long int a,long long int b)
{
  if(a>b)
    return b;
  else
    return a;
}
int main()
{
	long int test;
	long long int m =  1000000007;
	long long int fact[100001],i;
	fact[0] = 1;
	fact[1] = 1;
	for(i=2;i<100001;i++)
		fact[i] = ((fact[i-1] %m ) * (i %m))%m;
	cin>>test;
	while(test--)
	{
		string a,b;
		long int n;
		cin>>n;
		cin>>a;
		cin>>b;
		
		long long int a_ones=0,a_zeros=0,b_ones=0,b_zeros=0,min_one=0,max_one=0,i;
		for(i=0;i<n;i++)
		{
			if(a[i] == '1')
				a_ones++;
			else
				a_zeros++;
			
			if(b[i] == '1')
				b_ones++;
			else
				b_zeros++;
		}
		
		min_one = abs(a_ones - b_ones);
		max_one = min(a_ones,b_zeros) + min(a_zeros,b_ones);
		i = min_one;
		long long int result = 0;
		long long int temp,Temp;
		while(i<=max_one)
		{
			temp = fact[n] ;
			Temp = fact[i] * fact[n-i];
			temp = temp / Temp;
			result = ((result %m)+ temp%m)%m;
			i =  i +2;
		}
		cout<<result<<endl;
	}
	return 0;
}
