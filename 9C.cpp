#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int N, armod[1001],kuy, b = 0;
	memset(armod, 0, sizeof(armod));
	cin >> N;
	for (int i = 0; i < N; ++i){
		cin >> kuy;
		armod[kuy]++;
	}
	for (int i = 1; i <= 1000; ++i)if (armod[b] <= armod[i])b=i;
	cout << b;
	return 0;
}
