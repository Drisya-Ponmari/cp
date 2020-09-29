#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	set <int, greater<int> > s;
	s.insert(10);
	s.insert(30);
	s.insert(30);
	cout << s.size() << endl;

	return 0;
}
