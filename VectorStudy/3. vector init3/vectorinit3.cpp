#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <vector> // vector 클래스가 정의된 헤더 파일이다.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	vector<int> numbers;

	// reserver() 함수를 이용해서 벡터 용량을 늘린다.
	// 10개의 integer 값이 들어갈 용량을 미리 잡아놓는다. 
	// size 는 늘어 나지 않는다.
	numbers.reserve(10);

	// 벡터에 값을 넣는다.
	for (int i=0; i < 10; ++i)
	{
		numbers.push_back( i );
	}

	// 벡터에 저장된 내용을 출력한다.
	for (unsigned int i=0; i < numbers.size(); ++i)
	{
		cout << numbers[ i] << endl;
	}

}
