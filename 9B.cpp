#include <iostream>

using namespace std;
int main()
{
	int  C[100],ar = 0;
	while (cin >> C[ar]){
		ar++;
	}
	cout << endl;
	while (ar--){
		cout << C[ar] << endl;
	}
	return 0;
}
