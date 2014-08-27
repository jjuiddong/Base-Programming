
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
#include <sstream> // stringstream 이 정의 되어 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	string str1 = "hello world";

	// 1. 스트링은 첨자 연산자 [] 로 각각의 요소를 접근 할 수 있다.
	for (unsigned int i=0; i < str1.length(); ++i)
	{
		cout << str1[ i];
	}
	cout << endl;


	// 2. 첨자 연산자로 각 요소의 정보를 수정 할 수 있다.
	str1[ 4] = ' ';
	cout << str1 << endl;

}
