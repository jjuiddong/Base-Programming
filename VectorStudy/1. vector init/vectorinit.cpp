#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <vector> // vector 클래스가 정의된 헤더 파일이다.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	//1. 일반적인 벡터 사용법.
	// 벡터가 배열보다 좋은점은 데이터를 추가적으로 넣을 수 있다는 점이다.
	// 크기가 동적으로 변하는 것에 대한 오버헤드는 배열과 똑같으므로, 사용하기
	// 편리한 점 말고는 내부적으로 똑같다고 보면된다.

	// integer 값을 저장할 수 있는 벡터를 선언한다.
	vector<int> nValues;


	// 벡터에  integer 값을 넣는다.
	nValues.push_back(1);
	nValues.push_back(2);
	nValues.push_back(3);
	nValues.push_back(4);


	// 벡터에 저장된 내용을 출력한다.
	cout << "display nValues" << endl;
	for (unsigned int i=0; i < nValues.size(); ++i)
	{
		cout << nValues[ i] << endl;
	}


	//2. 벡터를 배열처럼 사용하기.
	// float 값을 넣을 수 있는 벡터를 선언한다.
	// 10개의 정보를 저장할 수 있는 벡터를 선언한다.
	vector<float> fValues(8);


	// 벡터에 floating 값을 넣는다.
	// 이미 10개의 배열이 잡혀있는 상태이기 때문에 push_back() 으로
	// 데이터를 넣을 필요가 없다.
	fValues[ 0] = 0.1f;
	fValues[ 1] = 0.2f;
	fValues[ 2] = 0.3f;
	fValues[ 3] = 0.4f;


	// 벡터에 저장된 내용을 출력한다.
	cout << "display fValues" << endl;
	for (unsigned int i=0; i < fValues.size(); ++i)
	{
		cout << fValues[ i] << endl;
	}


	// 3. 벡터를 선언하면서 동시에 초기화 하기.
	vector<string> sValues(8, "hello");
	sValues[ 0] = "abc";
	sValues[ 1] = "def";
	sValues[ 2] = "ghi";
	sValues[ 3] = "jkl";


	// 벡터에 저장된 내용을 출력한다.
	cout << "display sValues" << endl;
	for (unsigned int i=0; i < sValues.size(); ++i)
	{
		cout << sValues[ i].c_str() << endl;
	}
		
}
