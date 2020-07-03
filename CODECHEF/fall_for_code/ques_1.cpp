#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long long int t,i;
	cin>>t;
	long long int a[26] = {0};
	int p;
	long long int pos,l,r;	
	char c;
	
	while(t--)
	{
		cin>>p;
		if(p==1)
		{
			cin>>pos>>c;
			s[pos-1] = c;
		
		}	
		else
		{
			cin>>l>>r;
		//	cout<<s<<endl;
			long long int count=0;
			for(i=l-1;i<r;i++)
			{
				a[s[i] - 97] ++;
				if(a[s[i] - 97] == 2)
					count++;
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
