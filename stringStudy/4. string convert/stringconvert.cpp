
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
#include <sstream> // stringstream �� ���� �Ǿ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	string str1 = "hello world";


	// 1. string::c_str() �Լ��� �̿��ؼ� ���ڿ��� ù ��° �޸𸮸� ����Ű�� �����͸� 
	// ��� �� �� �ִ�. �� �Լ��� char �� �����Ϳ� ���� �Ҵ� �� �� �ִ�.
	const char *c1 = str1.c_str();


	// 2. ��Ʈ���� ����� ���ڿ��� char �� �迭�� �����Ѵ�.
	char c2[128];
	strcpy_s(c2, str1.c_str());


	// ��Ʈ�� ���.
	cout << c1 << endl;
	cout << c2 << endl;
}
