
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
#include <atlstr.h> // CA2W, CW2A 매크로가 정의된 라이브러리.
								// ATL = Active Template Library
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	// ascii 문자열 초기화.
	string str = "hello world";


	// string -> wstring 문자열 변환.
	wstring wstr = CA2W(str.c_str());
	

	// wstring -> string 문자열 변환.
	string str2 = CW2A(wstr.c_str());


	// 문자열 출력.
	cout << "string = " << str << endl;
	wcout << "wstring = " << wstr << endl;
	cout << "wstring2string = " << str2 << endl;
}
