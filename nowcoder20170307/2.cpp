#include <iostream>

using namespace std;

int main()
{
	int L;
	long N;
	cin >> N >> L;
	if (N < 1)
	{
		cout << "No";
		return 0;
	}
	if (L < 2)
		L = 2;
	if (L == 2)
	{
		if (N % 2 == 1)
		{
			cout << N / 2 << " " << N / 2 + 1;
			return 0;
		}
		L++;
	}
	for (;L <= 100;L++)
	{
		if (L % 2 == 1)
		{
			if (N % L == 0 && N / L - L / 2 >= 0)
			{
				long M = N / L;
				for (int i = M - L / 2; i <= M + L / 2; i++)
				{
					cout << i;
					if (i != M + L / 2)
						cout << " ";
				}
				return 0;
			}
		}
		else
		{
			if (N % (L / 2) == 0 && (N / (L / 2)) % 2 == 1 && (N / (L / 2)) / 2 - L / 2 + 1 >= 0)
			{
				long M = (N / (L / 2));
				for (int i = M / 2 - L / 2 + 1; i <= M / 2 + L / 2; i++)
				{
					cout << i;
					if (i != M / 2 + L / 2)
						cout << " ";
				}
				return 0;
			}
		}
	}

	cout << "No";
	return 0;
}