#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class Person
{
	public:
		string *name;
		int age;
	Person(string s,int a){ name = new string(s);  age = a;}
	Person(const Person &p) { name = new string(*p.name); age = p.age; }
	void Introduce ()
	{
		cout<< *name << "::" << age << endl; 
	}

};


int main()
{
	Person me("Drisya", 14);
	me.Introduce();
	Person you( "Vipin", 16);
	you.Introduce();

	Person who;
	*(you.name) = "hey";
	who = you;
	you.Introduce();
	who.Introduce();
	return 0;
}
