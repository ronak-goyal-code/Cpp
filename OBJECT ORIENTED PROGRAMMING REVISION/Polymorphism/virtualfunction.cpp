#include<iostream>
using namespace std;

class Base
{
    public:
	virtual void fun()
	{
		cout<<"fun of Base"<<endl;
	}
	
};
    
class Derived:public Base
{
    public:
	void fun()
	{
		cout<<"fun of Derived"<<endl;
	}
	
};
    
int main()
{
	Derived d;
	d.fun();
	Base *ptr=&d;
	ptr->fun();
	    
}

// #include<iostream>
// using namespace std;
    
// class BasicCar
// {
//     public:
// 	virtual void start()
// 	{
// 		cout<<"BasicCar Started"<<endl;
// 	}
	
// };
    
// class AdvanceCar:public BasicCar
// {
//     public:
// 	void start()
// 	{
// 		cout<<"AdvanceCar Started"<<endl;
// 	}
	
// };
    
// int main()
// {
// 	BasicCar *ptr=new AdvanceCar();
// 	ptr->start();
	    
// }
    