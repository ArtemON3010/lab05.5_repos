#include <iostream>
using namespace std;

int f(int n, int Sum)
{
	if (n != 0)
	{
		Sum += n;
		return n % 10 + f(n / 10., Sum);

	}
	else
	{
		return 0;
	}

}
int k(int n, int level, int& depth)
{
	if ((level > depth) && (n != 0))
	{
		depth = level;
		cout << " level = " << level << endl;
		return n % 10 + k(n / 10., level + 1, depth);
	}
	else
	{
		return 0;
	}

}
int main()
{
	int depth = 0;
	int Sum = f(353, 0);
	k(353, 1, depth);
	cout << " depth = " << depth << endl;
	cout << " Sum = " << Sum << endl;

}