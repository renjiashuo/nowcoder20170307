#include <iostream>
#include <math.h>

using namespace std;

//////////////////////////////////////////////////////////////////////////
//链接：https://www.nowcoder.com/questionTerminal/fb511c3f1ac447309368d7e5432c6c79
//来源：牛客网
//
//如果一个数字能表示为p^q(^表示幂运算)且p为一个素数, q为大于1的正整数就称这个数叫做超级素数幂。现在给出一个正整数n, 如果n是一个超级素数幂需要找出对应的p, q。
//
//输入描述 :
//输入一个正整数n(2 ≤ n ≤ 10 ^ 18)
//
//
//输出描述 :
//	 如果n是一个超级素数幂则输出p, q, 以空格分隔, 行末无空格。
//	 如果n不是超级素数幂，则输出No
//
//
//输入例子:
//27
//
//
//输出例子 :
//	 3 3
//////////////////////////////////////////////////////////////////////////

bool primeNumber(long long p)
{
	for (int i = 2; i <= sqrt(p); i++)
	{
		if (p % i == 0)
			return false;
	}
	return true;
}

int main()
{
	long long n = 0, p = 0, q = 0;
	cin >> n;
	if (n < 2)
	{
		cout << "No";
		return 0;
	}
	for (q = 2; q < n; q++)
	{
		p = pow(n, 1.0 / q);
		if (pow(p, q) == n && primeNumber(p))
		{
			cout << p << " " << q;
			return 0;
		}
	}
	cout << "No";
	return 0;
}