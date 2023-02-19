#include <iostream>
using namespace std;
int maxCuts(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
}

int main()
{

    int n = 5, a = 2, b = 1, c = 5;

    cout << maxCuts(n, a, b, c);
    return 0;
}