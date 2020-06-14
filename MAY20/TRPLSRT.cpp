#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void RightShift(vector<int>& p,int a ,int b,int c)
{
	int temp = p[b];
	int t = p[c];
	p[b] = p[a];
	p[c] = temp;
	p[a] = t;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		
		int i;
		vector<int> p(n);
		for(i=0;i<n;i++)
		{
			cin>>p[i];
			p[i]= p[i] -1;
		}
		
		vector<int> A;
		int shi = 0;
		int flag  = 1,a,b,c;
		for(int k=0;k<51;k++)
		{
		
			i=0;
			for(int j = 0;j<n;j++)
			{
				
				a = i;
				b = p[i];
				c = p[b];
				if(a == b)
				{
					i++;
					continue;
				}
				if(c==a)
					i++;
				else
				{
					A.push_back(a);
					A.push_back(b);
					A.push_back(c);
					shi++;
					RightShift(p,a,b,c);
				}
				
				if(is_sorted(p.begin(),p.end()))
					break;
			}
			
			i=0;
			for(int j = 0;j<n;j++)
			{
				

				if(p[i] == i)
				{
					i++;
					continue;
				}
				c = p[p[i]];
				if(c==i)
				{
					for(int k=0;k<n;k++)
					{
						if(k != i && k!= p[i] && k!= p[k])
						{
							c =k;
							break;
						}
					}
				
				
				if(c == p[p[i]])
				{
					flag =0;
					break;
				}
				
				A.push_back(i);
				A.push_back(p[i]);
				A.push_back(c);
				shi++;
				RightShift(p,i,p[i],c);
				}
				else
				{
					A.push_back(i);
				A.push_back(p[i]);
				A.push_back(c);
				shi++;
				RightShift(p,i,p[i],c);
				}
				if(is_sorted(p.begin(),p.end()))
					break;
					i++;
			}
			
			if(flag ==0 )
				break;
			if(is_sorted(p.begin(),p.end()))
				break;
		}
		if(flag == 0)
			cout<<-1<<endl;
		else
		{
			cout<<shi<<endl;
			for(i=0;i<3*shi;i=i+3)
				cout<<A[i]+1<<" "<<A[i+1]+1<<" "<<A[i+2]+1<<endl;
		}
	}
	return 0;
}
