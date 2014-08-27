
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
#include <sstream> // stringstream �� ���� �Ǿ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	// 1. string ���� ����� ���� �鳢�� ���� ������ �����ϴ�.
	// + �������� ���ڿ��� ������ ��, ù ��° ���ڿ��� string ���̶�� 
	// ������ ���� ���ڿ��� char �� ������ ���¶� ������ �����ϴ�.
	string str1 = "hello";
	string str2 = "world";
	string str3 = str1 + " " + str2;


	// 2. + �����ڰ� �����ϱ� ������, += �����ڵ� �����ϴ�.
	string str4;
	str4 += "hello";
	str4 += " ";
	str4 += "world";


	// 3. ���ڿ��Ӹ� �ƴ϶� ���ڵ� += �����ڰ� �����Ѵ�.
	string str5;
	str5 += 'h';
	str5 += 'e';
	str5 += 'l';
	str5 += 'l';
	str5 += 'o';
	str5 += ' ';
	str5 += 'w';
	str5 += 'o';
	str5 += 'r';
	str5 += 'l';
	str5 += 'd';


	// ��Ʈ�� ���.
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
}
