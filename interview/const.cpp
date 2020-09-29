#include <iostream>

using namespace std;

class A
{

	public: 
		A(){};
	public:
		void print()
		{
			cout << " hey " << endl;
		}
};
int main()
{

	const int x = 3;
	cout << x << endl;
	const A a;

}
