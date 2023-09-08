#include <iostream>
using namespace std;
int balik(int x){
    int nux = x, nad = 0;
    while (nux > 0)
    {
        nad = (nad * 10) + (nux % 10);
        nux /= 10;
    }
    return nad;    
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout <<balik(balik(a) + balik(b));
    return 0;
}
