#include <stdio.h>
#define ll long long int
#define l long int
void merge(long long int* A, long int start, long int mid, long int end)
{
	 long int p=start, q=mid+1;
	long long int B[end-start+1], k=0;
	

	while(p<=mid && q<=end)
	{
		if(A[p]<=A[q])
			B[k++]=A[p++];
		else
		{
			B[k++] = A[q++];
		}
	}
	while(p<=mid)
	{
		B[k++] = A[p++];
	}
	while(q<=end)
	{
		B[k++] = A[q++];
	}
	
	for(p=0;p<k;p++)
		A[start+p]=B[p];
}
void merge_sort(long long int* A,long int start, long int end)
{
	 long int middle;
	if(start<end)
	{
		middle=(start+end)/2;
		merge_sort(A,start,middle);
		merge_sort(A,middle+1,end);
		
		//merging the 2 halves
		merge(A,start,middle,end);
	}
}
/*---------------BINARY SEARCH----------------*/
long int binary_search(long long int key, long long int* A,long int start,long int end)
{
	long int mid ;
	while(start<=end)
	{
	mid=(start+end)/2;
	//printf("%ld::start %ld:: end  %ld::mid\n",start,end,mid);
	if(key>A[mid])
		start=mid+1;
	else if(key<A[mid])
		end=mid-1;
	else
		return mid+1;
	}


}
int main()
{
	l N,i,Q,position;
	ll key;
	scanf("%ld",&N);
	ll in_arr[N];
	for(i=0;i<N;i++)
		scanf("%lld",&in_arr[i]);
	
	merge_sort(in_arr,0,N-1);
	scanf("%ld",&Q);
	//printf("Q%ld\n",Q);
	for(i=0;i<Q;i++)
	{
		scanf("%lld",&key);
		position=binary_search(key,in_arr,0,N-1);
		printf("%ld\n",position);
	}

}
