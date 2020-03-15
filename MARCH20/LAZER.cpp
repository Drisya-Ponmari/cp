#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define l long 

ll count;
struct tree 
{
	ll p1;
	ll p2;
	struct tree* left, *right;

};
int main()
{	
	
	int T;
	cin>>T;
	while(T--)
	{
		ll N,Q,i;
		cin>>N>>Q;
		
		struct tree* r[N-1];
		ll A[N],x1,x2;
		vector <pair <ll,ll> >Y;

		for(i=0;i<N;i++)
			cin>>A[i];

		for(i=0;i<N-1;i++)
		{
			ll t1,t2;
			if(A[i] >A[i+1])
			{
				t1 = A[i+1];
				t2 = A[i];
			}
			else
			{
				t1 = A[i];
				t2 = A[i+1];
			}

			struct tree* temp;
			temp = (struct tree*) malloc(sizeof(struct tree));
			temp->p1 = t1;
			temp->p2 = t2;
			r[i] = temp;
			if(i==0)
			{
				r[i]->left = NULL;
				r[i]->right = NULL;
				
			}
			else
			{
				if(t1 <= r[i-1]->p1)
				{
					r[i-1]->left = temp;
					r[i-1]->right = NULL;
				}
				else
				{
					r[i-1]->right = temp;
					r[i-1]->left = NULL;
				}
			}
			
		}

		while(Q--)
		{
			count = 0;
			cin>>x1>>x2,y;
			while()
			{
				if(r[i]->p1 <= y)
				{
					if(r[i]->p2 >= y)
						count++
					
				}
			}

			cout<<count<<endl;
	
		}

	}	
	return 0;
}
