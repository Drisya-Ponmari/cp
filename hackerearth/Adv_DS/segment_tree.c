#include <stdio.h>
#include <stdlib.h>
int* A;
int* tree;
void build(int node,int start,int end){

	if(start==end)
		tree[node]=A[start];
	else{
		
		int mid = (start+end)/2;
		build(2*node+1,start,mid);
		build(2*node+2,mid+1,end);
		tree[node]=tree[2*node+1]+tree[2*node+2];
	}
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	A = (int*) malloc(n * sizeof(int));
	tree = (int*) malloc(2*n * sizeof(int));
	
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	build(0,0,n-1);
	for(i=0;i<2*n;i++)
		printf("%d\n",tree[i]);	
	return 0;
}
