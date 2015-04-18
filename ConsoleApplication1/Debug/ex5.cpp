#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
//working block
void allocateMemory(char** pString, int length) {
	*pString = (char*)malloc(length);
}

void test() {
	char* pString = NULL;
	allocateMemory(&pString, 20);
	strcpy(pString, "Hello world.");
}


//unworking block

//void allocateMemory(char* pString, int length) {
//	pString = (char*)malloc(length);
//}
//  here allocateMemmory cannot change the ponters value which is NULL
//void test() {
//	char* pString = NULL;
//	allocateMemory(pString, 20);
//	strcpy(pString, "Hello world.");
//}


void main()
{
	test();
}