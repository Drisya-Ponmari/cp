#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,int> umap;
	umap[4] = 2;
	umap[90]  =3;
//	auto it = umap.find();
//	cout<<umap.end() <<endl;
	auto it = umap.find(90);
	if( it == 2)
		cout<<"e"<<endl;
	return 0;
}
