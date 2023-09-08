#include <iostream>
using namespace std;
int arr[2][1001];
int konversi(char z){
    int jadi;
    if(z == 'A') jadi = 1;
    if(z == 'B') jadi = 2;
    return jadi;
}
void tukar(int x, int a, int y, int b){
        int penentu_1, penentu_2;
        penentu_1 = arr[x-1][a-1];
        penentu_2 = arr[y-1][b-1];
        arr[x-1][a-1] = penentu_2;
        arr[y-1][b-1] = penentu_1;
}
int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> arr[i][j];
        }
    }
    int balik;
    cin >> balik;
    char x,y;
    int a, b;
    for (int i = 0; i < balik; ++i)
    {
        cin >> x >> a >> y >> b;
        tukar(konversi(x),a,konversi(y),b);
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout <<arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
