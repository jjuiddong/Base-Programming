#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <vector> // vector Ŭ������ ���ǵ� ��� �����̴�.
#include <string> // string Ŭ������ ���ǵ� ��� �����̴�.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	// ���ڿ��� �����ϴ� ���͸� �����Ѵ�.
	vector<string> strs;

	// ���Ϳ� ���ڿ��� �����Ѵ�.
	strs.push_back( "string0" );
	strs.push_back( "string1" );
	strs.push_back( "string2" );
	strs.push_back( "string3" );

	// 1. �ݺ��ڸ� �̿��ϴ� ��� (iterator)
	// ������ ù ��° ����� �ݺ���(iterator) �� ���´�.
	vector<string>::iterator it = strs.begin();

	// ������ ���� ����Ű�� �ʴ´ٸ� ȭ�鿡 ���ڿ��� ����Ѵ�.
	// �ᱹ ������ ó������ ������ ���󰡸鼭 ȭ�鿡 ���ڿ��� 
	// ����ϰ� �ȴ�.
	cout << "display 1 ------------------" << endl;
	while (strs.end() != it)
	{
		cout << *it << endl;

		// ���� �ݺ���(iterator)�� �̵��Ѵ�.
		++it;
	}


	// 2. ���ȣ�� �̿��ϴ� ���
	cout << "display 2 ------------------" << endl; 
	for (unsigned int i=0; i < strs.size(); ++i)
	{
		cout << strs[ i] << endl;
	}


	// 3. �ݺ��ڸ� �̿��ؼ� �Ųٷ� ����ϱ�
	cout << "display 3 ------------------" << endl; 
	vector<string>::reverse_iterator rit = strs.rbegin();
	while (strs.rend() != rit)
	{
		cout << *rit << endl;
		++rit;
	}


	// 4. auto Ű���带 ����ؼ� ��������
	cout << "display 4 ------------------" << endl; 
	auto ait = strs.begin();
	while (strs.end() != ait)
	{
		cout << *ait++ << endl;
	}

}
