#include <iostream>
using namespace std;
int main()
{
    int n, no, fak;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        fak =  0;
        for (int j = 1; j <= no; ++j)
        {
            if ( no % j == 0)fak++;
            if (fak > 4 )break;
        }
        fak <= 4? cout << "YA" << endl : cout << "BUKAN" << endl;
    }
    return 0;
}
