/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <stdio.h>
#include <stdlib.h>
int Heapsize=0;
int* A;
int getParentindex(int i)
{
	if(i!=0)
		return (i-1)/2;
}
//Building the heap

void swap(int *x, int *y)
{
    int temp;              // swapping two elements by giving the address of the two elements
    temp=(*x);
    (*x)=(*y);
    (*y)=temp;
}

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
				swap(A[large_index],A[root]);
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
int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        A=malloc((i+1)*sizeof(int));
        
         Heapsize=i+1;
         for(j=0;j<Heapsize;j++)
            A[j]=a[j];
        Buildmaxheap();
        if(Heapsize<3)
            printf("-1\n");
        else{
            for(j=0;j<3;j++){
                printf("%d ",A[0]);
                A[0]=A[Heapsize-1];
                Heapsize--;
               Maxheapify(0);
            }
            printf("\n");
        }
        
        free(A);
    }
        
        return 0;
    
}

