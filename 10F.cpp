#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int nepin[1001][3];

int Tij(int xi, int xj, int yi, int yj, int d){
	return (pow(abs(xi - xj), d) + pow(abs(yi - yj), d));
}

int main()
{
	int n, d;
	cin >> n >> d;

	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		nepin[i][0] = x, nepin[i][1] = y;		
	}

	int min = INT_MAX, max = INT_MIN, hasil;

	for (int i = 0; i < n; ++i)
		for (int j = i + 1; j < n; ++j)
		{
			hasil = Tij(nepin[i][0] , nepin[j][0] , nepin[i][1] , nepin[j][1] , d);
			if(hasil >= max)max = hasil;
			if(hasil <= min)min = hasil;
		}

	cout << min << " " << max;
	return 0;
}
