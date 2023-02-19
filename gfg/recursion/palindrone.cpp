#include <iostream>
using namespace std;

// bool palindrone(string &s, int start, int end)
// {

//     while (start <= end)
//     {
//         // cout << s[start] << endl;
//         // cout << s[end] << endl;

//         if ((s[start] != s[end]))
//         {
//             return 0;
//         }
//         start++;
//         end--;
//     }
//     return 1;
// }

bool palindrone(string &s, int start, int end)
{

    if (start >= end)
    {
        return true;
    }
    return (s[start] == s[end] && palindrone(s, start + 1, end - 1));
}
int main()
{
    string s = "abbcbba";
    int start = 0;

    int end = s.length() - 1;

    cout << palindrone(s, start, end);

    return 0;
}