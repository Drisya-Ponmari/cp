#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define l long 

long long int c=0;
struct tree 
{
	ll p0;
	ll p1;
	ll p2;
	struct tree* left, *right;

};
void search(ll x1,ll x2,ll y,struct tree* r)
{
	if(r->p0 >x2)
		return;
	if(r->p1 > y)
	{
		if(r->left != NULL)
		{
			search(x1,x2,y,r->left);
		}
	}
	else
	{
		if(r->p2 >= y)
		{
			if((r->p0 == x2 and r->p1 ==y) or (r->p0 +1 == x1 and r->p2 ==y))
				int i;
			else	
				c++;
		}
		if(r->left != NULL)	
			search(x1,x2,y,r->left);
		if(r->right != NULL)
			search(x1,x2,y,r->right);
		
	
	}
	
	return;
	
}

int main()
{	
	
	int T;
	cin>>T;
	while(T--)
	{
		ll N,Q,i;
		cin>>N>>Q;
		
		struct tree* r[N-1];
		ll A[N],x1,x2,y;

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
			temp->p0 = i+1;
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
			c=0;
			cin>>x1>>x2>>y;
			search(x1,x2,y,r[x1-1]);
			cout<<c<<endl;
	
		}

	}	
	return 0;
}
