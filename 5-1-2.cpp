#include<iostream>
#include<windows.h>
using namespace std;
class A 
{
public:
	A()
	{
		cout << "´´½¨A" << endl;

	}
	~A()
	{
		cout << "Îö¹¹A" << endl;
	}
};
class B
{
public:
	B()
	{
		cout << "´´½¨B" << endl;

	}
	~B()
	{
		cout << "Îö¹¹B" << endl;

	}
private:
	A a;
};
int main()
{
	B obj;

	
	return 0;
	system("pause");
}
