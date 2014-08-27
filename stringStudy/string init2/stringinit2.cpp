
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	// 1. cin 을 통해 문자열 정보를 str1 에 저장한다.
	// 엔터키가 입력 될 때까지 문자열을 입력 받는다.
	string str1;
	cin >> str1;


	// 2. cin 을 통해 여러 문자열을 입력 받을 수 있다.
	// 입력을 다음처럼 해보자. aaa bbb ccc  
	// str2 = aaa, str3 = bbb, str4 = ccc  와 같이 저장된다.	
	string str2, str3, str4;
	cin >> str2 >> str3 >> str4;


	// 스트링 출력.
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
}
