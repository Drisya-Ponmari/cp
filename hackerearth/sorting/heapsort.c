#include <stdio.h>
#include <stdlib.h>

int* A;
int Heapsize;
int getParentindex(int i)
{
	if(i!=0)
		return (i-1)/2;
}
//Building the heap

void Maxheapify(int root)
{
		int left_childindex,right_childindex,largest_index,temp;
		
		left_childindex=2*root+1;
		right_childindex=2*root+2;
		largest_index=root;
		
		if(left_childindex>=Heapsize)
			return;
		else
		{
			if(A[left_childindex]>A[root])
				largest_index=left_childindex;
				
			if(right_childindex<Heapsize&&A[right_childindex]>A[largest_index])
				largest_index=right_childindex;
				
			if(largest_index!=root)
			{
				temp=A[largest_index];
				A[largest_index]=A[root];
				A[root]=temp;
				Maxheapify(largest_index);
			}
				
		}																																															
}

void Buildmaxheap()
{
	int i;
	
	for(i=Heapsize/2;i>=0;i--)
		Maxheapify(i);
}

int main()
{
	int i;
	scanf("%d",&Heapsize);
	A=malloc(Heapsize*sizeof(int));
	for(i=0;i<Heapsize;i++)
		scanf("%d",&A[i]);
	//Build max-heap and take the root (by making it as a leaf) and
	//Max-heapify the heap .Do the same for n times.
	
	
	Buildmaxheap();
	int n=Heapsize;
	printf("Sorted\n");	
	for(i=0;i<n;i++)
	{
	 printf("%d ",A[0]);
	  A[0]=A[Heapsize-1];
	  Heapsize--;
	  Maxheapify(0);
	}
	return 0;
	
}
