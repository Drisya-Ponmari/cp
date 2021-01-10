#include <stdio.h>
int main()
{
    int n,m,temp;
    int a[101];
    scanf("%d %d",&n,&m);
    int i,j,min;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
        if(i==m-1)
        {
            for(i=0;i<n;i++)
                printf("%d ",a[i]);
            return 0;
        }
    }
}
