#include <iostream>
using namespace std;

int main() {
    unsigned int k, m, n;

    cout << "Print k m n: ";
    cin >> k >> m >> n;

    unsigned int m_bit = (k >> m) & 1;
    unsigned int n_bit = (k >> n) & 1;

    unsigned int d = m_bit ^ n_bit;           // 1, якщо біти різні
    k ^= (d << m) | (d << n);                 // маска з одиницями на позиціях m і n
    cout << k << endl;

    return 0;
}