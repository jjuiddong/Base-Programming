#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <vector> // vector Ŭ������ ���ǵ� ��� �����̴�.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	//1. �Ϲ����� ���� ����.
	// ���Ͱ� �迭���� �������� �����͸� �߰������� ���� �� �ִٴ� ���̴�.
	// ũ�Ⱑ �������� ���ϴ� �Ϳ� ���� �������� �迭�� �Ȱ����Ƿ�, ����ϱ�
	// ���� �� ����� ���������� �Ȱ��ٰ� ����ȴ�.

	// integer ���� ������ �� �ִ� ���͸� �����Ѵ�.
	vector<int> nValues;


	// ���Ϳ�  integer ���� �ִ´�.
	nValues.push_back(1);
	nValues.push_back(2);
	nValues.push_back(3);
	nValues.push_back(4);


	// ���Ϳ� ����� ������ ����Ѵ�.
	cout << "display nValues" << endl;
	for (unsigned int i=0; i < nValues.size(); ++i)
	{
		cout << nValues[ i] << endl;
	}


	//2. ���͸� �迭ó�� ����ϱ�.
	// float ���� ���� �� �ִ� ���͸� �����Ѵ�.
	// 10���� ������ ������ �� �ִ� ���͸� �����Ѵ�.
	vector<float> fValues(8);


	// ���Ϳ� floating ���� �ִ´�.
	// �̹� 10���� �迭�� �����ִ� �����̱� ������ push_back() ����
	// �����͸� ���� �ʿ䰡 ����.
	fValues[ 0] = 0.1f;
	fValues[ 1] = 0.2f;
	fValues[ 2] = 0.3f;
	fValues[ 3] = 0.4f;


	// ���Ϳ� ����� ������ ����Ѵ�.
	cout << "display fValues" << endl;
	for (unsigned int i=0; i < fValues.size(); ++i)
	{
		cout << fValues[ i] << endl;
	}


	// 3. ���͸� �����ϸ鼭 ���ÿ� �ʱ�ȭ �ϱ�.
	vector<string> sValues(8, "hello");
	sValues[ 0] = "abc";
	sValues[ 1] = "def";
	sValues[ 2] = "ghi";
	sValues[ 3] = "jkl";


	// ���Ϳ� ����� ������ ����Ѵ�.
	cout << "display sValues" << endl;
	for (unsigned int i=0; i < sValues.size(); ++i)
	{
		cout << sValues[ i].c_str() << endl;
	}
		
}
