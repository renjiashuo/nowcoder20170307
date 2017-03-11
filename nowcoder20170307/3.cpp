#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//////////////////////////////////////////////////////////////////////////
//链接：https://www.nowcoder.com/questionTerminal/3a003cb6a3174ef9835fa603e01d8b52
//来源：牛客网
//
//牛牛新买了一本算法书，算法书一共有n页，页码从1到n。牛牛于是想了一个算法题目：在这本算法书页码中0~9每个数字分别出现了多少次？
//
//输入描述 :
//输入包括一个整数n(1 ≤ n ≤ 1, 000, 000, 000)
//
//
//输出描述 :
//	 输出包括一行10个整数，即0~9这些数字在页码中出现的次数，以空格分隔。行末无空格。
//
//
//输入例子:
//999
//
//
//输出例子 :
//	 189 300 300 300 300 300 300 300 300 300
//////////////////////////////////////////////////////////////////////////

int NumberOf0Between1AndN_Solution(int n)
{
	if (n == 0)
		return 0;
	int result = 0;
	int length = 0;
	int temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid == 0)
		{
			result += pow(10, backLength) * front + back + 1;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
	}
	for (int i = 0; i < length; i++)
	{
		result -= pow(10, i);
	}

	return result;
}

int NumberOf1Between1AndN_Solution(int n)
{
	if (n == 0)
		return 0;
	int result = 0;
	int length = 0;
	int temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid < 1)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid == 1)
		{
			result += pow(10, backLength) * front + back + 1;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
	}

	return result;
}

int NumberOf2Between1AndN_Solution(int n)
{
	if (n == 0)
		return 0;
	int result = 0;
	int length = 0;
	int temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid < 2)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid == 2)
		{
			result += pow(10, backLength) * front + back + 1;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
	}

	return result;
}

int NumberOf3Between1AndN_Solution(int n)
{
	if (n == 0)
		return 0;
	int result = 0;
	int length = 0;
	int temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid < 3)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid == 3)
		{
			result += pow(10, backLength) * front + back + 1;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
	}

	return result;
}

int NumberOf4Between1AndN_Solution(int n)
{
	if (n == 0)
		return 0;
	int result = 0;
	int length = 0;
	int temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid < 4)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid == 4)
		{
			result += pow(10, backLength) * front + back + 1;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
	}

	return result;
}

int NumberOf5Between1AndN_Solution(int n)
{
	if (n == 0)
		return 0;
	int result = 0;
	int length = 0;
	int temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid < 5)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid == 5)
		{
			result += pow(10, backLength) * front + back + 1;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
	}

	return result;
}

int NumberOf6Between1AndN_Solution(int n)
{
	if (n == 0)
		return 0;
	int result = 0;
	int length = 0;
	int temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid < 6)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid == 6)
		{
			result += pow(10, backLength) * front + back + 1;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
	}

	return result;
}

int NumberOf7Between1AndN_Solution(int n)
{
	if (n == 0)
		return 0;
	int result = 0;
	int length = 0;
	int temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid < 7)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid == 7)
		{
			result += pow(10, backLength) * front + back + 1;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
	}

	return result;
}

int NumberOf8Between1AndN_Solution(int n)
{
	if (n == 0)
		return 0;
	int result = 0;
	int length = 0;
	int temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid < 8)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid == 8)
		{
			result += pow(10, backLength) * front + back + 1;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
	}

	return result;
}

int NumberOf9Between1AndN_Solution(int n)
{
	if (n == 0)
		return 0;
	int result = 0;
	int length = 0;
	int temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid < 9)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid == 9)
		{
			result += pow(10, backLength) * front + back + 1;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
	}

	return result;
}

//void Number(int n)
//{
//	int num[10] = { 0 };
//	for (int i = 1; i <= n; i++)
//	{
//		int N = i;
//		while (N != 0)
//		{
//			int N_last = N % 10;
//			switch (N_last)
//			{
//			case 0:
//				num[0]++;
//				break;
//			case 1:
//				num[1]++;
//				break;
//			case 2:
//				num[2]++;
//				break;
//			case 3:
//				num[3]++;
//				break;
//			case 4:
//				num[4]++;
//				break;
//			case 5:
//				num[5]++;
//				break;
//			case 6:
//				num[6]++;
//				break;
//			case 7:
//				num[7]++;
//				break;
//			case 8:
//				num[8]++;
//				break;
//			case 9:
//				num[9]++;
//				break;
//			}
//			N /= 10;
//		}
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		cout << num[i] << " ";
//	}
//	cout << num[9];
//}

int main()
{
	int n = 999;
	cin >> n;

	cout << NumberOf0Between1AndN_Solution(n) << " ";
	cout << NumberOf1Between1AndN_Solution(n) << " ";
	cout << NumberOf2Between1AndN_Solution(n) << " ";
	cout << NumberOf3Between1AndN_Solution(n) << " ";
	cout << NumberOf4Between1AndN_Solution(n) << " ";
	cout << NumberOf5Between1AndN_Solution(n) << " ";
	cout << NumberOf6Between1AndN_Solution(n) << " ";
	cout << NumberOf7Between1AndN_Solution(n) << " ";
	cout << NumberOf8Between1AndN_Solution(n) << " ";
	cout << NumberOf9Between1AndN_Solution(n);

	return 0;
}