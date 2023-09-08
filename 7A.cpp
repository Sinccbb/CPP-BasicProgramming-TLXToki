#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {   if (i % 10 == 0)
    {
        continue;
    }
    
        if (i > x)
        {
            break;
        }
        if (i == 42)
        {
            cout << "ERROR";
            break;
        }
        cout << i << endl;       
    }
    
    return 0;
}
