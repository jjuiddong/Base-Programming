
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	// 1. cin �� ���� ���ڿ� ������ str1 �� �����Ѵ�.
	// ����Ű�� �Է� �� ������ ���ڿ��� �Է� �޴´�.
	string str1;
	cin >> str1;


	// 2. cin �� ���� ���� ���ڿ��� �Է� ���� �� �ִ�.
	// �Է��� ����ó�� �غ���. aaa bbb ccc  
	// str2 = aaa, str3 = bbb, str4 = ccc  �� ���� ����ȴ�.	
	string str2, str3, str4;
	cin >> str2 >> str3 >> str4;


	// ��Ʈ�� ���.
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
}
