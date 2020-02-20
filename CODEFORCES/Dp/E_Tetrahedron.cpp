#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define l long 
#define ll long long

const long long int  mod =  1000000007;
const l N = 1e7+2;

ll path[4][N];
ll v[4][N];

ll find_path(int src,l n)
{

	if(n == 0)
	{
		if(src == 3)
			return 1;
		else
			return 0;
	}

	ll &ans = path[src][n];
//	cout<<v[src][n]<<endl;
	if(v[src][n])
		return ans;
	v[src][n] =1;
	ans = 0;
	for(int i =0;i<=3;i++)
	{
		if(i != src)
			ans  +=  find_path(i,n-1);	
		if(ans >= mod)
			ans -= mod;
	}
	return ans;

}
int main()
{
	l n;
	cin>>n;
	cout<<find_path(3,n)<<endl;

	
	return 0;
}
