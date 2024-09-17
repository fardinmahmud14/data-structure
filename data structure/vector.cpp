
#include <iostream>
using namespace std;
int main()
{

    int n, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                cnt += 1;
              
                cout << a[i] << "  ";
                break;
            }
        }
    }
    cout << endl
         << "total number of duplicate number " << cnt << endl;
    return 0;
}