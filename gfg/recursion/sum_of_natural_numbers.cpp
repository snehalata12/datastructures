#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int sum2(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum2(n - 1);
}

int main()
{
    int n = 5;
    cout << sum2(5);

    return 0;
}