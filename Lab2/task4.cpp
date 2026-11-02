#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout << (1 << (3 * n)) << endl;           // 8^n = 2^(3n)
    return 0;
}