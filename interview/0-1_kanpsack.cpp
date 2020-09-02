#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Item 
{
	int val,weight;
//	Item(int val, int weight) : val (val) ,weight(weight){}
};
int ZeroOne( struct Item arr[], int W, int n)
{
	int dp[n+1][W+1];

	for(int i = 0; i <= n ; i++)
	{
		for(int j = 0; j <= W ; j++)
		{
		
			if( i == 0 || j == 0)
				dp[i][j] = 0;
			else if ( arr[i-1].weight <= W)
				dp[i][j] = max ( dp[i-1][j], arr[i-1].val + dp[i-1][j - arr[i-1].weight]);
			else 
				dp[i][j] = dp[i-1][j];
		}
	}
	return dp[n][W];

}
int main()
{
	int W;
	cin>>W;
	int n;
	cout<<"Enter n"<<endl;
	cin>>n;
	int v, w;
	Item* arr;
	arr =(Item*) malloc( n * sizeof(Item)); 
	for(int i =0; i < n; i++)
	{
		cin>>v>>w;
		arr[i].val = v;
		arr[i].weight = w;
		cout<<arr[i].val<<endl;
	}
//	Item arr[] = {{60, 10},{100, 20},{120,30}};
	cout<<ZeroOne(arr, W, n)<<endl;
	return 0;
}
