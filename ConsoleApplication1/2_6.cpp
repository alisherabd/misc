#include <iostream>
using std::cout;
using std::endl;

/* It returns 1 when number is palindrome, otherwise returns 0. */
#define NUMBER_LENGTH 20

int IsPalindrome(const char* const string) {
	int palindrome = 1;
	if (string != NULL) {
		int length = strlen(string);
		int half = length >> 1;

		int i;
		for (i = 0; i < half; ++i) {
			if (string[i] != string[length - 1 - i]) {
				palindrome = 0;
				break;
			}
		}

	}
	return palindrome;
}
int IsPalindrome_solution1(unsigned int number) {
	char string[NUMBER_LENGTH];
	sprintf(string, "%d", number);

	return IsPalindrome(string);
}



void main(){
	IsPalindrome_solution1(123321);

}