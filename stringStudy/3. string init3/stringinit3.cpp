
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
#include <sstream> // stringstream 이 정의 되어 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	int n = 10;
	float f = 1.234f;
	string str = "string";

	// 1. 변수의 값들을 string 에 저장할 때는 stringstream을 사용하면 된다.
	stringstream ss;
	ss << str << " " << n << " " << f;
	string str1 = ss.str();


	// 2. C언어 방식을 사용해 string 을 초기화 할 수 있다. 
	// 코드가 복잡해지고, 시대의 흐름에 맞지 않지만, 잘 작동한다.
	char buff[128];
	sprintf_s(buff, "%s %d %f", str.c_str(), n, f);
	string str2 = buff;


	cout << str1 << endl;
	cout << str2 << endl;
}
