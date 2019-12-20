#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string.h>
int f(int a)
{
	if(a<=0)
		return 0;
	else	
		return 1;
}
int main()
{
	/*string str;
	str = "10001";
	char c = '0';
	str.insert(str.end(), c);
	str.erase(str.begin());
	cout << str;*/
	cout << f(0)||f(1) ;
	return 0;
	
}	
