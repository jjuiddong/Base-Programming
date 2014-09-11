#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <vector> // vector 클래스가 정의된 헤더 파일이다.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


// 벡터에 저장된 내용을 출력한다.
void displayVector(const vector<int> &nums)
{
	cout << "display numbers" << endl;
	for (unsigned int i=0; i < nums.size(); ++i)
	{
		cout << nums[ i] << endl;
	}
}


void main()
{
	// 정수 값을 저장하는 벡터 변수를 선언한다.
	vector<int> numbers;

	// 벡터에 값을 저장한다.
	numbers.push_back(0);
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);

	// 벡터에 저장된 내용을 출력한다.
	displayVector(numbers);


	// 벡터의 뒤(back)에 있는 정보를 하나 제거한다.
	// 요소를 제거하는 함수는 push_ 함수의 반대 의미를 지닌 
	// pop_~ 함수로 명명된다.
	numbers.pop_back();
	

	// 벡터에 저장된 내용을 출력한다.
	displayVector(numbers);


	// 벡터의 뒤(back)에 있는 정보를 두 개 제거한다.
	numbers.pop_back();
	numbers.pop_back();
	
	displayVector(numbers);

}
