#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	while(x % 2 == 0)
	{
		x = x / 2;
	}
	if (x == 1)
	{
		cout << "ya";
	}
	else
	{
		cout << "bukan";
	}

	return 0;
}
