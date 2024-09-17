#include <iostream>
#include <array>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n];
    cin>>arr;
    int l = 0, r = n - 1, p = 1;

    while (l < r)
    {
        if (arr[l] != arr[r])
        {
            p = 0;
            break;
        }

        l++;
        r--;
    }
    if (p == 1)
    {
        cout << "pali" << endl;
    }
    else
    {
        cout << "not" << endl;
    }
    return 0;
}