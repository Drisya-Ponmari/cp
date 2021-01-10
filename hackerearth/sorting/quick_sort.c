#include <stdio.h>
int partition(int* array, int start, int end,int n)
{
	int pivot_data=array[start];
	
	int i=start+1;
	int temp;
	int j=start+1;
	while(j<=end)
	{
		if(array[j]<pivot_data)
		{
			temp=array[j];
			array[j]=array[i];
			array[i]=temp;
			i=i+1;
		}
		j=j+1;
	}
	temp=array[i-1];
	array[i-1]=array[start];
	array[start]=temp;
	printf("%dposition---%d\n",pivot_data,i);
	for(int k=start;k<=end;k++)
		printf ("%d ",array[k]);
	printf("\n");

	return i-1;
}
void quicksort(int* array, int start, int end,int n)
{
 if(start<end)
 {
 	int pivot=partition(array,start,end,n);
 	quicksort(array,start,pivot-1,n);
 	quicksort(array,pivot+1,end,n);
 }

}
int main()
{
	int n;
	scanf("%d",&n);
	int array[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	quicksort(array,0,n-1,n);
	
	for(i=0;i<n;i++)
		printf ("%d ",array[i]);
	printf("\n");
}
