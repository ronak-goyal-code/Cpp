#include<iostream>
using namespace std;
    
class Base
{
    public:
	void display()
	{
		cout<<"Display of Base"<<endl;
	}
	
};
    
class Derived:public Base
{
    public:
	void display()  // function overriding
	{
		cout<<"Display of Derived"<<endl;
	}
	
};    

class Derived2:public Base
{
    public:
	void display(int x)  // not function overriding
	{
		cout<<"Display of Derived2"<<endl;
	}
	
};

int main()
{
	Derived d;
	d.display();

    Derived2 d1;
    d1.Base::display(); 
	    
}
