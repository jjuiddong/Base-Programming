#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <vector> // vector Ŭ������ ���ǵ� ��� �����̴�.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


void main()
{
	vector<int> numbers;

	// reserver() �Լ��� �̿��ؼ� ���� �뷮�� �ø���.
	// 10���� integer ���� �� �뷮�� �̸� ��Ƴ��´�. 
	// size �� �þ� ���� �ʴ´�.
	numbers.reserve(10);

	// ���Ϳ� ���� �ִ´�.
	for (int i=0; i < 10; ++i)
	{
		numbers.push_back( i );
	}

	// ���Ϳ� ����� ������ ����Ѵ�.
	for (unsigned int i=0; i < numbers.size(); ++i)
	{
		cout << numbers[ i] << endl;
	}

}
