#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x, y;
	for (x = 1; x <= 5; x++)
	{
		for (y = 1; y <= x; y++)
			cout << x;
		cout << endl;
	}

	for (x = 4; x >= 1; x--)
	{
		for (y = 1; y <= x; y++)
			cout << x;
		cout << endl;
	}

	cout << endl;

	char m, n;

	for (m = 'A'; m <= 'E'; m++)
	{
		for (n = 'A'; n <= m; n++)
			cout << m;
		cout << endl;
	}

	for (m = 'D'; m >= 'A'; m--)
	{
		for (n = 'A'; n <= m; n++)
			cout << m;
		cout << endl;
	}

	cout << endl;

	char a = 'A';

	for (x = 1; x <= 5; x++)
	{
		for (y = 1; y <= x; y++, a++)
			cout << a;
		cout << endl;
	}

	char b = 'J';

	for (x = 4; x >= 1; x--)
	{
		for (y = 1; y <= x; y++, b--)
			cout << b;
		cout << endl;
	}



	system("pause");
	return 0;
}