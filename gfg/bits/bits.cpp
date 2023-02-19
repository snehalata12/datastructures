#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 2;

    // 0011
    // 0010
    // and 2
    // or 3
    // xor 1

    cout << "and " << (x & y) << endl;
    cout << "or " << (x | y) << endl;
    cout << "XOR " << (x ^ y) << endl;
    cout << "not " << (~x) << endl;

    return 0;
}