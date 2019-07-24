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
		cout <<"더하면 "<< a + b << endl;
		break;
	case '-':
		cout << "빼면 " << a - b << endl;
		break;
	case '/':
		cout << "나누면" << a / b << endl;
	}
}