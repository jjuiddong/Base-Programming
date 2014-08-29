
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
#include <fstream> // fstream Ÿ���� �����ϰ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	// hello.txt ������ �����ؼ� "hello world!!" ���ڿ��� �����Ѵ�.
	fstream of("hello.txt", ios_base::out);
	if (!of.is_open()) // ������ �������� ���ߴٸ� ����.
		return;
	of << "hello world!!" << endl;
	of.close();


	//1. hello.txt ������ �о, ����� ������ ȭ�鿡 ����Ѵ�.
	fstream ifs("hello.txt", ios_base::in);
	if (!ifs.is_open()) // ������ ���� ���ߴٸ� ����.
		return;
	
	// ���Ͽ� ����� ���ڿ��� �Է¹޴´�.
	// �� �ܾ �Է¹޾Ƽ� str1 = hello, str2 = world!! �� ����ȴ�.
	string str1, str2;
	ifs >> str1 >> str2;
	ifs.close();

	// �о�� ������ ����Ѵ�.
	cout << str1 << " " << str2 << endl;


	// 2. hello.txt ������ �д� �ٸ� ����̴�.
	fstream ifs2("hello.txt", ios_base::in);
	if (!ifs2.is_open())
		return;

	// ������ �� ������ �о str3�� �����Ѵ�.
	string str3;
	std::getline(ifs2, str3);
	ifs2.close();

	// �Ͼ�� ������ ����Ѵ�.
	cout << str3 << endl;



	// ������ ���̳ʸ� ���·� �����ؼ� �о�´�.
	int array[10] = {1,2,3,4,5,6,7,8,9,10};

	// ������ ���̳ʸ� ���� �����Ѵ�.
	fstream ofBin("binary.txt", ios_base::out | ios_base::binary);

	// ������ �������� ���ߴٸ� ���α׷��� �����Ѵ�.
	if (!ofBin.is_open())
		return;

	for (int i=0; i < 10; ++i)
		ofBin.write((char*)&array[ i], sizeof(int));

	ofBin.write((char*)array, sizeof(array));
	ofBin.close();


	// 3. ������ ���̳ʸ� ���� �о�´�.
	fstream ifs3("binary.txt", ios_base::in | ios_base::binary);

	// ������ ���� ���ߴٸ� ����.
	if (!ifs3.is_open())
		return;

	// ������ ���� ������ �����Ѵ�.
	int data1[10];
	int data2[10];

	// ���Ͽ� �ִ� intŸ���� ���� �ϳ��� �о�´�.
	for (int i=0; i < 10; ++i)
		ifs3.read((char*)&data1[i], sizeof(int));

	// int Ÿ���� �ѹ��� �������� �о�´�.
	ifs3.read((char*)data2, sizeof(data2));
	ifs3.close();

	// ���̳ʸ� ���Ͽ��� �о�� ������ ����Ѵ�.
	for (int i=0; i < 10; ++i)
		cout << data1[i];
	cout << endl;
	
	for (int i=0; i < 10; ++i)
		cout << data2[i];
	cout << endl;

}
