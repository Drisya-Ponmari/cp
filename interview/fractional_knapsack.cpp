#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Item 
{
	int val,weight;
//	Item(int val, int weight) : val (val) ,weight(weight){}
};
bool cmp (struct Item a, struct Item b)
{
	double x = (double ) a.val/a.weight;
	double y = (double ) b.val/ b.weight;
	return x > y;
}

int FN ( struct Item arr[], int W, int n)
{
	sort ( arr, arr + n , cmp);
	
	int curr_weight = 0;
	int tot_value = 0;
	for(int i = 0; i < n ; i++)
	{
		if(curr_weight + arr[i].weight <= W)
		{
			curr_weight += arr[i].weight;
			tot_value += arr[i].val;
		}
		else
		{
			int remain = W - curr_weight;
			tot_value += (arr[i].val * ( (double) remain/arr[i].weight ) );
			break;
		}
		
	}
	return tot_value;

}

int main()
{
	int W = 50;
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
	cout<<FN(arr, W, n)<<endl;
	return 0;
}
