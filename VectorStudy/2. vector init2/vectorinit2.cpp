#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <vector> // vector 클래스가 정의된 헤더 파일이다.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	// resize() 함수로 벡터의 크기를 지정 할 수 있다.
	vector<int> numbers;
	numbers.resize(10);

	// 벡터에 값을 저장한다. 벡터 요소 순서대로 0 부터 벡터크기-1 값이 저장된다.
	for (unsigned int i=0; i < numbers.size(); ++i)
	{
		numbers[ i] = i;
	}

	// 벡터에 저장된 내용을 출력한다.
	for (unsigned int i=0; i < numbers.size(); ++i)
	{
		cout << numbers[ i] << endl;
	}

}
