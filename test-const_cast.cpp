#include <iostream>
using namespace std;

int main()
{
	const int a=1;
	int *p = const_cast<int *>(&a);
	*p = 2;
	cout << "value a="<< a << endl;
	cout << "value *p="<< *p << endl;
	cout << "address a="<< &a << endl;
	cout << "address p="<< p << endl;

	return 0;
}
