#include <iostream>
using std::cout;
using std::endl;

#define SQUARE(x) ((x)*(x))

void test() {
	int x = 5;
	int y = SQUARE(x++);
	printf("Result of x is %d, y is %d.\n", x, y);
	/*cout << "Result of x is " << x << endl;
	cout << "Result of y is " << y << endl;*/
}

void main(){
	test();
}