#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main()
{
	
	 unordered_map<int, int> mp;

	 int n;
	 cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++)
	 	cin>>a[i];
	
	 for(int i=0;i<n;i++)
	 	mp[a[i]]++;
	 for(int i =0;i<n;i++)
	 {
		if(mp[a[i]] == 1)
		{
			cout<<a[i]<<endl;
			break;
		}
	 }
	 
	return 0;
}

/*How to compile this code --> g++ -std=c++0x first_non_repeating_element.cpp 
time complexity --O(n)
Using unordered map 
unordered_map<int,int> mp 

*/
