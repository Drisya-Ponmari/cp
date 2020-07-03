#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

	for(int i=0;i<=25;i++)
	{
		cout<<i<<"{{{";
		for(int j=0;j<=25;j++)
		{
			int temp = i &j;
			cout<<temp<<"--";
		}
		cout<<endl;
	}
	return 0;
}
