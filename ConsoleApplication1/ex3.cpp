#include <iostream>
using std::cout;
using std::endl;

void clear(int **p)
{
	int v = 5;
	*p = (int*)51;
	/*cout << "p :" << p << endl;
	cout << "*p :" << *p << endl;
	cout << "&p :" << &p << endl;*/
}

void main()
{
	int* p;
	//cout << "&p :" << &p << endl;
	//cout << "  " << endl;

	//clear(&p);

	//p = (int*) 43;
	//cout << "  " << endl;
	//cout << "p :" << p << endl;
	//cout << "&p :" << &p << endl;
	//cout << "*p :" << *p << endl;


	



	//int v = 8;
	//int *p1 = &v;
	//int **p2 = &p1;






	int v = 8;
	//cout << "int v = 8;" << endl;
	//cout << &v << ": |" << v<<"| int v" << endl;
	//cout << "      &v" << ": |" << "v" <<  endl;
	//cout << "  " << endl;

	int *p1 = &v;
	//cout << "int *p1 = &v;" << endl;
	//cout << &p1 << ": |" << p1 << "| int *p1    --->*p1   : " <<*p1 <<endl;
	//cout << "     &p1" << ": |" << "p1" << endl;
	//cout << "  " << endl;


	int **p2 = &p1;
	//**p2 = 9;
	//*p1 = 10;
	//cout << "int **p2 = &p1;" << endl;
	//cout << &p2 << ": |" << p2 << "| int **p2   --->*p2  : " << *p2 << endl;
	//cout << "                                --->**p2 : " << **p2 << endl;
	//cout << "     &p2" << ": |" << "p2" << endl;

	//cout << *p2 << endl;


	//int **p2 = &p1;
	//**p2 = 99;
	//*p2 = (int *)3;

	//cout << "&v   :" << &v << endl;
	//cout << "p1   :" << p1 << endl;
	////cout <<"*p1   :" <<  *p1 << endl;
	//cout << "&p1  :" << &p1 << endl;
	//cout << "  " << endl;
	//cout << "p2   :" << p2 << endl;
	//cout << "*p2  :" << *p2 << endl;
	////cout << "**p2 :" << **p2 << endl;
	//cout << "&p2  :" << &p2 << endl;
	






	system("pause");
}