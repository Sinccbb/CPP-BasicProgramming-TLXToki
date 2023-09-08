#include <iostream>

using namespace std;

int n, arr[10], brr[10], idx;
bool cant, pernah[10] = {false};

void rek(int kedalaman){
	if (kedalaman > n)
	{
		cant = true;
		for (int i = 2; i < n; ++i)
		{
			bool kondisi1 = brr[i] < brr[i-1] and brr[i] < brr[i+1];
			bool kondisi2 = brr[i] > brr[i-1] and brr[i] > brr[i+1]; 
			if (kondisi1 or kondisi2)
			{
				cant = false;
			}else{
				cant=true;
				break;
			}
		}
		if (!cant || n<3)
		{
			for (int i = 1; i <= n; ++i)
			{
				cout << brr[i];
			}cout << endl;
		}
	}else{
		for (int i = 1; i <= n; ++i)
		{
			if (!pernah[i])
			{
				pernah[i] = true;
				brr[kedalaman] = i;
				rek(kedalaman + 1);
				pernah[i] = false;
			}
		}
	}
}
int main(){
	cin >> n;
	rek(1);
}
