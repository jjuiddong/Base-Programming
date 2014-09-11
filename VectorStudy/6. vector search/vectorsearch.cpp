#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <vector> // vector 클래스가 정의된 헤더 파일이다.
#include <string> // string 클래스가 정의된 헤더 파일이다.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	// 문자열을 저장하는 벡터를 선언한다.
	vector<string> strs;

	// 벡터에 문자열을 저장한다.
	strs.push_back( "string0" );
	strs.push_back( "string1" );
	strs.push_back( "string2" );
	strs.push_back( "string3" );

	// 벡터의 첫 번째 요소의 반복자(iterator) 를 얻어온다.
	vector<string>::iterator it = strs.begin();

	// 루프를 돌면서 해당 문자열이 있는지 검사하고, 있다면
	// 화면에 출력한다.
	while (strs.end() != it)
	{
		// 문자열을 비교한다.
		if (*it == "string1")
		{
			cout << "find " << *it << endl;

			// 문자열을 찾았다면 루프를 종료한다.
			break;
		}

		// 다음 반복자(iterator)로 이동한다.
		++it;
	}

}
