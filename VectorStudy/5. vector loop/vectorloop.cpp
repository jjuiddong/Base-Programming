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

	// 1. 반복자를 이용하는 방법 (iterator)
	// 벡터의 첫 번째 요소의 반복자(iterator) 를 얻어온다.
	vector<string>::iterator it = strs.begin();

	// 벡터의 끝을 가르키지 않는다면 화면에 문자열을 출력한다.
	// 결국 벡터의 처음부터 끝까지 따라가면서 화면에 문자열을 
	// 출력하게 된다.
	cout << "display 1 ------------------" << endl;
	while (strs.end() != it)
	{
		cout << *it << endl;

		// 다음 반복자(iterator)로 이동한다.
		++it;
	}


	// 2. 대괄호를 이용하는 방법
	cout << "display 2 ------------------" << endl; 
	for (unsigned int i=0; i < strs.size(); ++i)
	{
		cout << strs[ i] << endl;
	}


	// 3. 반복자를 이용해서 거꾸로 출력하기
	cout << "display 3 ------------------" << endl; 
	vector<string>::reverse_iterator rit = strs.rbegin();
	while (strs.rend() != rit)
	{
		cout << *rit << endl;
		++rit;
	}


	// 4. auto 키워드를 사용해서 루프돌기
	cout << "display 4 ------------------" << endl; 
	auto ait = strs.begin();
	while (strs.end() != ait)
	{
		cout << *ait++ << endl;
	}

}
