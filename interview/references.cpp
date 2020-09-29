#include <iostream>
using namespace std;

int f(int& x)
{
	return x+1;
}
int main()
{
	int x = 5;	
	cout << f( x) << endl;
	return 0;
}
