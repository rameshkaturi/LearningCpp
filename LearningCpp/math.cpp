#include <iostream>

using namespace std;

int sum(int x, int y)
{
	return (x + y);
}
int diff(int x, int y)
{
	return (x - y);
}
int main()
{
	int a, b;
	a = 10;
	b = 45;
	cout << a << " + " << b << " = " << sum(a, b) << endl;
	cout << a << " - " << b << " = " << diff(a, b) << endl;
	return 0;
}