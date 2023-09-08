#include <iostream>
#include <string>

using namespace std;

int main(){
	string huruf;
	int n;
	cin >> huruf;
	cin >> n;
	
	for (int i = 0; i < huruf.length(); ++i)
	{
		if (huruf[i] + n > 122)
		{
			huruf[i] += n - 26;
		}else {
			huruf[i] += n;
		}
	}

	cout << huruf;

}
