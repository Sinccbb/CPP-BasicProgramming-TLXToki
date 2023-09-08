#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	
	string huruf;
	cin >> huruf;

	int jangka = huruf.length();

	for (int i = 0; i < jangka; ++i){
		if (huruf[i] == '_'){
			huruf[i+1] = toupper(huruf[i+1]);
			huruf.erase(i,1); 
		}else if((65 <= huruf[i] && huruf[i] <= 90) && (huruf[i-1] != '_')){
			huruf[i] = tolower(huruf[i]);
			huruf.insert(i,"_");
		}
		jangka = huruf.length();
	}

	cout << huruf << endl;

	return 0;
}
