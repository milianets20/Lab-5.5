#include <iostream>

using namespace std;

int depth = 0;

double Function(int a, int n, int level, int& depth)
{
	if (level > depth)
		depth = level;
	cout << "level = " << level << endl;
	if (n == 1)
		return 1;
	else
	{
		return  1. / 3 * (2 * Function(a, n - 1, level + 1, depth) +
			8. / (pow(Function(a, n - 1, level + 1, depth), 2)));
	}
}

int main()
{
	int n;
	cout << "n = "; cin >> n;
	cout << "result = " << Function(1, n, 1, depth) << endl;
	cout << "depth = " << depth;
}