#include <iostream>
using namespace std;
int main(){
    int n, expo;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        expo = 0;
        while (n % i == 0)
        {
            expo++;
            n /= i;
        }
        if (expo > 1)
        {
            cout << i << "^" << expo;
            if (i < n)cout << " x ";
        }
        else if (expo == 1){
            cout <<i;
            if(i < n)cout << " x ";
        }        
    }
    
}
