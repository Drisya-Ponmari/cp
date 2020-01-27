#include <iostream>
#include <bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{

	int T,j;
	cin>>T;
	j = 1;
	while(T--)
	{
	int N,i;
	cin>>N;
	N = 2 * N;
	long long int p[N],actual;
	for(i=0;i<N;i++)
		cin>>p[i];
	queue <long long int> q;	
	cout<< "Case #"<<j<<": ";
	q.push(p[0]);
 	for(i=1;i<N;i++)
	{
	    actual = (q.front() * 100)/75;
	    if(p[i] == actual)
	    {
	   	cout<<q.front()<<" ";
		q.pop();
	     }
	    else
	    	q.push(p[i]);
	}
		
	cout<<endl;
	j = j+1;
	}
	return 0;
}
