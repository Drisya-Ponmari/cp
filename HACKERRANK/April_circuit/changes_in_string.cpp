#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		
		long int n;
		cin>>n;
		string s;
		cin>>s;
		long int i;
		long int as=0,bs=0;
		
		//find the division where b's is greater than as
		for(i=0;i<n;i++)
		{
			if(s[i] == 'A')
				as++;
			else
				bs++;
		}
		
		long long int bst_f = as;
		long long prev =0;
		for(i=0;i<n;i++)
		{
			if(s[i] == 'A')
			{
				as--;
				bst_f = min(bst_f,as+prev);
			}
			else
			{
				prev++;
			}
		}
		cout<<bst_f<<endl;
		
	}
	return 0;
}
