#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (10 > a > 0 )
	{
		cout << "satuan";
	}
	else if (100 > a && a > 9)
	{
		cout << "puluhan";
	}
	else if (1000 > a && a > 99)
	{
		cout << "ratusan";
	}
	else if (10000 > a && a > 999)
	{
		cout << "ribuan";
	}
	else if (100000 > a && a > 9999)
	{
		cout << "puluhribuan";
	}
	return 0;
}
