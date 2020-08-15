#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

int n,Q;
cin>>n>>Q;
int a[n],h[n];
for(int i=0;i<n;i++)
	cin>>h[i];

for(int i=0;i<n;i++)
	cin>>a[i];
while(Q--) // Q is total Queries
{
 	int q,b,c,k; 
 	cin >> q;
 	if(q == 1) // query type 1 
 	{
   	cin >> b >> k;
   	a[b-1]=k;
 	}
 else // query type 2
 {
   cin >> b >> c;
   												
	int total = a[b-1];
	int height = h[b-1];
	int flag = 1;
	for(int i=b;i<c-1;i++)
	{
		if(
	}
   if(flag) 
     cout << sum << "\n";
   else 
     cout << "-1\n"; 
}
}

	return 0;
}
