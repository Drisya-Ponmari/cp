#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

	//God saving methods
	queue<string> q;
	q.push("1");
	while(n--)
	{
		string s1 = q.front();
		q.pop();
		cout<<s1<<endl;

		string s2 = s1;
		q.push(s1.append("0"));
		q.push(s2.append("1"));

	}
	return 0;
}

// time complexity ( O(n ))
