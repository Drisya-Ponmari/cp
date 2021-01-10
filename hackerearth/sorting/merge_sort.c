#include <stdio.h>
unsigned long long int count=0;
void merge(unsigned long long int* A, unsigned long long int start, unsigned long long int mid, unsigned long long int end)
{
	unsigned long long int p=start, q=mid+1;
	unsigned long long int B[end-start+1], k=0;
	while(p<=mid && q<=end)
	{
		if(A[p]<=A[q])
			B[k++]=A[p++];
		else
		{
			B[k++] = A[q++];
			count=count+mid-p+1;
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
void merge_sort(unsigned long long int* A,unsigned long long int start,unsigned long long int end)
{
	long long int middle;
	if(start<end)
	{
		middle=(start+end)/2;
		merge_sort(A,start,middle);
		merge_sort(A,middle+1,end);
		
		//merging the 2 halves
		merge(A,start,middle,end);
	}
}
int main()
{
	unsigned long long int n,i;
	scanf("%d",&n);
	unsigned long long int in_arr[n];
	//scanning the input
	for(i=0;i<n;i++)
		scanf("%lld",&in_arr[i]);
	//splitting to halves
	merge_sort(in_arr,0,n-1);
	//Printing the sorted array
	printf("Sorted:");
	for(i=0;i<n;i++)
		printf("%lld ",in_arr[i]);
	printf("\nCount:%lld\n",count);	
return 0;
}
