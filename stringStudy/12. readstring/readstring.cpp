
#include <iostream> // input/output stream 에 관련된 라이브러리를 사용할 수 있다.
#include <string> // string 타입을 정의하고 있는 라이브러리.
#include <fstream> // fstream 타입을 정의하고 있는 라이브러리.
using namespace std; // std 이름공간에 있는 라이브러리를 std:: 를 붙이지 않고 쓸 수있게 한다.


void main()
{
	// hello.txt 파일을 생성해서 "hello world!!" 문자열을 저장한다.
	fstream of("hello.txt", ios_base::out);
	if (!of.is_open()) // 파일을 생성하지 못했다면 종료.
		return;
	of << "hello world!!" << endl;
	of.close();


	//1. hello.txt 파일을 읽어서, 저장된 내용을 화면에 출력한다.
	fstream ifs("hello.txt", ios_base::in);
	if (!ifs.is_open()) // 파일을 읽지 못했다면 종료.
		return;
	
	// 파일에 저장된 문자열을 입력받는다.
	// 한 단어씩 입력받아서 str1 = hello, str2 = world!! 로 저장된다.
	string str1, str2;
	ifs >> str1 >> str2;
	ifs.close();

	// 읽어온 정보를 출력한다.
	cout << str1 << " " << str2 << endl;


	// 2. hello.txt 파일을 읽는 다른 방법이다.
	fstream ifs2("hello.txt", ios_base::in);
	if (!ifs2.is_open())
		return;

	// 파일의 한 라인을 읽어서 str3에 저장한다.
	string str3;
	std::getline(ifs2, str3);
	ifs2.close();

	// 일어온 정보를 출력한다.
	cout << str3 << endl;



	// 파일을 바이너리 형태로 저장해서 읽어온다.
	int array[10] = {1,2,3,4,5,6,7,8,9,10};

	// 파일을 바이너리 모드로 생성한다.
	fstream ofBin("binary.txt", ios_base::out | ios_base::binary);

	// 파일을 생성하지 못했다면 프로그램을 종료한다.
	if (!ofBin.is_open())
		return;

	for (int i=0; i < 10; ++i)
		ofBin.write((char*)&array[ i], sizeof(int));

	ofBin.write((char*)array, sizeof(array));
	ofBin.close();


	// 3. 파일을 바이너리 모드로 읽어온다.
	fstream ifs3("binary.txt", ios_base::in | ios_base::binary);

	// 파일을 읽지 못했다면 종료.
	if (!ifs3.is_open())
		return;

	// 정보를 담을 변수를 선언한다.
	int data1[10];
	int data2[10];

	// 파일에 있는 int타입의 값을 하나씩 읽어온다.
	for (int i=0; i < 10; ++i)
		ifs3.read((char*)&data1[i], sizeof(int));

	// int 타입을 한번에 여러개를 읽어온다.
	ifs3.read((char*)data2, sizeof(data2));
	ifs3.close();

	// 바이너리 파일에서 읽어온 정보를 출력한다.
	for (int i=0; i < 10; ++i)
		cout << data1[i];
	cout << endl;
	
	for (int i=0; i < 10; ++i)
		cout << data2[i];
	cout << endl;

}
