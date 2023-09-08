#include <iostream>
#include <string>

using namespace std;
int p = ('a' - 'A');

int main(){
	string huruf;
	getline(cin,huruf);

	for (int i = 0; i < huruf.length(); ++i)
	{
		if(90 >= int(huruf[i]) && int(huruf[i]) >= 65 )
			huruf[i] += p;
		else if(122 >= int(huruf[i]) && int(huruf[i]) >= 97 )
			huruf[i] -= p;
	}

	cout << huruf;
}
