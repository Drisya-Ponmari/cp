#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int KnapSack(int c,int n,int* w,int* v)
{

	if(n==0 || w ==0 )
		return 0;
	if(w[n-1] > c)
		return KnapSack(c,n-1,w,v);
	else
		return max(KnapSack(c-w[n-1],n-1,w,v)+v[n-1],KnapSack(c,n-1,w,v));
}
int main()
{

	int Capacity,n;
	cin>>Capacity>>n;
	int v[n],w[n];
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	for(int i=0;i<n;i++)
		cin>>w[i];

	cout<<"Ans "<<KnapSack(Capacity,n,w,v);
	return 0;
}
