#include<iostream>
using namespace std;

void test01()
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;
}

void test02()
{
	string email = "xioali@sina.com";

	int pos = email.find('@');

	string name = email.substr(0, pos);
	cout << "name = " << name << endl;
}

int main()
{
	test01();
	test02();

	return 0;
}