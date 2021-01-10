
#include <stdio.h>
int main()
{
	int N,i,j,temp;
	scanf("%d",&N);
	int array[N];
	int count[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
		count[i]=array[i];
	}
	for(i=0;i<N;i++)
	{
		temp=array[i];
		j=i;
		while(j>0 && array[j-1]>temp)
		{
		array[j]=array[j-1];
		j=j-1;
		}
		
		array[j]=temp;
	}
	
    	for(i=0;i<N;i++)
    	{
    	    for(j=0;j<N;j++)
    	    {
    	        if(count[i]==array[j])
    	            {
    	            printf("%d ",j+1);
    	            break;
    	            }
    	    }
    	}
    	
    printf("\n");	
    return 0;
}
