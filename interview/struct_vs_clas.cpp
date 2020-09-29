#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Girl{
	public:
		int age;
};

class Derived1 : Girl {};
struct Derived2 : Girl {};
int main()
{
	Derived1 d1;
	//d1.age = 12;	
	Derived2 d2;
	d2.age = 12;
	return 0;
}
