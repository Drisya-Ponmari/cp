#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>& nums)
{
		
	unordered_map <int,int> Major;
	
	for(int i=0;i<nums.size();i++)
	{
				
		if(Major.find(nums[i]) == Major.end())
			Major[nums[i]] =1;
		else
			Major[nums[i]]++;

		if(Major[nums[i]] > nums.size()/2)
			return nums[i];
	}
			
			return -1;
}
int main()
{
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;i++)
		cin>>nums[i];
	
	cout<<majorityElement(nums)<<endl;
	
	return 0;
	
}

