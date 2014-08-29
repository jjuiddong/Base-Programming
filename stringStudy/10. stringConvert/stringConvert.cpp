
#define _CRT_SECURE_NO_WARNINGS 1 // sscanf 경고메세지를 무시하기 위한 명령어.

#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
#include <sstream> // string을 분석할 수 있는 stringstream 이 정의되어 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	string str1 = "123 hello 123.456 world";

	// 1. str1에 저장된 문자열을 sscanf() 함수를 통해서 분해한다.
	// C 스타일 코드.
	int n;
	float f;
	char s1[128] = {0};
	char s2[32] = {0};
	sscanf( str1.c_str(), "%d %s %f %s",  &n, s1, &f, s2);


	// 2. stringstream 을 이용해서 문자열을 분해할 수 있다.
	// C++ 스타일 코드.
	stringstream ss(str1);
	int n2;
	float f2;
	string str2;
	char s3[32];
	ss >> n2 >> str2 >> f2 >> s3;


	// 문자열 출력.
	cout << "n = " << n << endl;
	cout << "s1 = " << s1 << endl;
	cout << "f = " << f << endl;
	cout << "s2 = " << s2 << endl;

	cout << "n2 = " << n2 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "f2 = " << f2 << endl;
	cout << "s3 = " << s3 << endl;
}
