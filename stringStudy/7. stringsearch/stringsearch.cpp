
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	string str1 = "hello world hello world!!";

	// 1. ���ڿ� ������ Ư�� ���ڿ��� �˻��ؼ�, ã�Ҵٸ� 
	//  �ε����� �����Ѵ�.
	int n1 = str1.find( "world" );
	string str2 = &str1[ n1];


	// 2. ���ڿ��� �ڿ��� ã�´�.
	int n2 = str1.rfind( "world" );
	string str3 = &str1[ n2];


	// 3. Ư�� ���ڿ��� ã�Ƽ� �����Ѵ�.
	str1.erase(n1);


	// ��Ʈ�� ���.
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str1 << endl;
}
