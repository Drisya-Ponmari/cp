#include<bits/stdc++.h> 
using namespace std; 
   
int countFreq(string &g, string &a) 
{ 
    int M = g.length(); 
    int N = a.length(); 
    int res = 0; 
    
   for(int i=0;i<N;i++)
   {
   		int f=0;
   		int k =i;
   		if(k >= N)
   			break;
   		for(int j=0;j<M;j++)
   		{
   			if(g[j] != a[k])
   				{
   					f=1;
   					break;
   				}
   			k++;
   		}
   		
   		if(f==0)
   			res++;
   }
    return res; 
} 

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a;
		cin>>b;
		int n;
		long int total = 0;
		cin>>n;
		string g;
		long val;
		a = a+b;
		while(n--)
		{
			cin>>g>>val;
			//a = a +b;
			int f = countFreq(g,a);
			cout<<f<<endl;
			total = total + f*val;
		}
		cout<<total<<endl;
		
	}
	return 0;
}
