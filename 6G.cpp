#include <iostream>
using namespace std;
int main()
{
    int x,min,max;
    cin >> x;
    int f[x];
    for (int i = 0; i < x; i++)
    {
        cin >> f[i];
    }
    min = f[0];
    max = f[0];
    for (int j = 0; j < x; j++)
    {
        if (min > f[j])
        {
            min = f[j];
        }
        if (max < f[j])
        {
            max = f[j];
        }
    }
    cout << max << " " << min;
}
