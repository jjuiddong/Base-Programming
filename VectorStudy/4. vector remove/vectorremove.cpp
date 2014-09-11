#include <iostream> // input/output stream �� ���õ� ���̺귯���� ����� �� �ִ�.
#include <vector> // vector Ŭ������ ���ǵ� ��� �����̴�.
using namespace std; // std �̸������� �ִ� ���̺귯���� std:: �� ������ �ʰ� �� ���ְ� �Ѵ�.


// ���Ϳ� ����� ������ ����Ѵ�.
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
	// ���� ���� �����ϴ� ���� ������ �����Ѵ�.
	vector<int> numbers;

	// ���Ϳ� ���� �����Ѵ�.
	numbers.push_back(0);
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);

	// ���Ϳ� ����� ������ ����Ѵ�.
	displayVector(numbers);


	// ������ ��(back)�� �ִ� ������ �ϳ� �����Ѵ�.
	// ��Ҹ� �����ϴ� �Լ��� push_ �Լ��� �ݴ� �ǹ̸� ���� 
	// pop_~ �Լ��� ���ȴ�.
	numbers.pop_back();
	

	// ���Ϳ� ����� ������ ����Ѵ�.
	displayVector(numbers);


	// ������ ��(back)�� �ִ� ������ �� �� �����Ѵ�.
	numbers.pop_back();
	numbers.pop_back();
	
	displayVector(numbers);

}
