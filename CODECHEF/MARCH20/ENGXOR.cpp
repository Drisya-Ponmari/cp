#include <bits/stdc++.h>
using namespace std;
int ifo[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 }; 
long long int new_algo(long long int k)
{
	long long int count = 0;
	if(0 == k)
		return ifo[0];
	
	count = k &0xf;

	
	return ifo[count]+new_algo(k>>4);
}
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
    	long int N,Q,P,i;
	scanf("%ld %ld",&N,&Q);
	
	long long int A[N];
	long long int Pa[N],count;
	for(i=0;i<N;i++)
		{
		scanf("%lld",&A[i]);
		count = new_algo(A[i]);
			if(count%2 ==0)
				Pa[i]=0;
			else
				Pa[i]=1;
		}
	int flag = 0;
	long long int even =0,odd =0;
	while(Q--)
	{
		
		scanf("%ld",&P);
		count = new_algo(P);
		int f,y;
		if(flag ==0 )
		{
			 f = count%2;
		
			for(i=0;i<N;i++)
			{
				if((Pa[i] == 1 and f == 0 ) or (Pa[i]==0 and f == 1))
					odd++;
				else
					even++;

			}
			flag = 1;	
			printf("%lld %lld\n",even,odd);
		}
		else
		{
			 y = count%2;
			if(f == y)			
				printf("%lld %lld\n",even,odd);
			else
				printf("%lld %lld\n",odd,even);
		}

	}
    
    }
	    return 0;
}

