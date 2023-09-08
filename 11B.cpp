#include <iostream>
#include <string>

using namespace std; 


int main() {
    string bebek;
    cin >> bebek;

    string dengklek;
    cin >> dengklek;

    size_t pos = bebek.find(dengklek);

    while (pos != string::npos) {
        
        bebek.erase(pos, dengklek.length());

        pos = bebek.find(dengklek);
    }

    cout << bebek << endl;

    return 0;
}
