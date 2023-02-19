#include <iostream>
using namespace std;

bool k_bitset(int n)
{

    if ((n & 1) != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, key;
    cin >> n;
    cin >> key;
    n = n >> key - 1;

    int ans = k_bitset(n);
    if (ans)
    {
        cout << "yes";
    }
    else
    {
        cout << " no";
    }

    return 0;
}