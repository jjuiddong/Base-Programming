
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.

// string::replace 함수 레퍼런스.
// http://www.cplusplus.com/reference/string/string/replace/


void main()
{
	string str1 = "hello world hello world!!";


	// 1. str1 문자열에서 일곱 번째 문자부터 시작해서 다섯 개의 문자를
	// everybody 문자로 바꾼다.
	str1.replace(6, 5, "everybody" );


	// 스트링 출력
	cout << str1 << endl;
}
