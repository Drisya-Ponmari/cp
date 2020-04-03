#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef pair<long int ,long int> pairs;
int main()
{ 	
	long int N,i,j;
	set<pairs> s;
	cin>>N;
	long int a[10][10];
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			cin>>a[i][j];
 
	for(i=0;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			pairs p = make_pair(a[i][0],a[i][j]);
			s.insert(p);
		        p = make_pair(a[i][j],a[i][0]);
			s.insert(p);
		}
	}
/*	printing the set and this has to compile like g++ -std=c++0x filename
	bool found = false;
	for(auto &x : s)
	{
		found = true;
		cout<<"("<<x.first<<" ,"<<x.second<<")"<<" "; 
	
	}*/

	long long int total_handshake = (N * (N-1) /2);
	long long int set_size = s.size();
	total_handshake = total_handshake - (set_size/2);
	cout<<total_handshake<<endl;
	return 0;
}
