#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,h1,h2;
	cin >> a >> b >> c >> d;
	h1 = a - c;
	h2 = b - d;
	cout << abs(h1) + abs(h2);
	return 0;
}
