
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	 //1. �Ϲ����� ��Ʈ�� �ʱ�ȭ.
	// char �� ������ �� string �� �ʱ�ȭ �� �� �ִ�.
	string str1 = "string1";


	// 2. 1�� �ڵ�� ���������� char �� �����ͷ� �ʱ�ȭ �� �� �ִ�.
	char *c1 = "string2";
	string str2 = c1;


	// 3. char�� �迭�� ���ؼ��� �ʱ�ȭ �� �� �ִ�.
	char c2[] = "string3";
	string str3 = c2;


	// ��Ʈ�� ���.
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
}
