#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gox(int x,char c)
{
	if(c == 'L')
		return  x-1;
	else if(c == 'R')
		return x+1;
	else
		return x;
}

int goy(int y,char c)
{
	if(c=='U')
		return y+1;
	else if(c=='D')
		return y-1;
	else
		return y;
}
int getnum(char c)
{
	if(c=='U' or c == 'D')
		return 1;
	else
		return 0;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	
		int N;
		cin>>N;
		char a[N];
		int i;
		for(i=0;i<N;i++)
			cin>>a[i];

		int x = 0;
		int y = 0;
		int prev = getnum(a[0]);
		x=gox(x,a[0]);
		y=goy(y,a[0]);
		//cout<<x<<" "<<y<<endl;
		for(i=1;i<N;i++)
		{
			int temp = getnum(a[i]);	
			//cout<<x<<" "<<y<<endl;
			if(prev != temp)
			{
				x=gox(x,a[i]);
				y=goy(y,a[i]);
			}
			prev = temp;
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}
