#include <iostream>

using namespace std;

int main()
{
	enum Days {Sunday, Monday, Tuesday, Wednesday,
	Thursday, Friday, Saturday};

	Days today;

	today = Saturday;

	if (today == Sunday ||  today == Saturday)
		cout << "Weekend!!!!" << endl;
	else
		cout << "Working Day!!!!" << endl;

	return 0;
}