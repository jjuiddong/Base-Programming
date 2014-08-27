
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
#include <sstream> // stringstream 이 정의 되어 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	// 1. string 으로 선언된 변수 들끼리 서로 조합이 가능하다.
	// + 연산으로 문자열을 조합할 때, 첫 번째 문자열이 string 형이라면 
	// 다음에 오는 문자열은 char 형 포인터 형태라도 조합이 가능하다.
	string str1 = "hello";
	string str2 = "world";
	string str3 = str1 + " " + str2;


	// 2. + 연산자가 가능하기 때문에, += 연산자도 가능하다.
	string str4;
	str4 += "hello";
	str4 += " ";
	str4 += "world";


	// 3. 문자열뿐만 아니라 문자도 += 연산자가 동작한다.
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


	// 스트링 출력.
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
}
