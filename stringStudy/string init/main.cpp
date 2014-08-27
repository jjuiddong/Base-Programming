
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	 //1. 일반적인 스트링 초기화.
	// char 형 포인터 로 string 을 초기화 할 수 있다.
	string str1 = "string1";


	// 2. 1번 코드와 마찬가지로 char 형 포인터로 초기화 할 수 있다.
	char *c1 = "string2";
	string str2 = c1;


	// 3. char형 배열을 통해서도 초기화 할 수 있다.
	char c2[] = "string3";
	string str3 = c2;


	// 스트링 출력.
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
}
