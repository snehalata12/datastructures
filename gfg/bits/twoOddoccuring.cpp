#include <iostream>
using namespace std;
void printOdd_occuring(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[6] = {5, 5, 2, 1, 4, 4};
    printOdd_occuring(arr, 6);

    return 0;
}