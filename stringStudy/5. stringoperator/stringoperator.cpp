
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
#include <sstream> // stringstream �� ���� �Ǿ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	string str1 = "hello world";

	// 1. ��Ʈ���� ÷�� ������ [] �� ������ ��Ҹ� ���� �� �� �ִ�.
	for (unsigned int i=0; i < str1.length(); ++i)
	{
		cout << str1[ i];
	}
	cout << endl;


	// 2. ÷�� �����ڷ� �� ����� ������ ���� �� �� �ִ�.
	str1[ 4] = ' ';
	cout << str1 << endl;

}
