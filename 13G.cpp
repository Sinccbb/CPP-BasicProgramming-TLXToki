#include <iostream>
#include <vector>
using namespace std;

vector<vector<bool>> visited(100, vector<bool>(100, false));
vector<vector<int>> arr(100, vector<int>(100, 0));
int count = 0;

void f(int x, int y, int c, int M, int N) {
    if (x >= 0 && x < M && y >= 0 && y < N) {
        if (!visited[x][y]) {
            if (arr[x][y] == c) {
                count++;
                visited[x][y] = true;
                f(x + 1, y, c, M, N);
                f(x - 1, y, c, M, N);
                f(x, y + 1, c, M, N);
                f(x, y - 1, c, M, N);
            }
        }
    }
}

int main() {
    int M, N;
    cin >> M >> N;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    int B, K;
    cin >> B >> K;

    int target_color = arr[B][K];
    f(B, K, target_color, M, N);

    int score = count * (count - 1);
    cout << score << endl;

    return 0;
}
