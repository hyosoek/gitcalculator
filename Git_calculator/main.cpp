#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	char cal;
	cin >> cal;
	switch (cal)
	{
	case '+':
		cout <<"���ϸ� "<< a + b << endl;
		break;
	case '-':
		cout << "���� " << a - b << endl;
		break;
	case '/':
		cout << "������" << a / b << endl;
	}
}