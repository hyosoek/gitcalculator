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
		cout <<"´õÇÏ¸é "<< a + b << endl;
		break;
	case '-':
		cout << "»©¸é " << a - b << endl;
		break;
	}
}