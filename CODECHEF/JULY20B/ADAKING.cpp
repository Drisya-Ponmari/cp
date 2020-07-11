#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,v,row,col;
	cin>>t;
	char c[8][8];
	while(t--)
	{
		cin>>v;
		v--;
		col=v/8;
		row = v - (8*col);
		int i,j;
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				c[i][j] = '.';
			}
		}
		
		for(i=row+1;i<8;i++)
			c[i][col] = 'X';
		for(i=row+1;i>=0 && (col+1) <8;i--)
			c[i][col+1] = 'X';
		c[0][0] = 'O';
		
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				cout<<c[i][j];
			}
			cout<<endl;
		}
	}
	
	return 0;
}
