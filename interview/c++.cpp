#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class A
{
	public:
		 int y;
		 static int x; // class variable

//Constructor
	A(){
	//	x++;
	
	}

//Destructor
	~A()
	{
		//x --;
	}

//operator overloading
	void* operator new ( size_t sz)
	{
		x++;
	}

	void operator delete (void* )
	{
		x--;
	}

};

int A::x = 0;
int main()
{

	A a, b; // located in stack
	A c, d, e;
	a.y = 10;
	cout << A::x << endl; 

//	A* f = ( A*) malloc (sizeof(A)); //dynamic memmory allocation do not call the constructor heap
	A* f  = new A(); //dynamic memory allocation calls the constructor heap 
	
//	free(f); // removes the memory doesn't call the destructor
	delete f; // removes the memory from heap calls the destructor
	cout<< A::x <<endl;
	return 0;
}
