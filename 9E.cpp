#include <iostream>
using namespace std;
int mat1[101][101], mat2[101][101], hasil[101][101];
int main(){
	int N,M,P;
	cin >> N >> M >> P;
	
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
				cin >> mat1[i][j];

	for (int i = 0; i < M; ++i)
		for (int j = 0; j < P; ++j)
			cin >> mat2[i][j];

	for (int i = 0; i < N; ++i){
		for (int j = 0; j < P; ++j){
			for (int k = 0; k < M; ++k){
				hasil[i][j] += (mat1[i][k]*mat2[k][j]);
			}
				cout << hasil[i][j] << " ";
		}
			cout << endl;
	}

	return 0;
}
