
#define _CRT_SECURE_NO_WARNINGS 1 // sscanf ���޼����� �����ϱ� ���� ��ɾ�.

#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
#include <sstream> // string�� �м��� �� �ִ� stringstream �� ���ǵǾ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	string str1 = "123 hello 123.456 world";

	// 1. str1�� ����� ���ڿ��� sscanf() �Լ��� ���ؼ� �����Ѵ�.
	// C ��Ÿ�� �ڵ�.
	int n;
	float f;
	char s1[128] = {0};
	char s2[32] = {0};
	sscanf( str1.c_str(), "%d %s %f %s",  &n, s1, &f, s2);


	// 2. stringstream �� �̿��ؼ� ���ڿ��� ������ �� �ִ�.
	// C++ ��Ÿ�� �ڵ�.
	stringstream ss(str1);
	int n2;
	float f2;
	string str2;
	char s3[32];
	ss >> n2 >> str2 >> f2 >> s3;


	// ���ڿ� ���.
	cout << "n = " << n << endl;
	cout << "s1 = " << s1 << endl;
	cout << "f = " << f << endl;
	cout << "s2 = " << s2 << endl;

	cout << "n2 = " << n2 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "f2 = " << f2 << endl;
	cout << "s3 = " << s3 << endl;
}
