#include <iostream>
using namespace std;

class Enemy{
	public:
		virtual void attack(){}
};

class Lion : public Enemy{
	public:
		void attack (){
			cout << " Lio" << endl;
		}
};

class Tiger : public Enemy{
	public:
		void attack(){
			cout << " Tiger "<< endl;
		}
};
int main()
{
	Tiger t;
	Lion l;
	Enemy* e1 = &t;
	Enemy* e2 = &l;

	e1 -> attack();
	e2 -> attack();
	return 0;
}
