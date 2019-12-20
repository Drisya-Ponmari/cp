#include <stdio.h>
long long int get_pisano_period()
{
	long long int a=0, b = 1, c= a+b;
	 for (int i = 0; i < 10 * 10; i++) {
        c = (a + b) % 10;
        a = b;
        b = c;
        if (a == 0 && b == 1)
         return i + 1;
    }
	
}
long long int fib(long long int n)
{
	printf ("%lld...\n",get_pisano_period() );
	long long int remainder = n% get_pisano_period();
	long long first = 0;
	long long second = 1;
	long long res = remainder;
	for(long long int i = 1;i<remainder ;i++)
	{
		res = (first + second) %10;
		first = second;
		second = res;
	}
	return res%10;
}
int main()
{
	long int t,i;
	long long int n,j,near;
	scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		if(n==0)
		{
			printf("0\n");
			continue;
		}
		j=1;
		while(n>=j)
		{
			near = j;
			j=j*2;
		}
			near = fib(near-1);
			printf("%lld\n",near);
			
	}
	return 0;
}
