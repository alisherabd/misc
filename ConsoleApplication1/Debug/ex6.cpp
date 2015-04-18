#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

//When a C++ compiler sees a virtual function inside a class, it creates a virtual function table for the class and adds a pointer to the table in each instance.A pointer in a 32 - bit machine occupies 4 bytes, so the result of sizeof is 4. The result on a 64 - bit machine is 8 because a pointer occupies 8 bytes there.

class test {
public:
 test();
virtual	~test();
	
};

void main(){
	int m = sizeof(test);

}