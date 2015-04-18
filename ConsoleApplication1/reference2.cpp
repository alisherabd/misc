#include <iostream>
using std::cout;
using std::endl;

struct MyClass
{
	int MyInt;
	//let's say you have 100 of such properies
};

//MyClass& robj = myobj
void Modify1(MyClass& robj){
	robj.MyInt++; //increments
}

//MyClass robj = myobj
void Modify2(MyClass robj){
	robj.MyInt++; //stays as untouched new object
}

void main()
{
	MyClass myobj;
	myobj.MyInt = 1;
	Modify1(myobj);
	Modify2(myobj);
}