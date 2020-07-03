#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		scanf("%s",&s);
		long long int n = s.length();
		int succ;
		if(n%2 ==1)
		{
			succ=1;
			for(long long int i=0;i<n-1;i++)
			{
				if(s[i] != s[i+1])
				{
					succ=0;
					break;
				}
			}
		}
		else
		{
			succ=1;
			long long int v[26] ={0};
			for(long long int i=0;i<n;i++)
			{	
				int j = s[i] -'a';
				v[j]++;
			}
			long long int x = n/2;
			for(int k=0;k<26;k++)
			{
				if(v[k] > x && v[k] != n )
				{
					succ=0;
					break;
				}
				else if(v[k] <x && v[k]!=0)
				{
					succ =0;
					break;
				}
			}
			
		}
		
		if(succ==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
