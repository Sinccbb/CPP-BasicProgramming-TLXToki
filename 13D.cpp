#include <iostream>
#include <vector>

using namespace std;


int N, K;
vector<int> arrkom;

void kombinasi(int kedalaman, int awal) {
    if (kedalaman == K) {
        for (int i = 0; i < K; i++) {
            cout << arrkom[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = awal; i <= N; i++) {
        arrkom[kedalaman] = i;
        kombinasi(kedalaman + 1, i + 1);
    }
}

int main() {
    cin >> N >> K;

    arrkom.resize(K);
    kombinasi(0, 1);

    return 0;
}
