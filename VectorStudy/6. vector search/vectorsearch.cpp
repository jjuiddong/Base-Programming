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

	// ������ ù ��° ����� �ݺ���(iterator) �� ���´�.
	vector<string>::iterator it = strs.begin();

	// ������ ���鼭 �ش� ���ڿ��� �ִ��� �˻��ϰ�, �ִٸ�
	// ȭ�鿡 ����Ѵ�.
	while (strs.end() != it)
	{
		// ���ڿ��� ���Ѵ�.
		if (*it == "string1")
		{
			cout << "find " << *it << endl;

			// ���ڿ��� ã�Ҵٸ� ������ �����Ѵ�.
			break;
		}

		// ���� �ݺ���(iterator)�� �̵��Ѵ�.
		++it;
	}

}
