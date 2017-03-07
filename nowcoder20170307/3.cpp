#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

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
	for (int i = 0; i < length - 1; i++)
	{
		int front = n / pow(10, i + 1);
		int mid = (n - front * pow(10, i + 1)) / pow(10, i);
		int back = n % (int)pow(10, i);
		int backLength = i;
		if (mid == 0)
		{
			result += pow(10, backLength) * front;
		}
		else
		{
			result += pow(10, backLength) * (front + 1);
		}
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
		if (mid == 0)
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
		if (mid == 0)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid <= 2)
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
		if (mid == 0)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid <= 3)
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
		if (mid == 0)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid <= 4)
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
		if (mid == 0)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid <= 5)
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
		if (mid == 0)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid <= 6)
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
		if (mid == 0)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid <= 7)
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
		if (mid == 0)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid <= 8)
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
		if (mid == 0)
		{
			result += pow(10, backLength) * front;
		}
		else if (mid <= 9)
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

int main()
{
	int n = 999;
	//cin >> n;

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