#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Get(pair<int,int>* pos,int n)
{
	vector<bool> v(n,false);
		int cnt =0;
		for(int i=0;i<n;i++)
		{
			if(v[i] || pos[i].second == i)
				continue;
			
			int cycle_size = 0;
			int j = i;
			while(!v[j])
			{
				v[j] = 1;
				j = pos[j].second;
				cycle_size++; 
			}
			cnt = cnt + max(0,cycle_size -1);
		}
		return cnt;
}
void Swap(int x,int y,pair<int,int>* pos,int n)
{
	int i,j;
	for(i=0;i<n;i++)
		if(x == pos[i].first)
			break;
		
	for(j=0;j<n;j++)
		if(y == pos[j].first)
			break;
	
	int temp = pos[i].second;
	pos[i].second = pos[j].second;
	pos[j].second = temp;
		
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int cnt =0;
		int n,m;
		cin>>n>>m;
		int p[n];
		int i,j;
		for(i=0;i<n;i++)
			cin>>p[i];
			

		pair<int,int> pos[n];
		for(i=0;i<n;i++)
		{
			pos[i].first = p[i];
			pos[i].second = i;
		}
		
		sort(pos,pos+n);
		cnt = Get(pos,n);
		//cout<<cnt<<endl;
		int x,y;
		for(i=0;i<m;i++)
		{
			cin>>x>>y;
			Swap(x,y,pos,n);
			cnt = min(cnt,Get(pos,n));
		//	cout<<cnt<<endl;
		}
		
		
		cout<<cnt<<endl;
	}
	return 0;
}
