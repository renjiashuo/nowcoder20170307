#include <iostream>
#include <math.h>

using namespace std;

//////////////////////////////////////////////////////////////////////////
//���ӣ�https://www.nowcoder.com/questionTerminal/fb511c3f1ac447309368d7e5432c6c79
//��Դ��ţ����
//
//���һ�������ܱ�ʾΪp^q(^��ʾ������)��pΪһ������, qΪ����1���������ͳ�������������������ݡ����ڸ���һ��������n, ���n��һ��������������Ҫ�ҳ���Ӧ��p, q��
//
//�������� :
//����һ��������n(2 �� n �� 10 ^ 18)
//
//
//������� :
//	 ���n��һ�����������������p, q, �Կո�ָ�, ��ĩ�޿ո�
//	 ���n���ǳ��������ݣ������No
//
//
//��������:
//27
//
//
//������� :
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