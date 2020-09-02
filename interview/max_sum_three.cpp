#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];

	for(int i=0; i<n; i++)
		cin>>a[i];
	
	int sum = 0;
	vector<int> vec1;
	vector<int> vec2;
	for(int i=0; i<n; i++){
		if(a[i]%3 == 0)
			sum = sum + a[i];
		else if( a[i]%3 == 1)
			vec1.push_back(a[i]);
		else
			vec2.push_back(a[i]);
	}

	int one = vec1.size(), two = vec2.size();

	if(one == 0 || two == 0)
		cout<<sum<<endl;
	else
	{
		sort(vec1.begin(), vec1.end(), greater<int>());
		sort(vec2.begin(), vec2.end(), greater<int>());
		int sum1 = 0, sum2 = 0;
		int i = 0, j = 0;
		for(i=0; i<one; i++)
			sum1 += vec1[i];
			
		for(i=0; i<two; i++)
			sum2 += vec2[i];
		int sum1 = sum1+sum2;
		if( sum1 % 3 == 0)
			sum += sum1;
		else
			{
				int t = -1;
				if((sum1 - vec1[one-1]) %3 ==0)
					t = sum1 - vec1[one -1 ];
				else if ((sum1 - vec2[two-1]) %3 == 0)
					t = max(t, (sum1 - vec2[two-1]));
				sum = sum + t;
			}
		cout<<sum<<endl;
		
	}
	return 0;
}
