#include <iostream>
using namespace std;


class Mother 
{

	public:
		Mother()
		{ cout << "My love" <<endl;};
	protected:
	void SayName()
		{ cout<< "T "<<endl;}

};
class Daughter : public Mother
	
{
	public:
		Daughter(){ cout << "Thanks" << endl;};
	public:
		void Say () { SayName();} 
};

int main()
{
	//Mother mom;
	//mom.SayName();
	Daughter d;
	d.Say();

	return 0;

}
