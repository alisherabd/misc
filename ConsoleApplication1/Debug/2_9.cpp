// Coding Interviews: Questions, Analysis & Solutions
// Harry He

#include <stdio.h>
#include <string>

class CMyString
{

	//these are all delarations, the implementations are below, since they all are public, we can implement them outside
public:  
	CMyString(char* pData = NULL);
	CMyString(const CMyString& str);
	~CMyString(void);
	CMyString& operator = (const CMyString& str);
	void Print();
private:
	char* m_pData;
};

//this is constructor from outside
CMyString::CMyString(char *pData)
{
	if (pData == NULL)
	{
		m_pData = new char[1];
		m_pData[0] = '\0';
	}
	else
	{
		int length = strlen(pData);
		m_pData = new char[length + 1];
		strcpy(m_pData, pData);
	}
}
//this is another constructor override
CMyString::CMyString(const CMyString &str)
{
	int length = strlen(str.m_pData);
	m_pData = new char[length + 1];
	strcpy(m_pData, str.m_pData);
}


//this is deconstructor
CMyString::~CMyString()
{
	delete[] m_pData;
}


// public reference  which points to itself // this is actually an operator that we define ourself,
// will tell here how tha asiignment is going to work in this class, not the default one.

CMyString& CMyString::operator = (const CMyString& str)
{
	if (this == &str)
		return *this;

	delete[]m_pData;
	m_pData = NULL;

	m_pData = new char[strlen(str.m_pData) + 1];
	strcpy(m_pData, str.m_pData);

	return *this;
}


// Print function implement here  as well
void CMyString::Print()
{
	printf("%s", m_pData);
}
// ==================== Test Code ====================
void Test1()
{
	char* text = "Hello world";

	CMyString str1(text);
	CMyString str2;
	str2 = str1;
}

// Assign to self
void Test2()
{
	char* text = "Hello world";

	CMyString str1(text);
	str1 = str1;
}

// Continuous Assignments
void Test3()
{
	char* text = "Hello world";

	CMyString str1(text);
	CMyString str2, str3;
	str3 = str2 = str1;
}

int main(int argc, char* argv[])
{
	Test1();
	Test2();
	Test3();

	return 0;
}


















//#include <iostream>
//using std::cout;
//using std::endl;
//
//class CMyString {
//
//public:
//	CMyString(char* pData = NULL);
//	CMyString(const CMyString& str);
//	~CMyString(void);
//
//private:
//	char* m_pData;
//};
//
//void main(){
//	CMyString vot;
//
//}