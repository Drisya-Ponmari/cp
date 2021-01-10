#include <stdio.h>
int get_the_root(int a,int* root)
{
	while(root[a] != a)
	a=root[a];
	
	return a;
}
int find(int a , int b,int* root)
{
	a=get_the_root(a,root);
	b=get_the_root(b,root);
	if(a==b)
		return 1;
	else
		return 0;
}
int union_f(int a ,int b,int* root)
{
	a = get_the_root(a,root);
	b = get_the_root(b,root);
	
	if(a>b)
		root[b] = a;
	else
		root[a] = b;
	return 0;
}
int main()
{
	int size_set;
	scanf("%d",&size_set);
	int root[size_set];
	
	//make set
	for(int i=0;i<size_set;i++)
		root[i] = i;
	int a,b,c,k;
	while(1)
	{
		scanf("%d %d %d",&c,&a,&b);
		switch(c){
			case 1 : 
				k = find(a,b,root);
				if(k==1)
					printf("YES\n");
				else
					printf("NO\n");
				break;
			case 2:
				union_f(a,b,root);
				break;
			case 3:
				return 0;
		}
	}
	return 0;
}
