#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		string a;
		cin>>a;
		long len = a.length();
		
		stack<int> s;
		long prefix =0;
		for(long int i=0;i<len;i++)
		{
			if(a[i] == '<')
				s.push(a[i]);
			else
			{
				if(s.empty())
					break;
				else
					s.pop();
					
				if(s.empty())
					prefix = i+1;
			}
		}
		
		cout<<prefix<<endl;
	}
	return 0;
}
