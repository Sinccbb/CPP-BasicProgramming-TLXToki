#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin >> a;
    for (int i = 0; i < a;i++)
    {
        cin >> b;
        c = c + b;
        if (i == a)
        {
        	break;
        }
    }
    cout << c << endl;
}
