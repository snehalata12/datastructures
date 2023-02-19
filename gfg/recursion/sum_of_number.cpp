#include <iostream>
using namespace std;

// int sum(int n)
// {
//     int sum = 0;

//     while (n > 0)
//     {
//         sum += n % 10;
//         n = n / 10;
//     }
//     return sum;
// }

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n % 10 + sum(n / 10);
}

int main()
{
    int n = 1512;

    cout << sum(n) << endl;

    return 0;
}