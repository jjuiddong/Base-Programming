
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
#include <atlstr.h> // CA2W, CW2A ��ũ�ΰ� ���ǵ� ���̺귯��.
								// ATL = Active Template Library
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	// ascii ���ڿ� �ʱ�ȭ.
	string str = "hello world";


	// string -> wstring ���ڿ� ��ȯ.
	wstring wstr = CA2W(str.c_str());
	

	// wstring -> string ���ڿ� ��ȯ.
	string str2 = CW2A(wstr.c_str());


	// ���ڿ� ���.
	cout << "string = " << str << endl;
	wcout << "wstring = " << wstr << endl;
	cout << "wstring2string = " << str2 << endl;
}
