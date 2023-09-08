#include <iostream>
#include <cmath>
using namespace std;
int fungsi(int a, int b, int k, int x){
    if (k <= 0){
        return 0;
    }else if(k != 1){
        x = fungsi(a, b, k-1, x);
    }
    return abs(a*x + b);
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << fungsi(a,b,c,d);
}
