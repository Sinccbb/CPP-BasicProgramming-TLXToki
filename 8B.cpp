#include <iostream>

using namespace std;
bool isPrime(int n) {
    if (n <= 1)
        return false;
        
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    
    return true;
}

int main() {
    int N;
    cin >> N; 
    
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num; 
        
        if (isPrime(num))
            cout << "YA" << endl;
        else
            cout << "BUKAN" << endl;
    }
    
    return 0;
}
