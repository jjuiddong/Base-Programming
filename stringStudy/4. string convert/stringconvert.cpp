
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
#include <sstream> // stringstream 이 정의 되어 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	string str1 = "hello world";


	// 1. string::c_str() 함수를 이용해서 문자열의 첫 번째 메모리를 가르키는 포인터를 
	// 얻어 올 수 있다. 이 함수로 char 형 포인터에 값을 할당 할 수 있다.
	const char *c1 = str1.c_str();


	// 2. 스트링에 저장된 문자열을 char 형 배열에 복사한다.
	char c2[128];
	strcpy_s(c2, str1.c_str());


	// 스트링 출력.
	cout << c1 << endl;
	cout << c2 << endl;
}
