#include <iostream>
using namespace std;
int Count_set_bit(int n)
{
    int result = 0;
    while (n > 0)
    {

        // if (n%2==1){
        //     result++;
        //     n=n/2;
        // }

        // or

        result = result + (n & 1);
        n = n / 2;
    }
    return result;
}

int main()
{
    int n = 5;

    cout << Count_set_bit(n);

    return 0;
}