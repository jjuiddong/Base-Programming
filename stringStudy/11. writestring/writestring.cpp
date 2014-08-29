
#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <string> // string Ÿ���� �����ϰ� �ִ� ���̺귯��.
#include <fstream> // fstream Ÿ���� �����ϰ� �ִ� ���̺귯��.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	string str1 = "hello world";

	//1. fstream�� �̿��ؼ� ���ڿ��� ���Ͽ� �����Ѵ�.
	fstream of("memo.txt", ios_base::out);

	// ������ �������� ���ߴٸ� ���α׷��� �����Ѵ�.
	if (!of.is_open())
		return;

	of << str1 << endl;

	// ������ �ݴ´�.
	// fstream �Ҹ��ڿ��� ������ �ݱ� ������ close()�Լ��� ȣ������ �ʾƵ� ������ ������.
	of.close();


	//2. fstream�� �̿��ؼ� int�迭�� �����Ѵ�.
	int array[10] = {1,2,3,4,5,6,7,8,9,10};

	// ������ ���̳ʸ� ���� �����Ѵ�.
	fstream ofBin("memo_binary.txt", ios_base::out | ios_base::binary);
	
	// ������ �������� ���ߴٸ� ���α׷��� �����Ѵ�.
	if (!ofBin.is_open())
		return;

	for (int i=0; i < 10; ++i)
		ofBin.write((char*)&array[ i], sizeof(int));
	// ofBine << array[ 0]  �� ���α׷��� �ϸ� binary�� �ƴ϶� text ���� ������ ����ȴ�.

	ofBin.write((char*)array, sizeof(array));

	// ������ �ݴ´�.
	// fstream �Ҹ��ڿ��� ������ �ݱ� ������ close()�Լ��� ȣ������ �ʾƵ� ������ ������.
	ofBin.close();
}
