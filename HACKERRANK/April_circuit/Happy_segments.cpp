#include <iostream>
#include <bits/stdc++.h>
using namespace std;
  
// Variable to represent block size->  
// This is made global so compare()  
// of sort can use it-> 
long int block; 
  
// Structure to represent a query range 
struct Query { 
    long int L, R, index; 
};
  
/* Function used to sort all queries  
   so that all queries of same block 
   are arranged together and within  
   a block, queries are sorted in  
   increasing order of R values-> */
bool compare(struct Query* x, struct Query* y) 
{ 
    // Different blocks, sort by block-> 
    if (x->L / block != y->L / block) 
        return x->L / block < y->L / block; 
  
    // Same block, sort by R value 
    return x->R < y->R; 
} 
  
/* Inserts element (x) into current range 
   and updates current answer */
void add(long int x, long int& currentAns,  
         unordered_map<long int, long int>& freq) 
{ 
  
    // increment frequency of this element 
    freq[x]++; 
  
    // if this element was previously  
    // contributing to the currentAns, 
    // decrement currentAns 
    if (freq[x] == (x + 1)) 
        currentAns--; 
  
    // if this element has frequency  
    // equal to its value, increment 
    // currentAns 
    else if (freq[x] == x) 
        currentAns++; 
} 
  
/* Removes element (x) from current  
   range btw L and R and updates  
   current Answer */
void remove(long int x, long int& currentAns,  
            unordered_map<long int, long int>& freq) 
{ 
  
    // decrement frequency of this element 
    freq[x]--; 
  
    // if this element has frequency equal  
    // to its value, increment currentAns 
    if (freq[x] == x) 
        currentAns++; 
  
    // if this element was previously  
    // contributing to the currentAns  
    // decrement currentAns 
    else if (freq[x] == (x - 1))  
        currentAns--; 
} 
  
/* Utility Function to answer all queries 
   and build the ans array in the original  
   order of queries */
void queryResultsUtil(long int a[], struct Query* q,  
                        long int ans[], long int m) 
{ 
  
    // map to store freq of each element 
    unordered_map<long int, long int> freq; 
  
    // Initialize current L, current R 
    // and current sum 
    long int currL = 0, currR = 0; 
    long int currentAns = 0; 
  
    // Traverse through all queries 
    for (long int i = 0; i < m; i++) { 
        // L and R values of current range 
        long int L = q[i]->L, R = q[i]->R;  
        long int index = q[i]->index; 
  
        // Remove extra elements of previous 
        // range-> For example if previous  
        // range is [0, 3] and current range  
        // is [2, 5], then a[0] and a[1] are  
        // removed 
        while (currL < L) { 
            remove(a[currL], currentAns, freq); 
            currL++; 
        } 
  
        // Add Elements of current Range 
        while (currL > L) { 
            currL--; 
            add(a[currL], currentAns, freq); 
        } 
        while (currR <= R) { 
            add(a[currR], currentAns, freq); 
            currR++; 
        } 
  
        // Remove elements of previous range->  For example 
        // when previous range is [0, 10] and current range 
        // is [3, 8], then a[9] and a[10] are Removed 
        while (currR > R + 1) { 
            currR--; 
            remove(a[currR], currentAns, freq); 
        } 
  
        // Store current ans as the Query ans for 
        // Query number index 
        ans[index] = currentAns; 
    } 
} 
  
/* Wrapper for queryResultsUtil() and outputs the 
   ans array constructed by answering all queries */
void queryResults(long int a[], long int n, struct Query* q, long int m) 
{ 
    // Find block size 
    block = (long int)sqrt(n); 
  
    // Sort all queries so that queries of same blocks 
    // are arranged together-> 
    sort(q, q + m, compare); 
  
    long int* ans = new long int[m]; 
    queryResultsUtil(a, q, ans, m); 
  
    for (long int i = 0; i < m; i++) { 
        cout << "Answer for Query " << (i + 1) 
             << " = " << ans[i] << endl; 
    } 
} 
struct Query* create( long int x,long int y,long int z)
{
	struct Query* temp;
	temp = (Query*)malloc(sizeof(Query));
	temp->L = x;
	temp->R = y;
	temp->index = z;
	return temp;
}
int main()
{
	long int n,m,q;
	cin>>n>>m;
	long int i,j;
	long int a[n];
	long int h[m];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>h[i];
	
	long int x,y;
	cin>>q;
	struct Query* Q[q];
	for(i=0;i<q;i++)
	{
	
		cin>>x>>y;
		Q[i]=create(x,y,i);
		
	}
	 queryResults(a,n,Q,q);
	
	return 0;
}
