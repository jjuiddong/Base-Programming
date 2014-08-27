
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
#include <sstream> // stringstream �� ���� �Ǿ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	int n = 10;
	float f = 1.234f;
	string str = "string";

	// 1. ������ ������ string �� ������ ���� stringstream�� ����ϸ� �ȴ�.
	stringstream ss;
	ss << str << " " << n << " " << f;
	string str1 = ss.str();


	// 2. C��� ����� ����� string �� �ʱ�ȭ �� �� �ִ�. 
	// �ڵ尡 ����������, �ô��� �帧�� ���� ������, �� �۵��Ѵ�.
	char buff[128];
	sprintf_s(buff, "%s %d %f", str.c_str(), n, f);
	string str2 = buff;


	cout << str1 << endl;
	cout << str2 << endl;
}
