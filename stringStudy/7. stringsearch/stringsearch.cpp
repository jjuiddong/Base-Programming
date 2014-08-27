
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	string str1 = "hello world hello world!!";

	// 1. 문자열 내부의 특정 문자열을 검색해서, 찾았다면 
	//  인덱스를 리턴한다.
	int n1 = str1.find( "world" );
	string str2 = &str1[ n1];


	// 2. 문자열을 뒤에서 찾는다.
	int n2 = str1.rfind( "world" );
	string str3 = &str1[ n2];


	// 3. 특정 문자열을 찾아서 제거한다.
	str1.erase(n1);


	// 스트링 출력.
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str1 << endl;
}
