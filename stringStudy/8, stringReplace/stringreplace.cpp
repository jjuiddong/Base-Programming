
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.

// string::replace �Լ� ���۷���.
// http://www.cplusplus.com/reference/string/string/replace/


void main()
{
	string str1 = "hello world hello world!!";


	// 1. str1 ���ڿ����� �ϰ� ��° ���ں��� �����ؼ� �ټ� ���� ���ڸ�
	// everybody ���ڷ� �ٲ۴�.
	str1.replace(6, 5, "everybody" );


	// ��Ʈ�� ���
	cout << str1 << endl;
}
