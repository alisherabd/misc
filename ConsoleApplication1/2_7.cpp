#include <iostream>
using std::cout;
using std::endl;

/* It returns 1 when number is palindrome, otherwise returns 0. */
int IsPalindrome_solution2(unsigned int number) {
	int reversed = 0;
	int copy = number;

	while (number != 0) {
		reversed = reversed * 10;
		reversed = reversed + number % 10;
		number /= 10;
	}

	return (reversed == copy) ? 1 : 0;
}

void main(){
	IsPalindrome_solution2(123321);
}