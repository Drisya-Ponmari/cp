#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define l long 
#define ll long long

const long long int  mod =  1000000007;
const l N = 1e7+2;


int main()
{
	l n;
	cin>>n;
	ll dp[2][n];
	dp[1][0] = 1;
	dp[0][0] = 0;
	for(l steps = 1;steps<=n;steps++)
	{
	
		dp[1][steps] = (3 * dp[0][steps-1])%mod; 
		dp[0][steps] =(2 *dp[0][steps-1] + dp[1][steps-1])%mod;
	
	}		
	cout<<dp[1][n]<<endl;
	return 0;
}
