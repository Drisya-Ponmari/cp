#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{

	struct Node* child[26];
	bool isEnd;
};

Node* node = new Node();
void insert(string s)
{

	Node* curr = node;
	for(int i = 0; i < s.length(); i++)
	{
		if( curr -> child[s[i] - 'a'] == NULL)
			curr -> child[s[i] - 'a'] = new Node();
		curr = curr -> child[s[i] - 'a'];

	}
	curr->isEnd = true;
}
bool search(string s)
{
	Node* curr = node;
	for(int i = 0; i < s.length(); i++)
	{
		if( curr -> child[s[i] - 'a'] == NULL)
			return false;
		curr = curr -> child[s[i] - 'a'];
	}
	if(! curr -> isEnd)
		return false;
	return true;
}
int main()
{

	insert("apple");
	cout<<search("apple")<<endl;   // returns true
	cout<<search("app")<<endl;     // returns false
	insert("app");   
	cout<<search("app")<<endl;     // returns true
	return 0;

}

