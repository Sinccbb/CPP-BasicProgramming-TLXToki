#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int array[a][b];
    for (int j = 0; j < a; j++)
    {
        for (int i = 0; i < b; i++)
        {
            cin >> array[j][i];
        }        
    }
    //array30, array20, array10, array00
    //array31, array21, array11, array01
    //array32, array22, array12, array02
    for (int i = 0; i < b; i++)
    {
        for (int j = a-1; j >= 0; j--)
        {
        cout << array[j][i] << " ";   
        }
        cout << endl;
    }
    return 0;
}
