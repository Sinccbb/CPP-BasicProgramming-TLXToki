#include <iostream>

using namespace std;

int faktor(int n){
	if(n == 1)
		return 1;
	if(n % 2 != 0)
		return n * faktor(n-1);
	if(n % 2 == 0)
		return n/2 * faktor(n-1);
}
int main()
{
	int q;
	cin >> q;

	if(1 <= q && q <= 10){
		cout << faktor(q);
	}
	else
	return 0;
}
