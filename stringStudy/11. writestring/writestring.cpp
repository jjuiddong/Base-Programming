
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
#include <fstream> // fstream 타입을 정의하고 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	string str1 = "hello world";

	//1. fstream을 이용해서 문자열을 파일에 저장한다.
	fstream of("memo.txt", ios_base::out);

	// 파일을 생성하지 못했다면 프로그램을 종료한다.
	if (!of.is_open())
		return;

	of << str1 << endl;

	// 파일을 닫는다.
	// fstream 소멸자에서 파일을 닫기 때문에 close()함수를 호출하지 않아도 파일이 닫힌다.
	of.close();


	//2. fstream을 이용해서 int배열을 저장한다.
	int array[10] = {1,2,3,4,5,6,7,8,9,10};

	// 파일을 바이너리 모드로 생성한다.
	fstream ofBin("memo_binary.txt", ios_base::out | ios_base::binary);
	
	// 파일을 생성하지 못했다면 프로그램을 종료한다.
	if (!ofBin.is_open())
		return;

	for (int i=0; i < 10; ++i)
		ofBin.write((char*)&array[ i], sizeof(int));
	// ofBine << array[ 0]  로 프로그래밍 하면 binary가 아니라 text 모드로 정보가 저장된다.

	ofBin.write((char*)array, sizeof(array));

	// 파일을 닫는다.
	// fstream 소멸자에서 파일을 닫기 때문에 close()함수를 호출하지 않아도 파일이 닫힌다.
	ofBin.close();
}
