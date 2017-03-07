#include <iostream>

using namespace std;

int main()
{
	long long n = 0;
	cin >> n;
	if (n < 2)
	{
		cout << "No";
		return 0;
	}
	long long p = 0, q = 0;
	bool mark = false;
	for (p = 2; p < n / 2; p++)
	{
		if (n % p == 0)
		{
			if (mark == false)
				mark = true;
			else
			{
				cout << "No";
				return 0;
			}
			q = 1;
			while (n != p)
			{
				if (n % p != 0)
				{
					cout << "No";
					return 0;
				}
				else
				{
					n /= p;
					q++;
				}
			}
			break;
		}
	}
	cout << p << " " << q;

	return 0;
}