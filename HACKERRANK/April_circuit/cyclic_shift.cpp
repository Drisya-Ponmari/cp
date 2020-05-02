#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,t;
	cin>>t;
	while(t--)
	{
		char di;
		cin>>n>>m>>di;
		vector<int> binary;
		while(n!=0)
		{
			binary.push_back(n%2);
			n = n/2;
		}
		int x =binary.size();
		while(x<16)
		{
			binary.push_back(0);
			x++;
		}
		x=16;
		int index;
		if(di == 'L')
			index = x-m;
		else
			index = m;
		vector<int> ans;
		int j=index;
		while(j<x)
		{
			ans.push_back(binary[j]);
			j++;
		}
		j = 0;
		while(j<index)
		{
			ans.push_back(binary[j]);
			j++;
		}
		long int temp = 0;
		long int two = 1;
		j=0;
		while(j<x)
		{
			temp = temp + (two * ans[j]);
			two = two*2;
			j++;
		}
		cout<<temp<<endl;

		
	}
	return 0;
}
