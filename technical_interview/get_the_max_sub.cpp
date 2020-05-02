#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++)
		cin>>a[i];
	
	int max_sum = a[0];
	int best_sum = a[0];
	int start = 0,end =0,temp_s=0,temp_e=0;
	for(int i=1;i<n;i++)
	{
		temp_e =i;
		if(a[i] > a[i] + max_sum)
		{	
			temp_s = i;
			max_sum = a[i];
		}
		else
		{
//			temp_s = start;
			max_sum = max_sum + a[i];
		}

		if(best_sum < max_sum)
		{
			best_sum = max_sum;
			start = temp_s;
			end = temp_e;
		}
	}

	
	cout<<start<<" "<<end<<" "<<best_sum<<endl;
	return 0;
}
